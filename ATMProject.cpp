#include<iostream>
using namespace std;

void showmenu(){
    cout<<"----------- Welcome to VC Bank -----------"<<endl;
    cout<<"         *********** MENU ***********       "<<endl;
    cout<<"Press A. Check Balance"<<endl;
    cout<<"Press B. Deposit Money"<<endl;
    cout<<"Press C. Withdraw Money"<<endl;
    cout<<"Press D. Exit"<<endl;
    cout<<"********************************************"<<endl;
}

int main(){
    char option;
    double balance=500;
    do{
       showmenu();
       cout<<"Choose any Specific Option";
       cin>>option;

        switch(option){

        case 'A':
        cout<<"Current Balance is "<<balance<<"₹"<<endl;
        break;
        case 'B':
        cout<<"Enter the Depositable Amount";
        double depositmoney;
        cin>>depositmoney;
        balance+=depositmoney;
        break;

        case 'C':
        cout<<"Enter the Withdrawing Amount";
        double withdrawing;
        cin>>withdrawing;
        if(withdrawing<=balance){
            balance-=withdrawing;
        } else{
            cout<<"Not Enough Money"<<endl;
        }
        break;
        }
    } while(option!='D');
return 0;

}