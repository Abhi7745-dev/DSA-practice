class Solution {
public:
    int f(int x){
        if(x<=1){
            return x;
        }
        else{
            return f(x-1)+f(x-2);
        }
    }
    int fib(int n) {
       int y= f(n);
       return y;
    }
};