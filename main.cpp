/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alulab14
 *
 * Created on 26 de marzo de 2019, 03:32 PM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    for (int i = 0; i < 100; i++) {
        if (multiploTres(i))
            cout << "Fizz";
        else if (multiploCinco(i))
            cout << "Buzz";
        else
            cout << "FizzBuzz";
    }
    return 0;
}

