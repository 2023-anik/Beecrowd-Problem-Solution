#include<bits/stdc++.h>
using namespace std;

void print(int h, int m){
    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)\n";
}

int main(){
    int h1, m1, h2, m2, M1, M2;
    cin>>h1>>m1>>h2>>m2;
    M1 = (h1*60)+m1;
    M2 = (h2*60)+m2;
    if(M1<M2){
        print((M2-M1)/60, (M2-M1)%60);
    }
    else if(M1==M2){
        print(24, 0);
    }
    else if(M1>M2){
        print((1440-(M1-M2))/60, (1440-(M1-M2))%60);
    }
	return 0;
}
