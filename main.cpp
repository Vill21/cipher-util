#include <iostream>

#include "cesar/cesar.hpp"
#include "third_party/boost_1_70_0/boost/program_options.hpp"

namespace po = boost::program_options;

int main(int argc, const char* argv[]) {
    po::options_description desc("Allowed options");
    desc.add_options()
        ("help", "produce help message")
        ("language", po::value<std::string>(), "set language for operation");
    
    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);
    
    if (vm.count("help")) {
        std::cout << desc << '\n';
        return 1;
    }
    
    return 0;
}
