class Solution {
public:
double dp[26][26][101];
    double knightProbability(int n, int k, int row, int column) 
    {
        if(row<0 || column<0 || row>=n || column>=n)
          return 0;
        if(k==0)
          return 1;
        if(dp[row][column][k])
          return dp[row][column][k];
        double prob=0;
        prob = knightProbability(n,k-1,row-2,column-1)+knightProbability(n,k-1,row-2,column+1)
               + knightProbability(n,k-1,row-1,column-2)+knightProbability(n,k-1,row-1,column+2)
               + knightProbability(n,k-1,row+2,column-1)+knightProbability(n,k-1,row+1,column-2)
               + knightProbability(n,k-1,row+2,column+1)+knightProbability(n,k-1,row+1,column+2);
        prob/=8;
        
        return dp[row][column][k]=prob;
    }
};
