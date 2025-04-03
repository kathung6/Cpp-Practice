/*
Gravitational Force Calculator
This program calculates Newton's Law of Gravitational Force given two masses and a distance between
the two masses
Input: mass_one, mass_two, distance
Output: force
*/


#include <iostream>
#include <cmath>

using namespace std;


double newtonLaw(double mass_one, double mass_two, double distance) {
    double force = (6.674 * (pow(10, -11)))*((mass_one * mass_two)/ (distance * distance));
    return force;
}

int main() {
    double mass_one;
    double mass_two;
    double distance;

    cout << "Please enter masses of the bodies (in kg): \n";
    cin >> mass_one >> mass_two;
    cout << "Now pleae enter the distance between the bodies (in m): \n";
    cin >> distance;

    cout << "The force between these two bodies of masses is: " << newtonLaw(mass_one, mass_two, distance) << "\n";

    return 0;
}
