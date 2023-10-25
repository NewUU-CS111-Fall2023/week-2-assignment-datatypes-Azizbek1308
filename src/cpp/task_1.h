/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
class leap_year {
public:
    void leap_year1(int n) {
        if (n % 4 == 0) {
            cout << n << " is leap year" << endl;
        }
        else {
            cout << n << " is not leap year" << endl;
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
                cout << "too high" << endl;
                cout << endl;
                cout << "Please again guess a number!" << endl;
                cin >> x;
            }
            else {
                cout << "too low" << endl;
                cout << endl;
                cout << "Please again guess a number!" << endl;
                cin >> x;
            }
        }
        cout << "You found this " << x << " number! Congratulations!!! " << endl;
    }
};

class LongArithmetics {
public:
    void longArithmetics1(double A) {
        srand(time(0));
        double x = rand() % static_cast<int>(pow(10, 100) - pow(10, 99) + 1) + pow(10, 99);
        cout << x << " is random 100 digit number" << endl;
        cout << x / A << std::endl;
    }
};


int main() {

    leap_year year1;
    cout<<"\"Task_1\""<<endl;
    cout<<"Please enter a year for checking if it is leap year or not"<<endl;
    int x;
    cin>>x;
    year1.leap_year1(x);
    cout<<"\"Task_2\""<<endl;
    find_number number1;
    int y;
    cout<<"Please again guess a number!"<<endl;
    cin>>y;
    number1.find_number1(y);
    cout<<"\"Task_3\""<<endl;
    int A;
    cout<<"Please enter a number!"<<endl;
    cin>>A;
    LongArithmetics number2;
    number2.longArithmetics1(A);
    cout<<"hi";
    return 0;
}