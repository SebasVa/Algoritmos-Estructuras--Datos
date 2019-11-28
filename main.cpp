#include <iostream>
using namespace std;

void agregar(int a[], int n);
void imprimir(int a[], int n);
void menor(int a[], int n);

int main()
{
   int m;
   cout << "ingrese el tamanio: ";
   cin >> m;
   int b[m];
   agregar(b, m);
   imprimir(b, m);
   menor(b, m);

    return 0;
}

void agregar(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
}
void imprimir(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i];
    }
}
void menor(int a[], int n)
{
    int b;
    b=a[0];
    for(int i = 1; i<n; i++)
    {
        if(b>a[i])
        {
            b = a[i];
        }
    }
    cout << " menor elemento es: " << b;
}
