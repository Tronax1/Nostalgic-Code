#include<conio.h>
#include<iostream>
#include<stdio.h>

using namespace std;

main(){
 int compra,descuento, total;
  
cout<<"Digite el valor de la compra"<<endl;
cin>>compra;
descuento=compra*0.20;
total=compra-descuento; 
if(compra>1000){
          
             
                          cout<<"Su valor de la compra es"<<total<<endl;
                          
                          }
                          if(compra<=1000){
                                           cout<<"Su valor de compra es"<<compra<<endl;
                          }

                          getch();
                          }
