int subtractProductAndSum(int n) {
    int product=1;
    int sum=0;
    int a;
    int res;
    while(n>0)
    {
        a=n%10;
        product*=a;
        sum+=a;
        n=n/10;
        res=product-sum;
    }
    return res;
}