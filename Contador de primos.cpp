#include <iostream>

using namespace std;
int numero;
int main()
{
    cout << "Ingresar un numero:...." << endl;
    cin  >>  numero;
    if ((numero%2==0) and (numero>0))
    {
        cout<<"EL numero es par ";
    }
    else if ((!(numero%2==0)) and (numero>0))
    {
        cout<<"EL numero es impar ";
    }
    else
    {
        cout<<"El numero es cero..";
    }
    return 0;
}
