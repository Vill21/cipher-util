#include <utility>

#include "cesar.hpp"

void Cesar::cipher(std::ostream& out, const std::string& text, const Language& language)
{
    if (language.uppercase()) {
        for (size_t i = 0; i < text.size(); ++i) {
            char letter = text[i];
            if (std::isupper(text[i])) {
                letter = std::tolower(letter);
            }
            
            ptrdiff_t letter_index = language.get_alphabet().find(letter);
            
            if (letter_index == std::string::npos) {
                out << letter;
                continue;
            }
            
            letter_index = (letter_index + _shift) % language.get_alphabet_size();
            letter = language.get_alphabet().at(letter_index);
            if (std::isupper(text[i])) {
                letter = std::toupper(letter);
            }
            
            out << letter;
        }
    }
    out << '\n';
}

void Cesar::decipher(std::ostream& out, const std::string& text, const Language& language)
{
    if (language.uppercase()) {
        for (size_t i = 0; i < text.size(); ++i) {
            char letter = text[i];
            if (std::isupper(text[i])) {
                letter = std::tolower(letter);
            }
            
            ptrdiff_t letter_index = language.get_alphabet().find(letter);
            
            if (letter_index == std::string::npos) {
                out << letter;
                continue;
            }
            
            letter_index = letter_index - _shift;
            if (letter_index < 0) {
                letter_index += language.get_alphabet_size();
            }
            
            letter = language.get_alphabet().at(letter_index);
            if (std::isupper(text[i])) {
                letter = std::toupper(letter);
            }
            
            out << letter;
        }
    }
    out << '\n';
}

size_t Cesar::get_shift() const
{
    return _shift;
}

void Cesar::set_shift(size_t shift)
{
    _shift = shift;
}
