class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) 
    {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> pq(arr, arr + n); // min heap
        
        if(n < 2)
           return 0;
           
        long long ans = 0;
        
        while(pq.size() >= 2)
        {
            long long first = pq.top();
            pq.pop();
            
            long long second = pq.top();
            pq.pop();
            
            ans = ans + first + second;
            
            pq.push(first + second);
        }
        
        return ans;
    }
};
