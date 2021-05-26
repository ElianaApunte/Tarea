#include <iostream>
using namespace std;
//grupo 1 factores de un numero

//grupo 2 fibonacci de un numero

//grupp 3 los n primeros numeros primos

//grupo 4  los n numeros abundantes

//grupo 5  los n numeros deficientes
//INTEGRANTES: Apunte Eliana; Pillajo Josue; Ponce Cristian; Rosales Leonidas

deficientes()
{  int n,a=0;

  cout<<"Digite un numero: "<<endl;
  cin>>n;
  for  (int i=1;i<n;i++)
       {
         if (n%i==0)
            {
              a=a+i;
             }

       }

  if (a<n)
    {
       cout<<"El numero es Deficiente"<<endl<<endl;
     }
   else
      cout<<"El numero no es Deficiente"<<endl<<endl;

system("pause");
return 0;

}

//grupo 6 validar n que sea mayor que 10 y menores que 20

main(){
    int n;
    cin>>n;
    factores(n);
    fibonacci(n);
    primos(n);
    abundantes(n);
    deficientes(n);

}
