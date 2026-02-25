#include <iostream>
using namespace std;
int main(){
   int a, b;
   cout<<"Enter First No. :";
   cin >> a;
   cout<<"Enter Second No. :";
   cin >> b;
   cout<<"Sum of No.'s is: "<< (a+b);
   return 0;
}


#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j =1;j<=4;j++){
            cout<<j;
        }
        cout<<endl;
}
}


#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i =0;i<n;i++){
        char ch ='A';
        for(int j =0;j<n;j++){
            cout<< ch<<" ";
            ch = ch+1;
        }
        cout<<endl;
    }
    return 0;
} 


#include <iostream>
using namespace std;
int main(){
    int n = 3;
    int num = 1;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
return 0;
}


#include <iostream>
using namespace std;
int main(){
    int n =6;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i>=j){
            cout<<"*"<<" ";
            }else{
                continue;
            }
        }
        cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0;i<n;i++){
        for(int j =0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}