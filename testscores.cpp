/*
Average Score Calculator
Prompts the user to input 5 test scores
Then calculates and outputs the average of the test scores
*/

#include <iostream>

using namespace std;

int main() {
    double test_score_1, test_score_2, test_score_3, test_score_4, test_score_5;
    cout << "Enter 5 test scores:" << endl;
    cin >> test_score_1 >> test_score_2 >> test_score_3 >> test_score_4 >> test_score_5;

    double total = test_score_1 += test_score_2 += test_score_3 += test_score_4 += test_score_5;
    double mean = total / 5;


    cout << "The average test score was " << mean << endl;
}