#include <bits/stdc++.h> 
using namespace std; 
  
// A recursive function that removes  
// consecutive duplicates from string S 
int _count=0;
void removeDuplicates(char* S) 
{ 
    // When string is empty, return 
    if (S[0] == '\0') 
        return; 
  
    // if the adjacent characters are same 
    if (S[0] == S[1]) { 
          
        // Shift character by one to left 
        _count++;
        int i = 0;  
        while (S[i] != '\0') { 
            S[i] = S[i + 2]; 
            i++; 
        } 
  
        // Check on Updated String S 
        removeDuplicates(S); 
    } 
  
    // If the adjacent characters are not same 
    // Check from S+1 string address 
    removeDuplicates(S + 2); 
} 
  
// Driver Program 
int main() 
{ 
    char S1[] = "geeksforgeeks"; 
    removeDuplicates(S1); 
    cout << S1 << endl; 
  	cout<<_count;
  	_count=0;
    char S2[] = "aabcca"; 
    removeDuplicates(S2); 
    cout << S2 << endl; 
  	cout<<_count;
    return 0; 
} 