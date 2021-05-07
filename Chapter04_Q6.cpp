#include <iostream> 
#include <iomanip> //allows use of "setprecision"
using namespace std;
//function prototypes
void input_mass(double& mass);
void calculate_weight(double& weight, double& mass);
void display_results(double& weight);

int main ()
{ 
    //declaring variables
    double objectMass, objectWeight;
    //explaining program to user
    cout << "This program will calculate the weight (in newtons) of an object ";
    cout << endl;
    cout << "and tell you whether it is too heavy or too light.";
    cout << endl << endl;
    //calling functions to perform the program
    input_mass(objectMass);
    calculate_weight(objectWeight, objectMass);
    display_results(objectWeight);

    cout << endl << endl;

    return 0;
}
//modular function for input
void input_mass(double& mass)
{ 
    cout << "Please enter the mass (in kilograms) of your object. ";
    cin >> mass;
    cout << endl << endl;
}
//modular function to calculate weight
void calculate_weight(double& weight, double& mass)
{
    weight = mass * 9.8;
}
//modular function to display results with a message depending on what the results are
void display_results(double& weight)
{
    if (weight > 1000)
    {
        cout << "The weight of your object is ";
        cout << setprecision(2) << fixed << weight << " newtons.";
        cout << endl << "Your object is too heavy.";
    }
    else if (weight < 10)
    {
        cout << "The weight of your object is ";
        cout << setprecision(2) << fixed << weight << " newtons.";
        cout << endl << "Your object is too light.";
    }
    else 
    {
        cout << "The weight of your object is ";
        cout << setprecision(2) << fixed << weight << " newtons.";
    }
}