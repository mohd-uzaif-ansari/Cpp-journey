#include <iostream>
using namespace std;
    int sum (int a, int b){
        int s = a + b;
        return s;
        }

    int minoftwo(int a, int b){
        if(a<b){
            return a;
        }
        if(a>b){
            return b;
        }
        else{
            return 0;
        }
    }
    int main(){
      cout << "minimum = " << minoftwo(54,55)<<endl;
        return 0; 
    }
    