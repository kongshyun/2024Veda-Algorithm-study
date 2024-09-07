#include "fac.h"


int fac(int acc,int n){
    if(n==0){
        return acc*1;


    }
    return fac(acc*n,n-1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    
    return factorial(n-1);

}



// //-------반복문------
// int factorial(int n){
//     int a=1;
//     for(int i=n;i>0;i--){
//         a=a*i;
//     }
//     return a;
// }
// //----------