//70. Climbing Stairs


class Solution {
public:
    
   
    int climbStairs(int n) {  
        
        vector<int> mem_ways(n+1);                
        mem_ways[0] = 1;        
        mem_ways[1] = 1;       
      
        for(int i = 2; i <= n; i++)
        {
            mem_ways[i] = mem_ways[i-1] + mem_ways[i-2];
            //cout<<"for i = "<<i<<mem_ways[i]<<endl;
        }               
            
        return mem_ways[n];            
    }
};