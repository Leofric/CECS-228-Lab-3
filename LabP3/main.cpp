//
//  main.cpp
//  LabP3
//
//  Created by Alex Berthon on 9/7/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include <iostream>
using namespace std;
void Calc(int a, int b, int c, int d);
void Calc(int a, int b, int* c, int* d);

int main(int argc, const char * argv[]) {
    
    int a;
    int b;
    int c;
    int d;
    cout<<"Please enter the first number"<< endl;
    cin>>a;
    cout<<"Please enter the second number"<< endl;
    cin>>b;
    
    Calc(a, b, c, d);
    Calc(a, b, &c, &d);
    
    return 0;
}

// call by reference
// void integerCalc(int a, int b, int &c, int & d) { ......}
// call by pointer
// void integerCalc(int a, int b, int *c, int *d) {.......}

void Calc(int a, int b, int c, int d){
    c = a / b;
    d = a % b;
    cout<<"\nPass by reference"<< endl;
    cout << "first value   " << a << endl;
    cout << "second value   " << b << endl;
    cout << "first / second " << c << endl;
    cout << "first % second " << d << endl;
 }

void Calc(int a, int b, int* c, int* d){
    *c = a / b;
    *d = a % b;
    cout<<"\nPass by pointer"<< endl;
    cout << "first value   " << a <<endl;
    cout << "second value   " << b <<endl;
    cout << "first / second " << *c << endl;
    cout << "first % second " << *d << endl;
}

