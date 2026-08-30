#include <iostream>
using namespace std;
int count = 0;
void rec(int n){
    if(n == 5){
        return ;
    }
    cout << n << " ";
    n++;
    rec(n);
}
int main(){
    rec(count);
    return 0;
}

#include <iostream>
using namespace std;
int count = 0;
void rec(string names, int n){
    if(n == 5){
        return;
    }
    cout << names<<" ";
    n++;
    rec(names,n);
}
int main(){
    string name = "Tony";
    rec(name,count);
}

#include <iostream>
using namespace std;
int start = 1;
void nums(int start,int n){
    if(start == n + 1){
        return;
    }
    cout << start <<" ";
    start++;
    nums(start,n);
}
int main(){
    int n;
    cin >> n;
    nums(start,n);
}

#include <iostream>
using namespace std;
int start_val = 0;
void nums(int n,int start){
    if(start == n){
        return;
    }
    cout << start <<" ";
    start--;
    nums(n,start);
}
int main(){
    int start;
    cin >> start;
    nums(start_val,start);
    return 0;
}