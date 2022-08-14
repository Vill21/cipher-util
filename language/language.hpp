// author:      Vill
// version:     0.0.1
// description: This class incapsulates useful information about language.
//              Language object can be built either manually or written from file.
//              Language file should contain two lines: is there an uppercase in the alphabet and the alphabet itself.
//              Example of language file:
//                              true
//                              abcdefghijklmnopqrstuvwxyz

#ifndef language_hpp
#define language_hpp

#include <utility>
#include <string>

class Language {
public:
    Language() = default;
    ~Language() = default;
    
    static Language      build();
    static Language      build(const std::string& file_path);
    
    Language&            set_uppercase(bool uppercase);
    Language&            set_alphabet(const std::string& alphabet);
    
    bool                 uppercase() const;
    const std::string&   get_alphabet() const;
    size_t               get_alphabet_size() const;
    
private:
    bool                 _uppercase { false };  // flag which shows if the alphabet contains letters in lower and upper cases
    std::string          _alphabet;             // alphabet in lowercase
};

#endif
