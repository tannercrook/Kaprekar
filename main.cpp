//
//  main.cpp
//  Kaprekar
//
//  Created by Tanner Crook on 7/19/14.
//  Copyright (c) 2014 Tanner Crook. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;


void brandon() {
    while (true) {
        
        int maxDigits;
        int *digits;
        digits = new int[maxDigits];
        
        cout << "Enter the number of digits you would like to test. --> ";
        cin >> maxDigits;
        cout << endl << endl;
        
        
        // initalize to 0
        for (int i = 0; i < maxDigits; i++) {
            digits[i] = 0;
            cout << digits[i] << " ";
        }
        
        // turn into single number
        stringstream ss;
        for (unsigned i = 0; i <= sizeof digits / sizeof digits [0]; ++i)
            ss << digits [i];
        int result;
        ss >> result;
        cout << "the result is: " << result;
        
        cout << endl << endl << endl;
        
        // start filling with numbers
        for (int i = 0; i < maxDigits; i++) {
            for (int j = 0; j <= 9; j++) {
                digits[i] = j;
            }
        }
        
    }
    
}


int main(int argc, const char * argv[])
{

    // insert code here...
    brandon();
    return 0;
}

