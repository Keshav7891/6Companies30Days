class Solution{
public:
    string decodedString(string s)
    {
        string temp="",res="";
        stack<pair<string,int>>st;
        int i=0;
        while(i<s.size())
        {
            if(isdigit(s[i])==true)
            {
                int num=0;
                while(isdigit(s[i])==true)
                {
                    int tempn = s[i]-'0';
                    num=num*10+tempn;
                    i++;
                }
                st.push(make_pair(temp,num));
                temp="";
            }
            else if(isalpha(s[i]))
            {
                temp=temp+s[i];
            }
            else if(s[i]==']')
            {
                pair<string,int>p=st.top();
                st.pop();
                string curr = p.first;
                int freq = p.second;
                for(int j=0;j<freq;j++)
                {
                    curr=curr+temp;
                }
                if(st.empty()==true)
                {
                    res=res+curr;
                    temp="";
                }
                else
                {
                    temp=curr;
                }
            }
            i++;
        }
        res=res+temp;
        return res;
        
        // code here
    }
};
