//
//  vector.cpp
//  cpp-study
//
//  Created by Liu Tao on 2020/6/29.
//  Copyright © 2020 Liu Tao. All rights reserved.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for sort and count
using namespace std;

void vecFunction(){
    vector<int> vi;
    for (int i=0; i< 10; i++){
        vi.push_back(i);
    }
    for (auto item:vi){
        cout << item << " ";
    }
    cout << endl;
}

