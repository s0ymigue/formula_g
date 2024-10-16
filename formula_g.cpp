#include <bits/stdc++.h>
using namespace std;

int main() {
    //Codigo hecho principalmente para resolver la formula general pidiendo los diferentes valores, verificando si el valor de a no seaa igual a cero etc.
    double a, b, c;

    cout << "Introduce el valor de A: ";
    cin >> a;

    if (a == 0)
        {
        cout << "A no puede ser cero." << endl;
        return 1;
        }
    cout << "Introduce el valor de B: ";
    cin >> b;
    cout << "Introduce el valor de C: ";
    cin >> c;



    double raiz;
    double x1, x2;
    raiz=sqrt((pow(b,2))-4*(a)*(c));
    if(raiz<0)
    {
        cout<<"La raiz tiene numeros imaginarios";
    }
    else
    {

        x1=(-(b)+raiz)/2*(a);
        x2=(-(b)-raiz)/2*(a);
    }
    cout<<"El valor de x1: "<<x1<<endl;
    cout<<"El valor de x2: "<<x2<<endl;
return 0;
}
