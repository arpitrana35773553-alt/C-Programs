//////////////////10-03-2026//////////
///////PROBLEM 1///////////////////
//FIND THE SMALLEST VALUE IN ARRAY WITHOUT USING MIN 
#include <iostream>
using namespace std;
int main(){
    int num[5]={5,12,34,-56,-27};
    int size = sizeof(num)/sizeof(int);
    int smallest = INT_MAX;
    for(int i = 0;i<size;i++){
        if(num[i]<smallest){
            smallest = num[i];
        }
    }
    cout<<"Smallest int is:"<<smallest<<endl;
    return 0;
}

/////////////////PROBLEM2/////////////////
//PRINT THE INDEX NO. WHICH STORES THE SMALLEST VALUE IN THE ARRAY
#include <iostream>
using namespace std;
int main(){
    int num[5] = {12,34,67,-8,-11};
    int size = sizeof(num)/sizeof(int);
    int smallest = INT_MAX;
    int small = 0;
    for(int i = 0;i<size;i++){
        small = min(num[i],smallest);
        smallest = small;
    }
    int index = 0;
    for(int i=0;i<size;i++){
        if(num[i]==smallest){
            cout<<"Index value of smallest value:"<<index<<endl;
        }else{
            index++;
        }
    }
    return 0;
}


///////////////PROBLEM3/////////////////
////FIND THE LARGEST VALUE IN THE ARRAY AND PRINT IT'S INDEX VALUE
#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,23,4,-3,12};
    int size = sizeof(arr)/sizeof(int);
    int largest = INT_MIN;
    for(int i = 0;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"The largest value in array is:"<<largest<<endl;
    
    int index = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]==largest){
            cout<<"The index of largest value is:"<<index<<endl;
        }else{
            index++;
        }
    }
    return 0;
}

