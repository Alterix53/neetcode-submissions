class DynamicArray {
private:
    int *arr;
    int cur;
    int cap;
public:

    DynamicArray(int capacity) {
        cap = capacity;
        arr = new int[cap];
        cur = 0;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (cur >= cap)
            this->resize();
        arr[cur++] = n;
    }

    int popback() {
        return arr[--cur];
    }

    void resize() {
        cap *= 2;
    }

    int getSize() {
        return cur;
    }

    int getCapacity() {
        return cap;
    }

    ~DynamicArray() {
        delete [] arr;
    }
};
