#include <iostream> 
#include <cmath> 
using namespace std; 
  
bool primo(int n) 
{ 
    if (n <= 1)
    {
        return false; 
    }
    if (n <= 3) 
    {
        return true; 
    }
    if (n % 2 == 0 || n % 3 == 0) 
    {
        return false; 
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) 
        {
            return false; 
        }
    }
    return true; 
} 
  
bool circular(int n) 
{ 
    int count = 0, t = n; \

    while (t) 
    { 
        count++; 
        t /= 10; 
    } 
  
    int num = n; 
    while (primo(num)) 
    { 
        int rem = num % 10; 
        int div = num / 10; 

        num = (pow(10, count - 1)) * rem + div; 
  
        if (num == n)
        {
            return true; 
        }
    } 
    return false; 
} 
  
int main() 
{ 
    int numero;

    cout << "Ingrese numero: ";
    cin >> numero;
    cout << "\n";

    if (circular(numero)) 
    {
        cout << "Es circular" << endl; 
    }
    else
    {
        cout << "No es circular" << endl; 
    }
    return 0; 
} 