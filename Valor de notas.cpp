#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

main(){
       int L,P,O,laverdad;
       cout<<"Digite las tres notas de tus 3 examenes"<<endl;
       cin>>L;
       cin>>O;
       cin>>P;
       laverdad=(L+O+P)/3;
       if(laverdad>=70){
                        cout<<"NERD:"<<laverdad<<endl;
                        }
                        else{
                             cout<<"VAGO:"<<laverdad<<endl;
                             }
                             getch();
                             }
