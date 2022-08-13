#include <iostream>
#include "cesar/cesar.hpp"

int main(int argc, const char * argv[]) {
    Cesar cesar("Cesar");
    cesar.set_shift(23);
    
    Language EN = Language::build("../example/language/EN");
    
    cesar.cipher(std::cout, "Hello WoRLD -_[{ZOMB}] !!!...", EN);
    cesar.decipher(std::cout, "Ebiil TlOIA -_[{WLJY}] !!!...", EN);
    
    return 0;
}
