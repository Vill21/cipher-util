#ifndef cesar_hpp
#define cesar_hpp

#include <string>

#include "../cipher/cipher.hpp"
#include "../language/language.hpp"

class Cesar : Cipher
{
public:
    Cesar() = delete;
    Cesar(const std::string& name) : Cipher(name) {}
    ~Cesar() = default;
    
    void cipher(std::ostream& out, const std::string& text, const Language& language) override;
    void decipher(std::ostream& out, const std::string& text, const Language& language) override;
    
    size_t get_shift() const;
    
    void set_shift(size_t shift);
    
private:
    size_t _shift { 1 };
};

#endif
