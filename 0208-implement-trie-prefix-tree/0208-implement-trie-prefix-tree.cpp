struct trieNode{
    bool isEndofWord;
    trieNode* children[26];
};

trieNode* getNode(){
    trieNode* newNode = new trieNode();
    newNode->isEndofWord = false;

    for(int i =0;i<26;i++){
        newNode->children[i]= NULL;
    }

    return newNode;
}

trieNode* root ;


class Trie {
public:
    Trie() {
        root = getNode();
    }
    
    void insert(string word) {
        trieNode* crawler = root;

        for(int i =0;i<word.length();i++){
            char ch = word[i];
            int idx = ch -'a';

            if(crawler->children[idx]==NULL){
                crawler->children[idx]=getNode();
            }

            crawler = crawler->children[idx];
        }
        crawler->isEndofWord = true;
    }
    
    bool search(string word) {
        trieNode* crawler = root;

        for(int i = 0;i<word.length();i++){
            char ch = word[i];
            int idx = ch-'a';

            if(crawler->children[idx]==NULL)
            return false;

            crawler = crawler->children[idx];
        }

        if(crawler!= NULL && crawler->isEndofWord == true){
            return true;
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        trieNode* crawler = root;
        int i ;
        for( i =0;i<prefix.length();i++){
            int idx =  prefix[i]-'a';

            if(crawler->children[idx]==NULL)
            return false;

            crawler = crawler->children[idx];
        }

        if(i == prefix.length())
        return true;

        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */