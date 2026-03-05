
// SOLVING PATTERN PROBLEMS USING LOOPING STATEMENTS.

///////////////////////////PROBLEM 1///////////////////////
#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int n =3;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

//////////////////////////PROBLEM 2////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int num = 65;
    int n  = 3;
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<char(num)<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

//////////////////PROBLEM 3//////////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int num = 5;
    for(int i = 0;i<num;i++){
        for(int j =0;j<i+1;j++){
                cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/////////////////////PROBLEM 4//////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int n =4;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<num<<" ";
        }
        cout<< endl;
        num++;
    }
    return 0;
}

////////////////////////PROBLEM 5 /////////////////////////
#include <iostream>
using namespace std;
int main(){
    int num = 65;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<i+1;j++){
            cout<<char(num)<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}


///////////////////PROBLEM 6///////////////////
#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0;i<n;i++){
        int num =1;
        for(int j = 0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}


////////////////////////PROBLEM 7////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n =4;
    for(int i = 0;i<n;i++){
         int num = i+1;
        for(int j = 0;j<i+1;j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
    return 0;
}


///////////////////////////PROBLEM 8////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n =4;
    int num = 1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}


///////////////////////////PROBLEM 10/////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 65;
    for(int i=0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<char(num)<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

//////////////////////////PROBLEM 11////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n =4;
    int num =1;
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(j>=i){
            cout<<num;
            }else
            cout<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}


////////////////////////////PROBLEM 12////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n =4;
    int num =65;
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(j>=i){
            cout<<char(num);
            }else
            cout<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}



////////////////////////PROBLEM 13///////////////////////////////
#include <iostream>
using namespace std;
int main(){
    int n =8;
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j= 1;j<=i+1;j++){
            cout<<j;
        }
        for(int j = i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
