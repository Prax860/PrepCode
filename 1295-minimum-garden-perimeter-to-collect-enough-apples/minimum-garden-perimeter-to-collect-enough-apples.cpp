class Solution {
public:
    long long minimumPerimeter(long long a) {
        long long sum = 0;
        long long count = 0;
       while(sum < a){
        count++; 
    sum+=12*count*count;
       }
       return 8*count;
    
}
    
};