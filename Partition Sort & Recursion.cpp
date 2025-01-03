void orderVector(vector<double>& a, int l, int r) {
    if (l < r) {
        int s = partition(a, l, r);
        orderVector(a, l, s - 1);
        orderVector(a, s + 1, r);
    }
}

int partition(vector<double>& a, int l, int r) {
    double p = a[l];  // Choose the pivot
    int i = l;
    int j = r + 1;

    while (true)
    {
        do {
            i = i + 1;
        } while (a[i] < p);
        do {
            j = j - 1;
        } while (a[j] > p);
        if (i >= j)
        {
            break;
        }
        swap(a[i], a[j]);
    }
    swap(a[l], a[j]);
    return j;
}

bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;
        if (p == NULL || q == NULL) return false;

        if(p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
        {
            return true;
        }
        return false;
    }
