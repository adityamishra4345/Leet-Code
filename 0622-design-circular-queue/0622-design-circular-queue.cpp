class MyCircularQueue {
private:
    vector<int> arr;
        int front;
        int rear;
        int c;
        int size;
public:
    MyCircularQueue(int k) {
        arr.resize(k);
        front=0;
        rear=0;
        c=0;
        size=k;
        
        
    }
    
    bool enQueue(int value) {
        if(c>=size){
            return false;
        }
        arr[rear]=value;
        rear=(rear+1)%size;
        c++;
        return true;
        
    }
    
    bool deQueue() {

        if(c==0){
            return false;
        }
        front=(front+1)%size;
        c--;
        return true;

        
    }
    
    int Front() {
        if(c==0){
            return -1;
        }
        return arr[front];
        
    }
    
    int Rear() {
        if(c==0){
            return -1;
        }
        int last = (rear - 1 + size) % size;
        return arr[last];
        
    }
    
    bool isEmpty() {
        if(c==0){
            return true;
        }
        else{
            return false;
        }
        
    }
    
    bool isFull() {
        if(c>=arr.size()){
            return true;
        }
        else{
            return false;
        }        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */