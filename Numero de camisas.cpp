#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

main(){
       double numcamisas,precio,total;
       cout<<"digite cuantas camisas compro"<<endl;
       cin>>numcamisas;
       cout<<"Digite el precio"<<endl;
       cin>>precio;
       if(numcamisas>=3){
                         total=precio*0.80;
                         cout<<"Como compro mas de 3 camisas se le descuenta el 20%:"<<total<<endl;
                         }
                         else{
                              total=precio*0.90;
                              cout<<"Como compro menos de 3 camisas se le desuenta el 10%:"<<total<<endl;
                              }
                              getch();
                              }
                         
                         
