#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include<cmath>
#include <bits/stdc++.h>
#include <stdio.h>
#include <set>
#include <stdlib.h>

long long amount_money;
using namespace std;
int rand_num(){
    return rand()%10 + 1;
}
int main()
{
    int num;
    again:
    cout << "           Enter Deposit amount to play game : $";
    cin>>amount_money;
    while(true){
        long long betting_amount;
         if(amount_money==0){
            cout<<"sorry you lose all your money and your balance now is 0 "<<endl;
            cout<<"Want to Play Again?"<<endl;
            cout<<"Press 1 for again, 2 for exit"<<endl;
            cin>>num;
            if(num == 2){
                cout<<"Thank You for playing"<<endl;
                break;
            }
            else if(num == 1){
                goto again;
            }
            else{
                cout<<"Wrong number, please choose between 1 and 2"<<endl;
            }
            return 0;
        }
        cout<<"enter bitting amount"<<endl;
        cin>>betting_amount;
        if(betting_amount>amount_money){
            cout<<"Current Balance: "<<amount_money<<endl;
            cout<<"you dont have enough money "<<endl;
            continue ;
        }

        cout<<"guess one :- " ;
        int n;
        cin>>n;
        if(n>10||n<=0){
            cout<<"wrong number ,try again"<<endl;
            continue ;
        }
        else{
            int r=rand_num();
            if(r==n){
                amount_money=amount_money+(betting_amount*10);
                cout<<"winner . \n your balance now is "<<amount_money<<endl;
            }else{
                amount_money=amount_money-betting_amount;
                cout<<"loser . \n your balance now is "<<amount_money<<endl;
                cout<<"The number was "<<r<<endl;
            }
        }
    }


    return 0;
}
