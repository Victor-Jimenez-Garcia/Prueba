#include <iostream>
using namespace std;
int main()
{
    int matriz[50][50],dim, suma=0,suma1=0;
    cout<<"Ingrese la dimension: "; cin>>dim;
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];
        }
    }
    for(int i=0;i<dim;i++){
        suma1=0;
        int suma2=0, suma3=0, suma4=0;
        for(int j=0;j<dim;j++){
            if(i==0)
                suma+=matriz[i][j];
         else{
           suma1+=matriz[i][j]; suma2+=matriz[j][i]; suma3+=matriz[j][j]; suma4+=matriz[j][dim-j-1];
            }
        }
          if((suma!=suma1)&&i>0){
              cout<<"No es magico"<<endl;
          break;
          }
          else if((suma!=suma2)&&i>0){
              cout<<"No es magico"<<endl;
          break;
          }
          else if((suma!=suma3)&&i>0){
              cout<<"No es magico"<<endl;
          break;
          }
          else if((suma!=suma4)&&i>0){
              cout<<"No es magico"<<endl;
          break;
          }
    }
    if(suma==suma1)
        cout<<"El cuadrado es magico"<<endl;
    return 0;
}
