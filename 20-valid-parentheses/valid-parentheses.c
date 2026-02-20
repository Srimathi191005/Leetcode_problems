bool isValid(char* s) {
    int len=strlen(s);
    char ch[100000];
    int top=-1;
    for(int i=0;s[i]!='\0';i++)
    {
        if( s[i]=='('||s[i]=='{'||s[i]=='[')
        {
        ch[++top]=s[i];
        }
        else
        {
            if(top==-1)
            {
                return false;
            }
           char last= ch[top--];
            if(s[i]==')'&&last!='('||
            s[i]=='}'&&last!='{'||
            s[i]==']'&&last!='[')
            {
                return false;
            }
        }
  }
  if(top==-1)
  {
    return true;
  }
  else
  {
    return false;
  }
  return 0;
}