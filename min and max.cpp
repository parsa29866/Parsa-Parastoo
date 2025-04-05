#include <iostream>
using namespace std;

struct MinMax {
    int min;
    int max;
};

MinMax maxANDmin(int n) {
    int Number;     // The recieved number
    cout << "Please enter a number: ";
    cin >> Number;
    int max = Number;
    int min = Number;

    for (int i = 2; i <= n; i++) {
        cout << "Please enter a number: ";
        cin >> Number;
        if (Number > max) {         //here we  reorganize max and min
            max = Number;
        } 
        else if (Number < min) {    //here we  reorganize max and min
            min = Number;
        }
    }

    return {min, max};
}

int main() {
    int n;     // The mount of numbers 
    cout << "Please enter the amount of numbers: ";
    cin >> n;

    MinMax result = maxANDmin(n);
    cout << "The min and the max are: " << result.min << " and " << result.max << endl;
    return 0;
}