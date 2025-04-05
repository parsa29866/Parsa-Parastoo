#include <iostream>
using namespace std;

class PersonalInfo {
    private:
        
        string names[10] = {"Jack", "Mike", "Martin", "Leonard", "Jeff", "Alex", "Sarah", "Adam", "Steve", "Harry"};
        int ages[10] = {12, 32, 45, 67, 34, 1, 54, 37, 15, 9};

    public:
        double Average() {
            int sum = 0;    // Initialize sum to 0
            for (int counter = 0; counter < 10; counter++) {
                sum += ages[counter];
            }
            double avg = (double) sum / 10; 
            return avg;
        }
};

int main() {
    PersonalInfo p1;
    double avg = p1.Average();
    cout << "The average of the ages is: " << avg << endl;
    return 0;
}