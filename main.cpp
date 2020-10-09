#include <iostream>
using namespace std;
int main()
{
    int x,y,ancho,alto;
    int rect1[4]={}, rect2[4]={};
    do{
    cout<<"Ingrese la coordenada x: ";cin>>x;
    cout<<"Ingrese la coordenada y: ";cin>>y;
    cout<<"Ingrese el ancho: ";cin>>ancho;
    cout<<"Ingrese el lato: ";cin>>alto;
    }while(ancho<=0||alto);
    rect1[0]=x; rect1[1]=y; rect1[2]=ancho; rect1[3]=alto;
    do{
    cout<<"Ingrese la coordenada x: ";cin>>x;
    cout<<"Ingrese la coordenada y: ";cin>>y;
    cout<<"Ingrese el ancho: ";cin>>ancho;
    cout<<"Ingrese el lato: ";cin>>alto;
    }while(ancho<=0||alto);
    rect2[0]=x; rect2[1]=y; rect2[2]=ancho; rect2[3]=alto;

    return 0;
}
