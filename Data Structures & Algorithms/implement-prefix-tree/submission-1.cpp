class PrefixTree {
public:
vector<string>words;
    PrefixTree() {
        
    }
    
    void insert(string word) {
        words.push_back(word);
    }
    
    bool search(string word) {
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==word)
            {
                return true;
            }
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        int len=prefix.length();
        for(int i=0;i<words.size();i++)
        {
            if(words[i].substr(0,len)==prefix)
            {
                return true;
            }
        }
        return false;
    }
};
