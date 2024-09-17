//Jefferson Zheng
//September 17,2024
//Lab 2

#include <iostream>
#include <string>
using namespace std;

int main() {
    string cerealName;          //Creates string "cereal name"
    double servingCalories, servingOunces, totalCalories;           //Creates decimal values for serving calories, serving ounces, and total calories

    cout << "Cereal Name: ";            //Output to promopt user
    cin >> cerealName;          //User Input
    cout << "# of Calories per Serving: ";            //Output to promopt user
    cin >> servingCalories;          //User Input
    cout << "# of Ounces per Serving: ";            //Output to promopt user
    cin >> servingOunces;          //User Input

    cout << "One serving of \"" << cerealName << "\" is " << servingCalories << " ounces and has " << servingCalories / servingOunces << " calories per ounce." << endl;            //Information about the cereal

    cout << "How many calories of cereal is the user willing to eat today? ";       //Output to promopt user
    cin >> totalCalories;           //User Input

    cout << "You can eat ~" << (totalCalories / (servingCalories / servingOunces)/1.0) << " ounces of \"" << cerealName << "\"!"<< endl;            //Information about how much cereal the user can eat
    return 0;
}

/*
Cereal Name: Hamburger
# of Calories per Serving: 210
# of Ounces per Serving: 6
One serving of "Hamburger" is 210 ounces and has 35 calories per ounce.
How many calories of cereal is the user willing to eat today? 2200
You can eat ~62.8571 ounces of "Hamburger"!
*/