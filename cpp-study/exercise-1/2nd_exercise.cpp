//
//  2nd_exercise.cpp
//  cpp-study
//
//  Created by Liu Tao on 2020/6/28.
//  Copyright © 2020 Liu Tao. All rights reserved.
//
// Functions and Headers
// Functions , all function has a return type, need to declared, take parameters for function include 0.
//             The complier enforces type rules when call a function,

#include <stdio.h>
#include <iostream>
using namespace std;

// overload function
int add (int x, int y){
    return x +y;
}

// type overloading, function using different type
bool test (bool x){
    return x;
}
bool test (double x){
    return x > 0;
}
void test (int y){
    return;
}
// old programmers like to avoid parameters
void test (void){
    return;
}
