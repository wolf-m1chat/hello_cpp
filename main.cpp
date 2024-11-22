#include<iostream>
using namespace std;

class Hello {
    public:
        void message() {
            cout << "Hello World";
        }
};

int main() {
    Hello hello;
    hello.message();
}
