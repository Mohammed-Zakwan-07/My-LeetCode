double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int n = nums1Size + nums2Size;
    int* SortedArray = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < nums1Size; i++) {
        SortedArray[i] = nums1[i];
    }

    for (int i = 0; i < nums2Size; i++) {
        SortedArray[nums1Size + i] = nums2[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (SortedArray[j] > SortedArray[j + 1]) {
                int temp = SortedArray[j];
                SortedArray[j] = SortedArray[j + 1];
                SortedArray[j + 1] = temp;
            }
        }
    }

    double median;
    if (n % 2 == 0) {
        median = (SortedArray[n / 2 - 1] + SortedArray[n / 2]) / 2.0;
    } else {
        median = SortedArray[n / 2];
    }

    free(SortedArray);

    return median;
}
