// C++ program to find n'th Ugly number 
# include<bits/stdc++.h> 
using namespace std; 
  
/* Function to get the nth ugly number*/
unsigned getNthUglyNo(unsigned n) 
{ 
    unsigned ugly[n]; // To store ugly numbers 
    unsigned i2 = 0, i3 = 0, i5 = 0; 
    unsigned next_multiple_of_2 = 2; 
    unsigned next_multiple_of_3 = 3; 
    unsigned next_multiple_of_5 = 5; 
    unsigned next_ugly_no = 1; 
  
    ugly[0] = 1; 
    for (int i=1; i<n; i++) 
    { 
       next_ugly_no = min(next_multiple_of_2, 
                           min(next_multiple_of_3, 
                               next_multiple_of_5)); 
       ugly[i] = next_ugly_no; 
       cout<<"next_ugly_no "<<next_ugly_no<<"\n";
       if (next_ugly_no == next_multiple_of_2) 
       { 

           i2 = i2+1; 
           cout<<"i2 "<<i2<<"\n";
           next_multiple_of_2 = ugly[i2]*2; 
           cout<<next_multiple_of_2<<"\n";
       } 
       if (next_ugly_no == next_multiple_of_3) 
       { 
           i3 = i3+1; 
                      cout<<"i3 "<<i3<<"\n";

           next_multiple_of_3 = ugly[i3]*3; 
           cout<<next_multiple_of_3<<"\n";
       } 
       if (next_ugly_no == next_multiple_of_5) 
       { 
           i5 = i5+1; 
                      cout<<"i5 "<<i5<<"\n";

           next_multiple_of_5 = ugly[i5]*5;
           cout<<next_multiple_of_5<<"\n";
       } 
    } /*End of for loop (i=1; i<n; i++) */
    return next_ugly_no; 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int n = 150; 
    cout << getNthUglyNo(n); 
    return 0; 
} 