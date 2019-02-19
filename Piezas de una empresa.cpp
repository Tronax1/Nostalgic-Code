#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

main(){
       double resultado,total2,total3,total4,total5,total,costopieza, numpiezas;
       cout<<"type how many pieces do you want"<<endl;
       cin>>numpiezas;
       cout<<"digite el valor de cada pieza"<<endl;
       cin>>costopieza;
       total=numpiezas*costopieza;
      if(total>500000){
                       
                       total5=(total*0.15)*0.20;
                       total4=total*0.15;
                       total3=total*0.30;
                       total2=total*0.55;
                       cout<<"la cuenta dio"<<total<<endl;
                       cout<<"la empresa pagara el 55%"<<total2<<endl;
                       cout<<"la empresa presta del banco 30%"<<total3<<endl;
                       cout<<"el fabricante financia el 15%"<<total4<<endl;
                       cout<<"los intereses del fabricante son el 20% del credito que se le pago"<<total5<<endl;
                       resultado=total3+total4+total5;
                       cout<<"la empresa debe:"<<resultado<<endl;
                       
                       }
                       else{
                            
                            total4=(total*0.30)*0.20;
                            total3=total*0.30;
                            total2=total*0.70;
                            cout<<"la cuenta dio"<<total<<endl;
                            cout<<"la empresa pagara el 70%"<<total2<<endl;
                            cout<<"el fabricante financia el 30%"<<total3<<endl;
                            cout<<"interes del fabricante"<<total4<<endl;
                            resultado=total3+total4;
                            cout<<"la empresa debe:"<<resultado<<endl;
                            }
                            getch();
                            }
                       
