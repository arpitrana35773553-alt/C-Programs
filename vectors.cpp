///////12-03-2026/////////
//VECTORS SYNTAX USING FOR EACH LOOP
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






