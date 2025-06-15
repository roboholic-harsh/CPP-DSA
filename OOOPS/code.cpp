#include <iostream>
using namespace std;

class B; // Forward declaration of B
class C; // Forward declaration of C

class A {
private:
    void secretFunction() {
        cout << "Function from A is accessed in C, but not in B!" << endl;
    }

public:
    friend class C; // Only C has access to private members of A
};

class B : public A {
    // B does not have access to secretFunction() because it's not a friend
};

class C : public B {
public:
    void accessFunction() {
        secretFunction(); // Allowed because C is a friend of A
    }
};

int main() {
    C obj;
    obj.accessFunction();  // This will work

    // obj.secretFunction();  // Error: secretFunction is private in A and not public in C
    return 0;
}
