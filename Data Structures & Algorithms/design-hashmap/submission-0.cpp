class MyHashMap {
private:
    int size;
    int *arr;  

public:
    MyHashMap() {
        size = 1000001;
        arr = new int[size];
        fill(arr, arr + size, -1);  
    }
    
    void put(int key, int value) {
        arr[key] = value;
    }
    
    int get(int key) {
        return arr[key];
    }
    
    void remove(int key) {
        arr[key] = -1;
    }
};
