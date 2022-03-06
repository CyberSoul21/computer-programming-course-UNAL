/**
 * @file main.cpp 
 * @brief the program determinate if a number is palindrome
 *
 *
 * @author Wilson Javier Almario Rodriguez
 * @date August - 2014
 * @update: 6/03/2022
 */

#include <iostream>

using namespace std;


int potencia_10(int n)
{
    if(n==0)
    {
        return 1;
    };
    return 10*potencia_10(n-1);
};

int digitos(int x,int n){
    if(x<potencia_10(n))
    {
        return n;
    };
    return digitos(x,n+1);
};
bool palindromo(int x)
{
  int d = digitos(x,0)-1;
  int n=d;
  int y=0;
  int p=x;
  int resultado=0;
   bool v = false;
  for(int i=0; i<=n;i++)
  {
    y = x/potencia_10(d);
    y = y*potencia_10(i);
    resultado += y;
    x=x%potencia_10(d);
    d--;
  }
  if(p==resultado)
  {
    return v=true;
  }
  else{
    return v=false;
  };

};



int main()
{
    int n;
    cout << "Digite " << endl;
    cin  >>n;
    if(palindromo(n)){
        cout<<n<<" Es palindromo"<<endl;
    }else{
        cout<<n<<" NO Es palindromo"<<endl;
    };



    return 0;
}
