void merge(int* a, int nums1Size, int m, int* b, int nums2Size, int n) {
    int idx = m+n-1, i = m-1, j = n-1;

    while (i >= 0 && j >= 0){
        if(a[i] >= b[j]){
            a[idx--] = a[i--];
        }else{
            a[idx--] = b[j--];
        }
    }
    while (j >= 0) {
        a[idx--] = b[j--];
    }
}
