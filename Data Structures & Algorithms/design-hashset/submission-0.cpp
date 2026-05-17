#include <vector>
using namespace std;

class MyHashSet {
private:
    vector<bool> bucket;

public:
    MyHashSet() {
        bucket.resize(1000001, false); 
    }
    
    void add(int key) {
        bucket[key] = true;
    }
    
    void remove(int key) {
        bucket[key] = false;
    }
    
    bool contains(int key) {
        return bucket[key];
    }
};
