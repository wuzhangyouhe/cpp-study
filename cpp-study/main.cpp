//  Created by Liu Tao on 2020/6/27.
//  Copyright © 2020 Liu Tao. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "main.h"
#include "vector.hpp"
#include <string>
// local variable with std
using namespace std;

//int main() {
//    auto a = add(3, 4);
//    cout << "the number summary is " << a << endl;
//    double b = add(3.1, 4.2);
//    cout << "the float number summary is " << b << endl;
//
//    // string example
//    string name ;
//    cout << "who are you? ";
//    cin >> name;
//    string greeting = "Hello, " + name;
//    if (name == "tom"){
//        greeting += ", I know you !";
//    }
//    cout << greeting << endl;
//
//    int l = greeting.length();
//    // stringing " with "\"", \ is the key to add character into a string print out
//    cout << "\"" + greeting + "\" is " << l << " characters long." << endl;
//    auto space = greeting.find(' ');
//    string begining = greeting.substr(space + 1);
//    cout << begining << endl;
//
//    if (begining == name){
//        cout << "expected result." << endl;
//    }
//    // += is great function to add string line
//    return 0;
//}


int main() {
    void vecFunction();
    vector<int> vi;
    for (int i=0; i< 10; i++){
        vi.push_back(i); // push_back insert element in the beginning
    }
    for (auto item:vi){
        cout << item << " ";
    }
    cout << endl;
    
    vector<string> vs;
    cout << "enter three words ";
    for (int i=0; i<3; i++){
        string s;
        cin >> s;
        vs.push_back(s);
    }
    for (auto item:vs){
        cout << item << " ";
    }
    cout << endl;
    
    cout << "int vector vi has " << vi.size() << " else string vector vs has " << vs.size() << endl;
    
    vi[5] = 3;
    vi[6] = -1;
    vi[1] = 99;
    
    for (auto item:vi){
        cout << item << " ";
    }
    cout << endl;
    
    // vector start with [0], size of vector is 10, but element is 0-9, should be < instead of <=
    for (unsigned int i=0; i<vi.size(); i++){
        cout << vi[i] << " ";
    }
    cout << endl;
    
    // begin is member function of vector, *i is iterator pointer at.
    for (auto i = begin(vi); i != end(vi); i++) {
        cout << *i << " ";
    }
    cout << endl;
    sort(begin(vs), end(vs));
    for (auto item:vs){
        cout << item << " ";
    }
    cout << endl;
    
    int threes = count (begin(vi), end(vi), 3);
    cout << "vector of ints has " << threes << " elements" << endl;
    int tees = count(begin(vs[0]), end(vs[0]), 't');
    cout << "first word has " << tees << " letter t's " << endl;
    return 0 ;
}
