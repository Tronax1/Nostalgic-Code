#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

main(){
       double clave, precio, total;
       cout<<"Usted a solicitado un articulo, digite el precio y la clave que esta en la parte trasera del articulo"<<endl;
       cin>>precio;
       cin>>clave;
       if(clave==01){
                    total=precio*0.90;
                    cout<<"El precio de el articulo con descuento del 10% es:"<<total<<endl;
                    }
                    
                    else
                         {
                         total=precio*0.80;
                         cout<<"El precio de el articulo con descuento del 20% es:"<<total<<endl;
                         }
                         
                         getch();
                         }