class Solution {
public:
  bool checkPerfectNumber(int num){
    int i, s = 0;
    for(i = 1; i <= num / 2; i++)
    {
        if(num % i == 0){
            s += i;
        }
    }
    return num == s;
}
};