class MyCircularQueue {
private:
    vector<int> data;
    int p_start = -1;
    int p_end = -3;
public:
    MyCircularQueue(int k) : data(k){
    }
    
    bool enQueue(int value) {
            if(isFull()){
                return false;
            }
            if((p_end+1)==data.size()){
                p_end-=data.size();
            }
            p_end++;
            if(isEmpty()){
                p_start = 0;
                p_end = 0;
            }
            data[p_end] = value;
            return true;
    };
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(p_start==p_end){
            p_start=-1;
            p_end=-3;
            return true;
        }
        p_start++;
        if((p_start)==data.size()){
            p_start-=data.size();
        }
        return true;   
    };
    
    int Front() {
        if(!isEmpty())
            return data[p_start];
        return -1;
    }
    
    int Rear() {
        if(!isEmpty())
            return data[p_end];
        return -1;
    }
    
    bool isEmpty() {
        if(p_start==-1){
            return true; 
        }
        return false;
    }    
    bool isFull() {
        if(((p_end+1)==(p_start))||((p_end+1-data.size())==p_start)){
        return true;
        }
        return false;
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