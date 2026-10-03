class Solution {
private:
    void recur(vector<int>& arr, int index) {
        if (index < 0) return;  

        if ((arr[index] + 1) <= 9) {
            arr[index] = arr[index] + 1;
            return;
        }
        else {
            arr[index] =  0;
            recur(arr, index - 1);   
        }
    }

public:
    vector<int> plusOne(vector<int>& arr) {
        recur(arr, arr.size() - 1); 
        if (arr[0] == 0) {   
            arr.insert(arr.begin(), 1);
        }
        return arr;
    }
};