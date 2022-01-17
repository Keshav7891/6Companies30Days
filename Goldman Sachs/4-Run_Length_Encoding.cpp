string encode(string str)
{     
    int cnt=0;
    string res="";
    for(int i=0;i<str.size();i++)
    {
        res=res+str[i];
        cnt=1;
        while(i<str.size()-1 && str[i]==str[i+1])
        {
            cnt++;
            i++;
        }
        stringstream ss;
        ss<<cnt;
        string c = ss.str();
        res=res+c;
    }
    return res;
}     