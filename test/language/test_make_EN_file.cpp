#include <iostream>

#include "../common/errors.hpp"
#include "../../language/language.hpp"

int main()
{
    using namespace error;
    const std::string en_alphabet = "abcdefghijklmnopqrstuvwxyz";

    // TODO: change path once installation scripts are ready
    Language EN = Language::build("../../../example/language/EN");

    if (!EN.uppercase()) {
        std::cerr << "Error: " << description.at(ErrorCode::UPPERCASE) << ".\n";
        return 1;
    }

    if (EN.get_alphabet() != en_alphabet) {
        std::cerr << "Error: " << description.at(ErrorCode::ALPHABET) << ".\n";
        return 1;
    }

    if (EN.get_alphabet_size() != 26) {
        std::cerr << "Error: " << description.at(ErrorCode::ALPHABET_SIZE) << ".\n";
        return 1;
    }

    return 0;
}
