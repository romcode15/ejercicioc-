#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    //declaracion de variables
    float num1,num2,num3,suma,resta,mult,div;
    double ec1,ec2,ec3;
    const double PI=3.141612, E=2.718281,Z=5.35621;

    //// Declaración e inicialización de variables de cadena
    char UNIVERSIDAD[150]="          UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE SEDE SANTO DOMINGO";
    char NOMBREAPELLIDO[13]="ROMEL YUGCHA";
    char TEMA[36]="OPERACIONES ALGEBRAICAS";
    char NIVEL[7]="1ro. A";
    char ASIGNATURA[28]="FUNDAMENTOS DE PROGRAMACION";
    char CARRERA[5]="ITIN";
    char FECHA[11]="24-02-2024";

    // Imprimir la información inicial
    cout << endl; //salto de linea
    cout << "\n"; //salto de linea
    cout << "-------------------------------------------------------------------------------------"<<endl;
    cout << UNIVERSIDAD << endl;
    cout << endl;
    cout << "-------------------------------------------------------------------------------------"<<endl;
    cout << "| NOMBRE COMPLETO: |" << NOMBREAPELLIDO << endl;
    cout << "| TEMA:            |" << TEMA << endl;
    cout << "| NIVEL:           |" << NIVEL << endl;
    cout << "| ASIGNATURA:      |" << ASIGNATURA << endl;
    cout << "| CARRERA:         |" << CARRERA << endl;
    cout << "| FECHA:           |" << FECHA << endl;

    cout <<"====================================================================================="<<endl;
    cout <<endl;
    cout <<"                          OPERACIONES ARITMERICAS"<<endl;
    cout <<"====================================================================================="<<endl;
    cout <<endl;
    cout <<"Calculo de la suma, resta, multiplicacion y division"<<endl;
    // Pedir al usuario que ingrese dos números
    cout <<endl;
    cout <<"Ingrese el primer numero:"<< endl;
    cin >>num1;
    cout <<"Ingrese el segundo numero:"<< endl;
    cin >>num2;
    // Realizar las operaciones
    suma=num1+num2;
    resta=num1-num2;
    mult=num1*num2;

    cout <<"======================================================================================"<<endl;

    while(num2==0){
        cout<<"No se puede dividir para cero, Ingrese nuevammente el numero"<< endl;
        cin>> num2;
    }
    div=num1/num2;

    cout <<"======================================================================================"<<endl;
    cout <<endl;
    cout <<"                                 RESULTADO"<<endl;
    cout <<"La suma es: "<<suma<<endl;
    cout <<endl;
    cout <<"La resta es: "<<resta<<endl;
    cout <<endl;
    cout <<"La multiplicación es: "<<mult<<endl;
    cout <<endl;
    cout <<"La division es: "<<div<<endl;
    cout <<"======================================================================================="<<endl;
    cout <<endl;

    cout <<endl;
    cout <<"                           EXPRESIONES ALGEBRAICAS"<<endl;
    cout <<"====================================================================================="<<endl;
    cout <<"Calcular las siguientes Expresiones Algebraicas"<<endl;
    cout <<endl;
    cout <<"Ingrese su Primer numero:  "<<endl;
    cin>>num1;
    cout <<"Ingrese su Segundo numero: "<<endl;
    cin>>num2;
    cout <<"Ingrese su Tercer numero:  "<<endl;
    cin>>num3;

    cout <<"======================================================================================"<<endl;
    cout <<endl;
    cout <<"Primera Expresion Algebraica:"<<endl;
    cout <<endl;
    cout <<"(sqrt(num1 / log(num3))/(num3)) * PI*num2"<<endl;
    cout <<endl;

    while(num3<=1 || num1<=-1){
        if (num3 <= 1) {
            cout << "Error, Ingrese otra vez, El tercer numero debe ser >1" << endl;
            cin >> num3;
        }
        if (num1 <= -1) {
            cout << "Error, Ingrese otra vez, El primer numero debe ser >0" << endl;
            cin >> num1;
        }
    }
    ec1 = (sqrt(num1 / log(num3))/(num3)) * PI*num2;
    cout <<endl;
    cout <<"---------------------------------------------------------------------------------------"<<endl;
    cout <<"Primer  Numero  : "<<num1<<endl;
    cout <<"Segundo Numero  : "<<num2<<endl;
    cout <<"Tercer  Numero  : "<<num3<<endl;
    cout <<endl;
    cout <<"El Resultado es: "<<ec1<<endl;
    cout <<endl;
    cout <<"======================================================================================="<<endl;
    cout <<endl;
    cout <<"Segunda Expresion Algebraica:"<<endl;
    cout <<endl;
    cout <<"(sqrt((pow((E-log(num2)),2)/(num2+num3))-cos(num1)/Z"<<endl;
    cout <<endl;

    while(num2<=1){
        cout << "Error, Ingrese otra vez, El segundo numero debe ser >1" << endl;
        cin >> num2;

    }
    ec2 = sqrt(pow((E-log(num2)),2)/(num2+num3))-cos(num1)/Z;
    cout <<endl;
    cout <<"----------------------------------------------------------------------------------------"<<endl;
    cout <<"Primer  Numero  : "<<num1<<endl;
    cout <<"Segundo Numero  : "<<num2<<endl;
    cout <<"Tercer  Numero  : "<<num3<<endl;
    cout <<endl;
    cout <<"El Resultado es: "<<ec2<<endl;
    cout <<endl;
    cout <<"======================================================================================="<<endl;
    cout <<endl;
    cout <<"Tercera Expresion Algebraica:"<<endl;
    cout <<endl;
    cout <<"sqrt((num1+num3)/log(num2))-log(sin(num2))"<<endl;
    cout <<endl;

    ec3 = sqrt((num1+num3)/log(num2))-(cos(num2));
    cout <<endl;
    cout <<"----------------------------------------------------------------------------------------"<<endl;
    cout <<"Primer  Numero  : "<<num1<<endl;
    cout <<"Segundo Numero  : "<<num2<<endl;
    cout <<"Tercer  Numero  : "<<num3<<endl;
    cout <<endl;
    cout <<"El Resultado es: "<<ec3<<endl;
    cout <<endl;

    return 0;
}
