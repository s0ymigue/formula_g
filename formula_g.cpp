#include <bits/stdc++.h>
using namespace std;

int main() {
    //Declarar la variable double, el valor de a, b, c.
    double a, b, c;
    //imprime un mensaje para pedirle al usuario que de el valor de A.
    cout << "Introduce el valor de A: ";
    //pide el valor de A
    cin >> a;
    //Verifica que a no sea igual a cero
    if (a == 0)
        {
        //Imprime un mensaje para mostrarle al usuario que A no puede ser igual a cero
        cout << "A no puede ser cero." << endl;
        return 1;
        }
    //imprime un mensaje para pedirle al usuario que de el valor de B.
    cout << "Introduce el valor de B: ";
    //pide el valor de B.
    cin >> b;
    //imprime un mensaje para pedirle al usuario que de el valor de C
    cout << "Introduce el valor de C: ";
    //pide el valor de C
    cin >> c;


    //Declara una variable para la parte de la raiz
    double raiz;
    //Declara dos variables para los resultados
    double x1, x2;
    //Le da una valor a la variable raiz
    raiz=sqrt((pow(b,2))-4*(a)*(c));
    //verificar que la parte de la raiz no sean numeros imaginarios
    if(raiz<0)
    {
        cout<<"La raiz tiene numeros imaginarios";
    }
    //si no es haci sacar el valor de x1 y x2
    else
    {

        x1=(-(b)+raiz)/2*(a);
        x2=(-(b)-raiz)/2*(a);
    }
    //imrpimirlos.
    cout<<"El valor de x1: "<<x1<<endl;
    cout<<"El valor de x2: "<<x2<<endl;
return 0;
}
