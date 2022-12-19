#include <iostream>
#include "math.h"
using namespace std;

bool funz (float &a, float &b){
 float fa, fb;
 fa=pow(a,2)*cos(a)+1;
 fb=pow(b, 2)*cos(b)+1;
    if ((fa*fb)>=0){
        return true;}
    else {
        return false;}
}

bool funz_1 (float &a, float &b, float &fx){
    float fa, fb;

    fa=pow(a,2)*cos(a)+1;
    fb=pow(b, 2)*cos(b)+1;
    fx=fa*fb;

    if ((fa*fb)==0){
        return true;}
    else {
        return false;}
}

bool funz_2 (float &a, float &b){
    float fa, fb;
    fa=pow(a,2)*cos(a)+1;
    fb=pow(b, 2)*cos(b)+1;
    if ((fa*fb)<=0){
        return true;}
    else {
        return false;}
}

bool err (float &a, float &b, float &x){
    float err;
    err=abs((b-a)/2);
    if ((err)>=1 || (err)>=-6 ){
        return true;}
    else {
        return false;}
}
float x;


int main() {
    float a, b, fx;
    a=0;
    b=0;
    fx=0;
    do {
    cout<<"inserire estremi"<<endl;
    cin>>a>>b;
    }
    while (funz(a, b));
    do {
    a=(a+b)/2;

    x=(a+b)/2;
    if (funz_1(a, b, fx)) {
        cout << fx << " " << x << endl;
    }
    else if (funz_2(a, b)){
        a=x;
    }
    else if (funz_2(a, b)==false){
        b=x;

    }

    }
    while (err(a, b, x));
    cout<<x<<fx;
   return 0;
}
