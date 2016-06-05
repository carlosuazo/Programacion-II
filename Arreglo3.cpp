#include <iostream>

using namespace std;
const int tam=10;
int num [10];
void ingreso (int num[],int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
        cout<<"Ingresar el numero"<<i<<"...:";
        cin>>num[i];
    }
}
int Primo(int num)
{
    int i,c=0;
    for (i=1;i<=num;i++)
    {
        if (num%1==0)
            c++;
    }
    if (c==2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void presentar (int num[],int tam)
{
    int i,resultado,c=0;
    for (i=0;i<tam;i++)
    {
        resultado=Primo(num[i]);
        if (resultado )
            {
                cout<<"Es primo"<<num[i]<<"\n";
                c++;
            }
        else
        {
          cout<<"No es primo "<<num[i]<<"\n";
        }

    }
    cout<<"Numero de primos es "<<c<<"\n";
}
int main()
{
    ingreso(num,tam);
    presentar(num,tam);
}

