/////12-03-2026/////////
VECTORS SYNTAX USING FOR EACH LOOP
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4,5,6};
    for(int val: vec){
        cout<<val<<endl;
    }
    return 0;
}

//////FUNCTIONS OF VECTORS//////////
////(1)SIZE//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4,5,6};
    cout<<"size = "<<vec.size()<<endl;
    return 0;
}

//////(2) PUSH_BACK/////
//USED TO PUSH AN ELEMENT IN A VECTOR//
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4};
    vec.push_back(7);
    vec.push_back(8);
    cout<<"size = "<<vec.size()<<endl;
    for(int val: vec){
        cout<<val<<endl;
    }
    return 0;
}

/////(3)POP_BACK///////
//IN THIS THE LAST INDEX VALUE OF THE VECTOR IS POPPED OUT
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4};
    vec.pop_back();
    cout<<"size = "<<vec.size()<<endl;
    for(int val: vec){
        cout<<val<<endl;
    }
    return 0;
}

//////(4)FRONT & BACK///////////
//FRONT GIVES US THE FIRST VALUE OF THE VECTOR AND BACK GIVES US THE LAST VALUE OF THE VECTOR
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4};
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    return 0;
}

////////(5)AT///////////
//GIVES US THE VALUE OF VECTOR AT THE PARTICULAR INDEX
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4};
    cout<<vec.at(3);
    return 0;
}


/////////14-03-2026/////////
////////problem 1//////////
//PERFORM A LINEAR SEARCH OPERATION FOR A VECTOR
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    printf("Insert the number you want ot check: ");
    scanf("%d",&n);
    int num = 0;
    vector <int> vec = {1,2,3,4,5,6,7,8};
    for(int val: vec){
        if(val==n){
            num==1;
        }     
    }
    if(num==1){
        printf("Yes, It is present in the vector.");
        }else{
            printf("The value is not present in the vector.");
        }
    }


/////////PROBLEM 2//////////
//WRITE A CODE USING FUNCTIONS TO REVERSE A VECTOR 
#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &vec){
    int start = 0;
    int end = vec.size()-1;
    while(start<end){
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;
        start++;
        end--;
     }
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7};
    reverse(vec);
    for(int val: vec){
        cout<<val<<" ";
    }
}

///////////PROBLEM 3//////////
//FIND OUT THE SINGLE NUMBER IN A VECTOR WITHOUT USING NESTED LOOP
#include <iostream>
#include <vector>
using namespace std;
int check(vector<int> &vec){
    int num = 0;
    for(int val: vec){
        num ^= val;
    }
    return num;
}
int main(){
    vector <int> vec = {1,2,3,4,5,2,3,1,5};
    cout<<"This is the single number: "<<check(vec);
}


