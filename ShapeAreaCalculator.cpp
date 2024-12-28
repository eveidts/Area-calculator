#include <iostream>

using namespace std;

double AreaRect(double length, double width){
    double area = length * width;
    return area;
}

double AreaCircle(double radius){
    double area = 3.14 *(radius *radius);
    return area;
}

double AreaSQ(double lenght){
    double area = lenght * lenght;
    return area;
}

double AreaTriangle (double height , double base){
    double area = 0.5 * (height * base);
    return area;
}

int main(){
    int input;
    int input1;
    double measurement = 0.00;
    double measurement1 = 0.00;

    cout << "Area calculator" << endl;
    cout << "1.Select shape" << endl;
    cout << "2.Exit" << endl;
    cout << "Choose: " ;
    cin >> input;
    while (input == 1){
    cout << "1.Rectangle" << endl;
    cout << "2.Circle" << endl;
    cout << "3.Triangle" << endl;
    cout << "4.Square" << endl;
    cout << "5.Exit" << endl;
    cout << "Choose: " ;
    cin >> input1;
    switch (input1){
        case 1:
        cout << "Enter the length(in cm): ";
        cin >> measurement;
        cout << "Enter the width(in cm): ";
        cin >> measurement1;
        cout << "Area of Rectangle with length " << measurement << "cm and width " << measurement1 << "cm is: " << AreaRect(measurement,measurement1) <<"cm²" << endl;
        break;
        case 2:
        cout << "Enter the radius(in cm): ";
        cin >> measurement;
        cout << "Area of circle with  " << measurement <<  "cm is: " << AreaCircle(measurement)<<"cm²" << endl;
        break;
        case 3:
        cout << "Enter the heigth(in cm): ";
        cin >> measurement;
        cout << "Enter the base(in cm): ";
        cin >> measurement1;
        cout << "Area of Triangle with heigth " << measurement << "cm and base " << measurement1 << "cm is: " << AreaTriangle(measurement,measurement1) <<"cm²"<< endl;
        break;
        case 4:
        cout << "Enter the length(in cm): ";
        cin >> measurement;
        cout << "Area of Square with length " << measurement <<  "cm is: " << AreaSQ(measurement) <<"cm²"<< endl;
        break;
        case 5:
        input=2;
        break;
        default:
        cout << "oops wrong input please try again" << endl ;
    }
    }
    if (input == 2){
      cout << "existing the program...." << endl;  
      return 0;
    }
    else {
        cout << " oops wrong input please try again" << endl;
    } 
    return 0;

}