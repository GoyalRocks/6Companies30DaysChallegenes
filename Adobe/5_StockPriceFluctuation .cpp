class StockPrice {
public:
    map<int,int>ma;
    multiset<int>mb;
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) 
    {
        if(ma.find(timestamp)!=ma.end()) 
          mb.erase(mb.find(ma[timestamp]));
        ma[timestamp]=price;
        mb.insert(price);  
    }
    
    int current() 
    {
        return ma.rbegin() -> second;
    }
    
    int maximum() 
    {
        return *mb.rbegin();
    }
    
    int minimum() 
    {
        return *mb.begin();
    }
};
