class kQueues {

  public:
    vector<queue<int>> a;
    int s;
    int len=0;
    kQueues(int n, int k) {
        s=n;
        a.resize(k);
    }

    void enqueue(int x, int i) {
        a[i].push(x);
        len++;
    }

    int dequeue(int i) {
        int ans=-1;
        if(!isEmpty(i)) {
            ans=a[i].front();
            a[i].pop();
            len--;
        }
        return ans;
    }

    bool isEmpty(int i) {
        if(a[i].empty())
        return true;
        return false;
    }

    bool isFull() {
        if(len==s)
        return true;
        return false;
    }
};
