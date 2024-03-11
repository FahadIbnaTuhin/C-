#include <iostream>

// Those modifier only apply to integral types: those in which you can store decimal numbers

int main()
{
    // Unsigned Range: 0 ~ 2^n - 1
    // Signed Range: -2^(n-1) ~ 2^(n-1) - 1


    short short_var {-3256}; // 2 bytes
    short int short_int {455};
    signed short singed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    int int_var {55}; // 4 bytes
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    long long_var {88}; // 4 or 8 bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    long long long_long {888}; // 8 bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};

    std::cout << sizeof(unsigned_long_long_int) << std::endl;
    return 0;
}
