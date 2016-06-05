#include <iostream>

using namespace std;
const int tam= 5;
 int num [5];
void ingreso (int num[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        cout<<"Ingresar el numero"<<i<<"...:";
        cin>>num[i];
    }
}
int Par(int num)
{


        if (num%2==0)
            return 1;
        else
            return 0;



}
void presentar (int num[],int tam)
{
        int c=0;
        int d=0;
        int resultado,i;
        for (i=0;i<tam;i++)
        {

        resultado=Par(num[i]);
        if (resultado )
            {
                cout<<num[i]<<"   Es Par "<<"\n";
                c++;
            }
        else
        {
          cout<<num[i]<<"   Es Impar "<<"\n";
          d++;
        }



        }
   cout<<"Numero de pares es "<<c<<"\n";
    cout<<"Numero de impares es "<<d<<"\n";

}

int main()
{
    ingreso (num,tam);
    presentar (num,tam);
}
