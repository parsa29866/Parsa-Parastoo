#include <iostream>
using namespace std;

int Mod(int A, int B) {
    int mod = A % B;     //calculating the mod
    return mod;
}

int main() {
    int A, B;  
    cout << "Enter a Number: ";
    cin >> A;
    cout << "Enter a Number: ";
    cin >> B;

    int TheMod = Mod(A, B);
    cout << "The mod is: " << TheMod << endl;  // printing the result

    return 0;
}