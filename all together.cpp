#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

main(){
       int B,H;
       double areaR;
       double areaT;
       int a;
       double L, W;
       cout<<"hola soy yo, el que resuelve area de triangulos y rectangulos, si quieres averiguar el area de un rectangulo digite 1 y si quiere el area de un triangulo digite 2"<<endl;
       cin>>a;
       if(a==1){
       cout<<"selecciono el area de un rectangulo, porfavor digite la longitud y el ancho"<<endl;
       cin>>L;
       cin>>W;
       areaR=L*W;
       cout<<"el area es:"<<areaR<<endl;
       getch();
       }
   if(a==2){
           cout<<"hola soy yo, el que resuelve area de triangulos digite la base y la altura"<<endl;
       cin>>H;
       cin>>B;
       areaT=(H*B)/2;
       cout<<"el area del triangulo es:"<<areaT<<endl;
       }
       getch();
       }

      
      
       
       
