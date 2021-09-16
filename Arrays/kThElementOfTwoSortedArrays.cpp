/*
K-th element of two sorted Arrays 
Medium Accuracy: 50.09% Submissions: 25537 Points: 4
Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. The task is to find the element that would be at the k’th position of the final sorted array.
 

Example 1:

Input:
arr1[] = {2, 3, 6, 7, 9}
arr2[] = {1, 4, 8, 10}
k = 5
Output:
6
Explanation:
The final sorted array would be -
1, 2, 3, 4, 6, 7, 8, 9, 10
The 5th element of this array is 6.
Example 2:
Input:
arr1[] = {100, 112, 256, 349, 770}
arr2[] = {72, 86, 113, 119, 265, 445, 892}
k = 7
Output:
256
Explanation:
Final sorted array is - 72, 86, 100, 112,
113, 119, 256, 265, 349, 445, 770, 892
7th element of this array is 256.
*/

int kthElement(int arr1[], int arr2[], int n, int m, int k) {
    int i = 0;
    int j = 0;
    int count = 1;
    while (i < n && j < m) {
        if (count == k) {
            if (arr1[i] < arr2[j])
                return arr1[i];
            else
                return arr2[j];
        } else {
            if (arr1[i] < arr2[j])
                i++;
            else
                j++;
        }
        //otherwise
        count++;

    }

    while (i < n) {
        if (count == k) {
            return arr1[i];
        }
        count++;
        i++;
    }

    while (j < m) {
        if (count == k) {
            return arr2[j];
        }
        count++;
        j++;
    }
}
