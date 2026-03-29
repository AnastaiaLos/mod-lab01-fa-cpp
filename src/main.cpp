// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    const char* str1 = "aaaaabbbb 1369  dfv";
    const char* str2 = "Sj Ddfv";
    const char* str3 = "Ryjnf, dsvcvsd!";
    const char* str4 = "CJkdl dsk123 evcss";
    const char* str5 = "d dccddc dcc Dcccc";
    const char* str6 = "dfgh sdfg sdf zxc";

    std::cout << "First fun" << std::endl;
    std::cout << faStr1(str1) << std::endl;
    std::cout << faStr1(str2) << std::endl;
    std::cout << faStr1(str3) << std::endl;
    std::cout << faStr1(str4) << std::endl;
    std::cout << faStr1(str5) << std::endl;
    std::cout << faStr1(str6) << std::endl;

    std::cout << "Second fun" << std::endl;
    std::cout << faStr2(str1) << std::endl;
    std::cout << faStr2(str2) << std::endl;
    std::cout << faStr2(str3) << std::endl;
    std::cout << faStr2(str4) << std::endl;
    std::cout << faStr2(str5) << std::endl;
    std::cout << faStr2(str6) << std::endl;

    std::cout << "Third fun" << std::endl;
    std::cout << faStr3(str1) << std::endl;
    std::cout << faStr3(str2) << std::endl;
    std::cout << faStr3(str3) << std::endl;
    std::cout << faStr3(str4) << std::endl;
    std::cout << faStr3(str5) << std::endl;
    std::cout << faStr3(str6) << std::endl;

    return 0;
}
