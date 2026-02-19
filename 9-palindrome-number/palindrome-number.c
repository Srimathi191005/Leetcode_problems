bool isPalindrome(int x) {
   if(x<0){
    return false;
   }
   long  rev=0;
   int real=x;
   while(x>0)
   {
    rev=rev * 10 + x % 10 ;
    x=x/10;
   }
   if(real==rev)
   {
    return true;
   }
   else
   {
    return false;
   }
}