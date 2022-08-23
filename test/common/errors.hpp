#ifndef CIPHER_UTIL_ERRORS_HPP
#define CIPHER_UTIL_ERRORS_HPP

#include <map>
#include <string>

namespace error {

    enum ErrorCode {
        UPPERCASE = 0,
        ALPHABET,
        ALPHABET_SIZE,
        _SIZE
    };

    const static std::map<ErrorCode, std::string> description {
        { UPPERCASE, "the expected and real alphabets' cases are not the same" },
        { ALPHABET, "the expected and real alphabets are not the same" },
        { ALPHABET_SIZE, "the expected and real alphabets' sizes are not the same" }
    };

}

#endif
