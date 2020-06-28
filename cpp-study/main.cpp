//  Created by Liu Tao on 2020/6/27.
//  Copyright © 2020 Liu Tao. All rights reserved.
//

#include <iostream>
#include "main.h"
// local variable with std
using namespace std;

int main() {
    auto a = add(3, 4);
    cout << "the number summary is " << a << endl;
    double b = add(3.1, 4.2);
    cout << "the float number summary is " << b << endl;
    return 0;
}
