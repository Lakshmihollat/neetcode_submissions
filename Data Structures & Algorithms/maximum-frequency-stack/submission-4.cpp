class FreqStack {
public:
    unordered_map<int, int> cnt;  // ele and its count
    unordered_map<int, stack<int>> stacks;  // count and ele with that count
    int maxCnt;

    FreqStack() {
        maxCnt = 0;
    }

    void push(int val) {
        int valCnt = ++cnt[val];
        if (valCnt > maxCnt) {
            maxCnt = valCnt;
            stacks[valCnt] = stack<int>();
        }
        stacks[valCnt].push(val);
    }

    int pop() {
        int res = stacks[maxCnt].top();
        stacks[maxCnt].pop();
        cnt[res]--;
        if (stacks[maxCnt].empty()) {
            maxCnt--;
        }
        return res;
    }
};