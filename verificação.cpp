#include <iostream>


using namespace std;

bool fibo(int n)
{ 
  int a = 0, b = 1, c;
  while(a <= n)
    {
      if (a == n)
      {
        return true;
      }
      c = b;
      b = a + b;
      a = c;      
    }
  return false;
}

int main() {
    int x;

    cout << "Digite um numero: ";
    cin >> x;

    if (fibo(x))
      cout << x << " Pertence a sequência " << endl;
    else
      cout << x << " Não pertence a sequência " << endl;

  return 0;
}
