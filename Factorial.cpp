#include <iostream>
# include <stdio.h>

using namespace std;
int tam = 5;
int num [4];
void ingreso (int num[], int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
        cout<<"Ingrese un numero"<<i<<"...:";
        cin>>num[i];
    }
}
int factorial(int num)
{
    int i;
    int fact=1;
    for (i=1;i<=num;i=i+1)
    {
       fact *= i;
    }
    return fact;
}
void presentar (int num[], int tam)
{
    int i;
    int xfact;
    for (i=0;i<tam;i++)
    {
      xfact=factorial(num[i]);
      cout << "Num pos"<<i<<"..>"<<num[i];
      cout << "Factorial...:"<<xfact<<"\n";
    }


}
int main()
{
    ingreso (num,  tam);
    presentar (num,  tam);

}
