//344. Reverse String
#include <iostream>
#include <vector>


using namespace std;

int reverseString(char s[],int j) {
    int i = 0;
    while (i < j){
        swap(s[i++],s[j--]);
    }
}

int getLength(char arr[]){
    int i = 0;
    while(arr[i] != '\0'){
        i++;
    }
    return i-1;
}

int main(){
    cout<<"Enter the string of characters: ";
    char stri[999999];
    cin>>stri;
    int slen = getLength(stri);
    reverseString(stri, slen);
    cout<<stri;
}
