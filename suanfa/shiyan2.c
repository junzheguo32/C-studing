typedef struct {
    int min_p;
    int max_p;
    int profit;  //×î´óÀûÈó
} R;

R F(int A[], int l, int r) {
    R res;

    if (l == r) {
        res.min_p = A[l];
        res.max_p = A[l];
        res.profit = 0; 
        return res;
    }

    int m = l + (r - l) / 2;

    R l_res = F(A, l, m);
    R r_res = F(A, m + 1, r);

    res.min_p = (l_res.min_p < r_res.min_p) ?
        l_res.min_p : r_res.min_p;

    res.max_p = (l_res.max_p > r_res.max_p) ?
        l_res.max_p : r_res.max_p;

    int cross_profit = r_res.max_p - l_res.min_p;

    if (l_res.profit >= r_res.profit &&
        l_res.profit >= cross_profit) {
        res.profit = l_res.profit;
    }
    else if (r_res.profit >= l_res.profit &&
        r_res.profit >= cross_profit) {
        res.profit = r_res.profit;
    }
    else {
        res.profit = cross_profit;
    }

    return res;
}