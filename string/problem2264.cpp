#include <iostream>
using namespace std;

string largestOddNumber(string num) {
        int len = num.length();
        int i = len;
        while (i > 0) {
            i--;
            if (int(num[i]) % 2 == 1) {
                return num.substr(0,i+1);
            }
        }
        return "";
    }

int main(){
    cout<<"Enter the number :";
    string num;
    cin>>num;
    cout<<largestOddNumber(num);
}