/**
 * @file main.cpp 
 * @brief Introduction to recursion in C++, 
 * the program calculate least common divisor
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date August - 2014
 * @update: 6/03/2022
 */

#include <iostream>

using namespace std;


int mcd(int p, int q){
    if(q == 0){
        return p;
    }else{
        return mcd(q,p % q);
    };
};

int main()
{
    cout << "Hello world!" << endl;
    cout <<mcd(5,3);
    return 0;
}
