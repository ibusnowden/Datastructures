#include <iostream>
#include <string>
using namespace std;

class Example {
    string* ptr;
    public:
    Example (const string& str) {
        ptr = new string(str);
    }
    ~Example () {
        delete ptr;
    }
    // copy constructor
    Example (const Example& copy) {
        ptr = new string(copy.content());
    }
    const string& content() const {
       return *ptr;
    }
};

int main() {
    Example foo ("Example");
    Example bar = foo;
    cout << "bar's content is : " << bar.content();

    return 0;
}
