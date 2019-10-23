#include <iostream>

using namespace std;

int MaxSubArray(int *A,int n)
{
       int *dp = new int[n];
       dp[0]=A[0];

       for (int i = 0; i < n; ++i)
       {
       	  if( dp[i-1]+A[i] > A[i])
       	  {
       	  	dp[i]=dp[i-1]+A[i];
       	  }
       	  else
       	  {
       	  	dp[i]=A[i];
       	  }
       }

       int max=dp[0];
       for (int i = 0; i < n; ++i)   // 循环找出最大值
       {
       	  if(max<dp[i])
       	  	max=dp[i];
       }

       delete dp;
       return max;
}
