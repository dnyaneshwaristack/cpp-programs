#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main(){
int s;
int l;
int b;
float r;
float bs;
float ht;
cout<<"enter side of square:";
cin>>s;
cout<<"enter lenght and breath of rectangle:";
cin>>l>>b;
cout<<"enter radius of cicle:";
cin>>r;
cout<<"enter base and height of triangle:";
cin>>bs>>ht;
cout<<"area of square:\n"<<area(s);
cout<<"area of rectangle\n:"<<area(l,b);
cout<<"area of circle:\n"<<area(r);
cout<<"area of triangle:\n"<<area(bs,ht);
}
int area(int s){
return s*s;
}
int area(int l,int b){
return l*b;
}
float area(float r){
return r*r*3.14;
}
float area(float bs,float ht){
return (bs*ht)/2;
}
