//
//  1st_exercise.cpp
//  cpp-study
//
//  Created by Liu Tao on 2020/6/28.
//  Copyright © 2020 Liu Tao. All rights reserved.
//
# include <iostream>
using namespace std;
void exercise1() {
    cout << "Hello!" << endl << 2+2;
    cout << endl << endl;
    
    int i;
    // fractional part will be lost
    i=4.9;
    cout << i << endl;

    int j;
    // it fails to assign str to int j = "hello";
    j = 9/5;
    cout << j << endl;
    // int can be promote to float, but float demotes to int will have a warning
    float f=4.9;
    cout << f << endl;
    f = 9.0/5;
    cout << f << endl;
    
    auto g = 4.9;
    cout <<  g << endl;
    
// Flow of Control, code is executed from top to bottom is flow.
    // A number of keyworkds change this, if, else, while, for
    // logical expressions : (x > 0) , ( >= , == or !=) operators true or false
    int i1 ;
    int j1 ;
    bool keepgoing = true;
    int answer;
    while (keepgoing == true) {
        cout << "Enter a number: ";
        cin >> i1;
        cout << "you entered " << i1 << ". Enter another number ";
        cin >> j1;
    if (i1 < j1) {
        cout << "The first number, " << i1 << ", is less than second number, " << j1 << endl;
    }
    else{
        cout<< "The first number, " << i1 << ", is not less than second number, " << j1 << endl;
    }
        cout << "compare another ? 0 for no : ";
        cin >> answer ;
        if (answer == 0){
            keepgoing = false;
        }
    }
    // for loop format : (int loop=0; loop < 10; loop++)
}
