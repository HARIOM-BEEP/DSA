class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int i = 0;
        int idx = 0;
        int store = 0;

        while (idx < n) {

            if (height[idx] >= height[i]) {

                for (int k = i + 1; k < idx; k++) {
                    store += height[i] - height[k];
                }

                i = idx;
            }

            idx++;
        }

        // i is the point where left traversal got stuck
        int l = i;

        // RIGHT -> LEFT
        int j = n - 1;
        idx = n - 1;

        while (idx >= l) {

            if (height[idx] >= height[j]) {

                for (int k = j - 1; k > idx; k--) {
                    store += height[j] - height[k];
                }

                j = idx;
            }

            idx--;
        }

        return store;
    }
};