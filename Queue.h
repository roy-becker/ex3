template<class T>
class Queue{
    T* queue;
    public:
    void pushBack(const Queue& arr, T& object);
    void popFront(const Queue& arr);
    int size(const Queue& arr);   
}


 void pushBack(const Queue& arr, T& object){
     int size1= arr.size;
     arr[size1]=object;
 }

 void popFront(const Queue& arr){
     int size1= arr.size;
     for(int i = 0; i < size1-1; i++){
        arr[i]= arr[i+1];
     }
 }