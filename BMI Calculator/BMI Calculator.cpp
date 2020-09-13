#include <iostream>
using namespace std;

int main()
{
    float weight, height, BMI;

    cout << "****BMI Calculator****"<<endl<<endl;
    cout << "Please key in your height(m) : " << endl;
    cin >> height;

    cout << "Please key in your weight(kg) : " << endl;
    cin >> weight;

    BMI = weight / (height * height);
    cout << endl << "Your BMI Value is " <<  BMI << endl;

    if (BMI <= 18.5)
        cout << "You're underweight." << endl;
    else if (BMI > 30)
        cout << "You're obese." << endl;
    else if (BMI > 25 && BMI <= 30)
        cout << "You're overweight." << endl;
    else if (BMI > 18.5 && BMI <= 25)
        cout << "You're in normal weight!" << endl;

    system("pause > 0");
}

