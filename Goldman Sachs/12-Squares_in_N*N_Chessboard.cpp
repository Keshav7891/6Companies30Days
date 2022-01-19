long long squaresInChessBoard(long long n) 
    {
        long long res;
        for(int i=1;i<=n;i++)
        {
            res=res+(i*i);
        }
        // code here
        return res;
    }
