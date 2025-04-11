#include <stdio.h>

int  fact(int a){
    
    
                
                int sum=1;
                
                for(int i=1; i<=a; i++){
                    sum *=i;
                }
               return sum;
    }
  
int rev(int a){
        int reverse=0;
        while(a!=0){
            int v = a%10;
            reverse=reverse*10+v;
            a=a/10;
        }
        return reverse;
    }

  int Isprime(int a) {
        int  i, isPrime = 1;
    
        
    
        if (a <= 1) {
            isPrime = 0; // 0 and 1 are not prime numbers
        } else {
            for (i = 2; i <= a / 2; i++) {
                if (a % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
    
        if (isPrime) {
            return 1;
        } else {
            return 0;
        }
    
        
    }
    

    
    


