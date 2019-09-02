#include<iostream> 
using namespace std; 
  
// A dynamic programming based function to find nth 
// Catalan number 
unsigned long int catalanDP(unsigned int n) 
{ 
    // Table to store results of subproblems 
    unsigned long int catalan[n+1]; 
  
    // Initialize first two values in table 
    catalan[0] = catalan[1] = 1; 
  
    // Fill entries in catalan[] using recursive formula 
    for (int i=2; i<=n; i++) 
    { 
        catalan[i] = 0; 
        for (int j=0; j<i; j++) 
            catalan[i] += catalan[j] * catalan[i-j-1]; 
    } 
  
    // Return last entry 
    return catalan[n]; 
} 
  
// Driver program to test above function 
int main() 
{ 
    for (int i = 0; i < 10; i++) 
        cout << catalanDP(i) << " "; 
    return 0; 
} 

/*
// C++ program for nth Catalan Number 
#include<iostream> 
using namespace std; 
  
// Returns value of Binomial Coefficient C(n, k) 
unsigned long int binomialCoeff(unsigned int n, unsigned int k) 
{ 
    unsigned long int res = 1; 
  
    // Since C(n, k) = C(n, n-k) 
    if (k > n - k) 
        k = n - k; 
  
    // Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1] 
    for (int i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
  
// A Binomial coefficient based function to find nth catalan 
// number in O(n) time 
unsigned long int catalan(unsigned int n) 
{ 
    // Calculate value of 2nCn 
    unsigned long int c = binomialCoeff(2*n, n); 
  
    // return 2nCn/(n+1) 
    return c/(n+1); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    for (int i = 0; i < 10; i++) 
        cout << catalan(i) << " "; 
    return 0; 
}   
 */