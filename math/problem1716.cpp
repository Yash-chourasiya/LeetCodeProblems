#include <iostream>
using namespace std;

int totalMoney(int n) {     //n is given which is number of days
        int x = n/7;  //x is number of complete weeks (i.e. weeks which are completed)
        int amount = (x)*((2*28)+(x-1)*7)*(0.5);
        int lastWeek = ((n%7)*0.5)*((x+1) + (x+(n%7))); //lastWeek represents amount deposited in last week which was not completed if there is any
        return lastWeek+amount;     //total amount
    }



int main(){
    cout<<"Enter number of days money is deposited: ";
    int n;
    cin>>n;
    cout<<"Total money deposited is: "<<totalMoney(n);
}