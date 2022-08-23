#include "language.hpp"

#include <fstream>
#include <algorithm>
#include <cctype>

Language Language::build()
{
    return Language();
}

Language Language::build(const std::string& file_path)
{
    std::ifstream language_file(file_path);

    if (!language_file.is_open()) {
        return Language();
    }

    std::string line;
    
    getline(language_file, line);
    std::transform(line.begin(), line.end(), line.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    
    bool uppercase = false;
    if (line != "false") {
        uppercase = true;
    }
    
    getline(language_file, line);
    
    language_file.close();
    
    Language language = Language::build()
                            .set_empty(false)
                            .set_uppercase(uppercase)
                            .set_alphabet(line);
    
    return language;
}

Language& Language::set_empty(bool empty)
{
    _empty = empty;
    return *this;
}

Language& Language::set_uppercase(bool uppercase)
{
    _uppercase = uppercase;
    return *this;
}

Language& Language::set_alphabet(const std::string& alphabet)
{
    _alphabet = alphabet;
    return *this;
}

bool Language::empty() const
{
    return _empty;
}

bool Language::uppercase() const
{
    return _uppercase;
}

const std::string& Language::get_alphabet() const
{
    return _alphabet;
}

size_t Language::get_alphabet_size() const
{
    return _alphabet.size();
}
