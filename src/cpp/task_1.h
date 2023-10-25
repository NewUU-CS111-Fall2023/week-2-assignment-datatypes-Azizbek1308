/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

class leap_year {
public:
    void leap_year1(int n) {
        if (n % 4 == 0) {
            std::cout << n << " is leap year" << std::endl;
        }
        else {
            std::cout << n << " is not leap year" << std::endl;
        }
    }
};

class find_number {
public:
    void find_number1(int x) {
        srand(time(0));
        int n = rand() % 100 + 1;
        while (x != n) {
            if (x > n) {
                std::cout << "too high" << std::endl;
                std::cout << std::endl;
                std::cout << "Please again guess a number!" << std::endl;
                std::cin >> x;
            }
            else {
                std::cout << "too low" << std::endl;
                std::cout << std::endl;
                std::cout << "Please again guess a number!" << std::endl;
                std::cin >> x;
            }
        }
        std::cout << "You found this " << x << " number! Congratulations!!! 🥳" << std::endl;
    }
};

class long_arithmetics {
public:
    void long_arithmetics1(int A) {
        srand(time(0));
        long long x = rand() % (long long)(1e101 - 1e100) + (long long)1e100;
        std::cout << x << " is random 100 digit number" << std::endl;
        std::cout << (double)x / A << std::endl;
    }
};

class string_matching {
public:
    void string_matching1(std::string x) {
        if (x[x.size() - 1] != x.substr(0, x.size() - 1).find(x[x.size() - 1])) {
            std::cout << x.substr(0, x.size() - 1).find(x[x.size() - 1]) << " is index of \"" << x[x.size() - 1] << "\" in \"" << x.substr(0, x.size() - 1) << "\" sentence!" << std::endl;
        }
        else {
            std::cout << "no match" << std::endl;
        }
    }
};

int main() {

    leap_year year1;
    int x;
    std::cin>>x;
    year1.leap_year1(x);
    return 0;
}