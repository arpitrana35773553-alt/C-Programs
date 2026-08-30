#include <iostream>
using namespace std;
int sum(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return sum;
}
int main(){
    cout<<sum(12345);
}

#include <iostream>
using namespace std;
void checkPrime(int n){
    int temp = 0;
    for(int i = 2; i < n;i++){
       if(n % i == 0){
        temp = 1;
       }
       if(temp == 1){
        break;
       }
    }
    if(temp == 0){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
}
int main(){
    int n;
    cout<<"Enter the number to check: ";
    cin >> n;
    checkPrime(n);
}

#include <iostream>
using namespace std;
int convert(int n){
    int num = 0;
    int power = 1;
    while(n > 0){
        int digit = n % 2;
        num += (digit * power);
        n = n / 2;
        power = power * 10;
    }
   return num;
}
int main(){
    int n;
    cout <<"Enter the number";
    cin >> n;
    cout << convert(n);
}
