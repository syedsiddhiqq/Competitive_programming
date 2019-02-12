/*
* @Author: SyedAli
* @Date:   2019-01-14 16:19:48
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 16:21:51
*/


// C++ program to illustrate 
// the above problem 
#include <bits/stdc++.h> 
using namespace std; 
  
// function to find the sum of 
// all the edges of parallelepiped 
int findEdges(int s1, int s2, int s3) 
{ 
    // to caculate the length of one edge 
    int a = sqrt(s1 * s2 / s3); 
    int b = sqrt(s3 * s1 / s2); 
    int c = sqrt(s3 * s2 / s1); 
  
    // sum of all the edges of one side 
    int sum = a + b + c; 
  
    // net sum will be equal to the 
    // summation of edges of all the sides 
    return 4 * sum; 
} 
int main() 
{ 
    // initialize the area of three 
    // faces which has a common vertex 
    int s1, s2, s3; 
    scanf("%d%d%d",&s1,&s2,&s3);
    cout << findEdges(s1, s2, s3); 
  
    return 0; 
} 