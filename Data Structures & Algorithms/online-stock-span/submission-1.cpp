class StockSpanner {
public:
    StockSpanner() {
        
    }
    vector<int>s;
    int next(int price) {
        if(s.size()==0)
        {
            s.push_back(price);
            return 1;
        }
            int ct=1;
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]<=price)
                {
                    ct++;
                }else{
                    s.push_back(price);
                    return ct;
                }
            }
        s.push_back(price);
        return ct;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */