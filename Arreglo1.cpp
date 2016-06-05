#include <iostream>

using namespace std;
const int t=5;
int num[4];
int mayor,menor;
float prom;
float promedio (int num[],int t)
{
    int i, suma=0,contador=0;
    float prom;
    for(i=0;i<t;i++)
    {
        if (num[i]%5==0)
        contador++;
        suma+=num[i];
    }
     prom=0;
     if (contador>0)
     prom= float (suma)/float (contador);
     return prom;



}
    int maxarreglo(int num[],int t)
{
    int xmax=0; //variable privada
    int i=0;
    for (i=0; i<t;i++)
    {
        if (num[i]>xmax)
            xmax=num[i];
    }
    return xmax;
}
int minarreglo(int num[],int t)
{
    int xmin=num[0];
    int i=0;
    for (i=0; i<t;i++)
    {
        if (num[i]<xmin)
            xmin=num[i];
    }
    return xmin;

}
void ingreso (int num[], int t)

{
    int i =0;
    for (i=0; i<t;i++)
    {
        cout<< "Numero pos ["<<i<<"]...:";
        cin >>num[i];
    }

}
void presentar (int num[],int t)
{
    int i =0;
    for (i=0;i<t;i++)
    {
        cout << "Num pos"<<i<<"..>"<<num[i]<<"\n";
    }
}
int main ()
{
    ingreso(num,t);
    presentar(num,t);
    mayor=maxarreglo(num,t);
    menor=minarreglo(num,t);
    promedio=prom ;
    cout<<"Numero mayor "<<mayor<<"\n";
    cout<<"Numero menor "<<menor<<"\n";
    cout << "Promedio...:"<<prom<<"\n"

}
