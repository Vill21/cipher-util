## Building Boost libraries

``` sh
cd third_party/boost_1_70_0
./bootstrap.sh --with-libraries=program_options
./b2 install
```

### Additionally:
* Use --with-toolset=clang if you are an OSX user
* See --help for other options
