#ifndef cipher_hpp
#define cipher_hpp

#include <string>
#include <iostream>

#include "../language/language.hpp"

class Cipher
{
public:
    Cipher() = delete;
    Cipher(const std::string& name) { _name = name; }
    ~Cipher() = default;
    
    virtual void cipher(std::ostream& out, const std::string& text, const Language& language) = 0;
    virtual void decipher(std::ostream& out, const std::string& text, const Language& language) = 0;
    
private:
    std::string _name;
};

#endif
