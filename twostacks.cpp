class twoStacks
{
    int *arr;
    int size;
    int top1;
    int top2;
    
    public:
    
    twoStacks()
    {
        this->size = 1000;
        top1 = 0;
        top2 = size-1;
        arr = new int[size];
    }
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if(top1<top2-1){
            top1++;
            arr[top1] = x;
        }
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
       if(top1<top2-1){
            top2--;
            arr[top2] = x;
        }
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1==0){
            return -1;
        }
        int temp = arr[top1];
        top1--;
        return temp;
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
       if(top2==size-1){
           return -1;
       }
       else{
           top2++;
           return arr[top2-1];
       }
    }
};
