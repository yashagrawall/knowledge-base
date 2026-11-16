# Design and Analysis of Algorithms (DAA) Laboratory Manual

---

Date of Submission and Viva : 17/11/2026    
Total Experiments : 13    
Tags : [[College]] ; [[DSA]]    
**Associated Notes:** [[DAA Lab & Theory Viva Guide]] · [[DAA Study Flow & Execution Guide]] · [[DAA Theory Syllabus]]  
~***Yash Agrawall***~

---
# INDEX 

| Sl. No. | Title (Aim)                                                                                                               | Date of Expt | Date of Submission |
| ------- | ------------------------------------------------------------------------------------------------------------------------- | ------------ | ------------------ |
| 1       | Sort a given array of elements in ascending order using Insertion Sort technique                                          | 05/08/2026   | 17/11/2026         |
| 2       | Sort a given array of elements in ascending order using Merge Sort technique                                              | 05/08/2026   | 17/11/2026         |
| 3       | Sort a given array of elements in ascending order using Heap Sort technique                                               | 12/08/2026   | 17/11/2026         |
| 4       | Sort a given array of elements in ascending order using Quick Sort technique                                              | 12/08/2026   | 17/11/2026         |
| 5       | Find minimum number of scalar multiplications required to multiply a given sequence of matrices using Dynamic Programming | 19/08/2026   | 17/11/2026         |
| 6       | Search for a given element in a sorted array using Binary Search technique                                                | 19/08/2026   | 17/11/2026         |
| 7       | Implement the Activity Selection Problem using Greedy method and select maximum number of non-overlapping activities      | 02/09/2026   | 17/11/2026         |
| 8       | Implement the Longest Common Subsequence (LCS) problem using Dynamic Programming                                          | 02/09/2026   | 17/11/2026         |
| 9       | Construct a Huffman Tree and generate Huffman codes for given characters and their frequencies                            | 30/09/2026   | 17/11/2026         |
| 10      | Implement Breadth First Search (BFS) and Depth First Search (DFS) for graph traversal                                     | 30/09/2026   | 17/11/2026         |
| 11      | Implement Minimum Spanning Tree (MST) using Kruskal's Algorithm and Prim's Algorithm                                      | 07/10/2026   | 17/11/2026         |
| 12      | Find the shortest path from a source vertex to all other vertices in a weighted graph using Dijkstra's Algorithm          | 28/10/2026   | 17/11/2026         |
| 13      | Find the shortest path from a source vertex to all other vertices in a weighted graph using the Bellman-Ford Algorithm    | 28/10/2026   | 17/11/2026         |

---
## EXPERIMENT - 01

**Date:** 05/08/2026  
### AIM
To write and implement a C program to sort a given array of elements in ascending order using the Insertion Sort technique.

### ALGORITHM
1. Start.
2. Read the number of elements $n$.
3. Read $n$ elements into an array.
4. Start from the second element of the array.
5. Store the current element in `key`.
6. Compare `key` with the elements before it.
7. Shift all elements greater than `key` one position to the right.
8. Insert `key` into its correct position.
9. Repeat the process until all elements are sorted.
10. Display the sorted array.
11. Stop.

### PSEUDOCODE
```text
INSERTION_SORT(A, n)
    for i ← 1 to n - 1
        key ← A[i]
        j ← i - 1
        while j ≥ 0 AND A[j] > key
            A[j + 1] ← A[j]
            j ← j - 1
        end while
        A[j + 1] ← key
    end for
```

### C PROGRAM
```c
#include <stdio.h>

int main() {
    int a[100], n, i, j, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
```

### INPUT
```text
Enter the number of elements: 5
Enter the elements:
45 12 78 23 9
```

### OUTPUT
```text
Sorted array: 9 12 23 45 78
```

---
## EXPERIMENT - 02

**Date:** 05/08/2026  
### AIM
To write and implement a C program to sort a given array of elements in ascending order using the Merge Sort technique.

### ALGORITHM
1. Start.
2. Read the number of elements $n$.
3. Read the array elements.
4. Divide the array into two halves.
5. Recursively divide each half until individual elements are obtained.
6. Merge the divided subarrays in sorted order.
7. Continue merging until the complete array is sorted.
8. Display the sorted array.
9. Stop.

### PSEUDOCODE
```text
MERGE_SORT(A, low, high)
    if low < high
        mid ← (low + high) / 2
        MERGE_SORT(A, low, mid)
        MERGE_SORT(A, mid + 1, high)
        MERGE(A, low, mid, high)
    end if

MERGE(A, low, mid, high)
    i ← low
    j ← mid + 1
    k ← low
    while i ≤ mid AND j ≤ high
        if A[i] ≤ A[j]
            B[k] ← A[i]
            i ← i + 1
        else
            B[k] ← A[j]
            j ← j + 1
        end if
        k ← k + 1
    end while
    while i ≤ mid
        B[k] ← A[i]
        i ← i + 1
        k ← k + 1
    end while
    while j ≤ high
        B[k] ← A[j]
        j ← j + 1
        k ← k + 1
    end while
    copy B[low...high] into A[low...high]
```

### C PROGRAM
```c
#include <stdio.h>

void merge(int a[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    int temp[100];

    while (i <= mid && j <= high) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = a[i++];
    }

    while (j <= high) {
        temp[k++] = a[j++];
    }

    for (i = low; i <= high; i++) {
        a[i] = temp[i];
    }
}

void merge_sort(int a[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    int a[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    merge_sort(a, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
```

### INPUT
```text
Enter the number of elements: 6
Enter the elements:
38 27 43 3 9 82
```

### OUTPUT
```text
Sorted array: 3 9 27 38 43 82
```

---
## EXPERIMENT - 03

**Date:** 12/08/2026  
### AIM
To write and implement a C program to sort a given array of elements in ascending order using the Heap Sort technique.

### ALGORITHM
1. Start.
2. Read the number of elements $n$.
3. Read the array elements.
4. Construct a Max Heap from the given array.
5. Exchange the root element with the last element.
6. Reduce the heap size by one.
7. Apply heapify to maintain the Max Heap property.
8. Repeat the process until the heap contains one element.
9. Display the sorted array.
10. Stop.

### PSEUDOCODE
```text
HEAPSORT(A, n)
    for i ← n / 2 - 1 down to 0
        HEAPIFY(A, n, i)
    for i ← n - 1 down to 1
        swap A[0] and A[i]
        HEAPIFY(A, i, 0)

HEAPIFY(A, n, i)
    largest ← i
    left ← 2 * i + 1
    right ← 2 * i + 2
    if left < n AND A[left] > A[largest]
        largest ← left
    if right < n AND A[right] > A[largest]
        largest ← right
    if largest ≠ i
        swap A[i] and A[largest]
        HEAPIFY(A, n, largest)
```

### C PROGRAM
```c
#include <stdio.h>

void heapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i) {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}

void heapsort(int a[], int n) {
    int i, temp;

    for (i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    for (i = n - 1; i > 0; i--) {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }
}

int main() {
    int a[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    heapsort(a, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
```

### INPUT
```text
Enter the number of elements: 6
Enter the elements:
25 17 31 13 2 40
```

### OUTPUT
```text
Sorted array: 2 13 17 25 31 40
```

---
## EXPERIMENT - 04

**Date:** 12/08/2026  
### AIM
To write and implement a C program to sort a given array of elements in ascending order using the Quick Sort technique.

### ALGORITHM
1. Start.
2. Read the number of elements $n$.
3. Read the array elements.
4. Select an element as the pivot.
5. Partition the array around the pivot.
6. Place elements smaller than the pivot on its left and larger elements on its right.
7. Recursively apply quicksort to the left and right subarrays.
8. Display the sorted array.
9. Stop.

### PSEUDOCODE
```text
QUICK_SORT(A, low, high)
    if low < high
        pivot_position ← PARTITION(A, low, high)
        QUICK_SORT(A, low, pivot_position - 1)
        QUICK_SORT(A, pivot_position + 1, high)
    end if

PARTITION(A, low, high)
    pivot ← A[high]
    i ← low - 1
    for j ← low to high - 1
        if A[j] < pivot
            i ← i + 1
            swap A[i] and A[j]
        end if
    end for
    swap A[i + 1] and A[high]
    return i + 1
```

### C PROGRAM
```c
#include <stdio.h>

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;
    int j, temp;

    for (j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quick_sort(int a[], int low, int high) {
    int p;
    if (low < high) {
        p = partition(a, low, high);
        quick_sort(a, low, p - 1);
        quick_sort(a, p + 1, high);
    }
}

int main() {
    int a[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quick_sort(a, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
```

### INPUT
```text
Enter the number of elements: 6
Enter the elements:
10 7 8 9 1 5
```

### OUTPUT
```text
Sorted array: 1 5 7 8 9 10
```

---
## EXPERIMENT - 05

**Date:** 19/08/2026  
### AIM
To write and implement a C program to find the minimum number of scalar multiplications required to multiply a given sequence of matrices using Dynamic Programming.

### ALGORITHM
1. Start.
2. Read the number of matrices $n$.
3. Read the dimensions of the matrices in array $p$.
4. Create a cost table $m$.
5. Set the cost of multiplying one matrix as zero.
6. Consider chains of length $2, 3, \dots, n$.
7. For every possible split position, calculate the multiplication cost.
8. Select the minimum cost for each matrix chain.
9. The value $m[1][n]$ gives the minimum number of scalar multiplications.
10. Display the minimum cost.
11. Stop.

### PSEUDOCODE
```text
MATRIX_CHAIN_ORDER(p, n)
    for i ← 1 to n
        m[i][i] ← 0
    for length ← 2 to n
        for i ← 1 to n - length + 1
            j ← i + length - 1
            m[i][j] ← ∞
            for k ← i to j - 1
                cost ← m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]
                if cost < m[i][j]
                    m[i][j] ← cost
                end if
            end for
        end for
    end for
    return m[1][n]
```

### C PROGRAM
```c
#include <stdio.h>
#include <limits.h>

int main() {
    int p[20], m[20][20];
    int n, i, j, k, length, cost;

    printf("Enter the number of matrices: ");
    scanf("%d", &n);

    printf("Enter the dimensions:\n");
    printf("For %d matrices, enter %d dimensions:\n", n, n + 1);
    for (i = 0; i <= n; i++) {
        scanf("%d", &p[i]);
    }

    for (i = 1; i <= n; i++) {
        m[i][i] = 0;
    }

    for (length = 2; length <= n; length++) {
        for (i = 1; i <= n - length + 1; i++) {
            j = i + length - 1;
            m[i][j] = INT_MAX;
            for (k = i; k < j; k++) {
                cost = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (cost < m[i][j]) {
                    m[i][j] = cost;
                }
            }
        }
    }

    printf("Minimum number of scalar multiplications: %d\n", m[1][n]);
    return 0;
}
```

### INPUT
```text
For three matrices:
A1 = 10 x 20
A2 = 20 x 30
A3 = 30 x 40

Enter the number of matrices: 3
Enter the dimensions:
For 3 matrices, enter 4 dimensions:
10 20 30 40
```

### OUTPUT
```text
Minimum number of scalar multiplications: 18000
```

---
## EXPERIMENT - 06

**Date:** 19/08/2026    
### AIM
To write and implement a C program to search for a given element in a sorted array using the Binary Search technique.

### ALGORITHM
1. Start.
2. Read the number of elements $n$.
3. Read the elements of the sorted array.
4. Read the element to be searched.
5. Set $low = 0$ and $high = n - 1$.
6. Calculate $mid = (low + high) / 2$.
7. If $A[mid]$ is equal to the search element, the element is found.
8. If the search element is smaller than $A[mid]$, set $high = mid - 1$.
9. Otherwise, set $low = mid + 1$.
10. Repeat until $low > high$.
11. If the element is not found, display an appropriate message.
12. Stop.

### PSEUDOCODE
```text
BINARY_SEARCH(A, n, key)
    low ← 0
    high ← n - 1
    while low ≤ high
        mid ← (low + high) / 2
        if A[mid] = key
            return mid
        else if key < A[mid]
            high ← mid - 1
        else
            low ← mid + 1
        end if
    end while
    return -1
```

### C PROGRAM
```c
#include <stdio.h>

int binarySearch(int a[], int n, int key) {
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main() {
    int a[100], n, key, i, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = binarySearch(a, n, key);

    if (result != -1)
        printf("Element %d found at position %d\n", key, result + 1);
    else
        printf("Element %d not found\n", key);

    return 0;
}
```

### INPUT
```text
Enter the number of elements: 7
Enter the elements in sorted order:
10 20 30 40 50 60 70
Enter the element to search: 50
```

### OUTPUT
```text
Element 50 found at position 5
```

---
## EXPERIMENT - 07

**Date:** 02/09/2026    
### AIM
To implement the Activity Selection Problem using the Greedy method and select the maximum number of non-overlapping activities.

### PSEUDOCODE
```text
START
READ N
READ start[], finish[]
SORT activities by finish[]
SELECT activity 0
last ← finish[0]
FOR i ← 1 to n - 1
    IF start[i] ≥ last
        SELECT activity i
        last ← finish[i]
    END IF
END FOR
STOP
```

### C PROGRAM
```c
#include <stdio.h>

int main() {
    int n, i, j, s[20], f[20], t;

    printf("Enter number of activities: ");
    scanf("%d", &n);

    printf("Enter start times:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }

    printf("Enter finish times:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &f[i]);
    }

    /* Sort activities by finish time */
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (f[i] > f[j]) {
                t = f[i];
                f[i] = f[j];
                f[j] = t;

                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }

    printf("Selected activities: ");
    printf("A1 ");
    t = f[0];

    for (i = 1; i < n; i++) {
        if (s[i] >= t) {
            printf("A%d ", i + 1);
            t = f[i];
        }
    }
    printf("\n");

    return 0;
}
```

### INPUT
```text
Enter number of activities: 6
Enter start times:
1 3 0 5 8 5
Enter finish times:
2 4 6 7 9 9
```

### OUTPUT
```text
Selected activities: A1 A2 A4 A5
```

---
## EXPERIMENT - 08

**Date:** 02/09/2026    
### AIM
To implement the Longest Common Subsequence (LCS) problem using Dynamic Programming.

### PSEUDOCODE
```text
START
READ X, Y
m ← LENGTH(X)
n ← LENGTH(Y)
FOR i ← 0 to m
    DP[i][0] ← 0
END FOR
FOR j ← 0 to n
    DP[0][j] ← 0
END FOR
FOR i ← 1 to m
    FOR j ← 1 to n
        IF X[i - 1] == Y[j - 1]
            DP[i][j] ← DP[i - 1][j - 1] + 1
        ELSE
            DP[i][j] ← MAX(DP[i - 1][j], DP[i][j - 1])
        END IF
    END FOR
END FOR
PRINT DP[m][n]
STOP
```

### C PROGRAM
```c
#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char a[50], b[50];
    int dp[50][50], i, j, m, n;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    m = strlen(a);
    n = strlen(b);

    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    printf("Length of LCS = %d\n", dp[m][n]);
    return 0;
}
```

### INPUT
```text
Enter first string: ABCDGH
Enter second string: AEDFHR
```

### OUTPUT
```text
Length of LCS = 3
LCS: ADH
```

---
## EXPERIMENT - 09

**Date:** 30/09/2026     
### AIM
To construct a Huffman Tree and generate Huffman codes for given characters and their frequencies.

### PSEUDOCODE
```text
START
READ N
READ character[], frequency[]
CREATE MIN-HEAP
WHILE heap SIZE > 1
    x ← EXTRACT-MIN
    y ← EXTRACT-MIN
    z ← NEW NODE
    z.freq ← x.freq + y.freq
    z.left ← x
    z.right ← y
    INSERT z
END WHILE
root ← EXTRACT-MIN
GENERATE CODES(root)
STOP
```

### C PROGRAM
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    char ch;
    int freq;
    struct Node *l, *r;
};

struct Node* newNode(char c, int f) {
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    p->ch = c;
    p->freq = f;
    p->l = p->r = NULL;
    return p;
}

void swap(struct Node **a, struct Node **b) {
    struct Node *t = *a;
    *a = *b;
    *b = t;
}

void heapify(struct Node *h[], int n, int i) {
    int s = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && h[l]->freq < h[s]->freq)
        s = l;

    if (r < n && h[r]->freq < h[s]->freq)
        s = r;

    if (s != i) {
        swap(&h[i], &h[s]);
        heapify(h, n, s);
    }
}

struct Node* extract(struct Node *h[], int *n) {
    struct Node *x = h[0];
    h[0] = h[--(*n)];
    heapify(h, *n, 0);
    return x;
}

void insert(struct Node *h[], int *n, struct Node *x) {
    int i = (*n)++;
    h[i] = x;
    while (i != 0 && h[(i - 1) / 2]->freq > h[i]->freq) {
        swap(&h[i], &h[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void code(struct Node* r, int a[], int top) {
    int i;
    if (r->l) {
        a[top] = 0;
        code(r->l, a, top + 1);
    }
    if (r->r) {
        a[top] = 1;
        code(r->r, a, top + 1);
    }
    if (!r->l && !r->r) {
        printf("%c: ", r->ch);
        for (i = 0; i < top; i++) {
            printf("%d", a[i]);
        }
        printf("\n");
    }
}

int main() {
    int n, i, f;
    int a[20];
    char c;
    struct Node *h[50], *x, *y, *z;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %c %d", &c, &f);
        h[i] = newNode(c, f);
    }

    for (i = n / 2 - 1; i >= 0; i--) {
        heapify(h, n, i);
    }

    while (n > 1) {
        x = extract(h, &n);
        y = extract(h, &n);
        z = newNode('$', x->freq + y->freq);
        z->l = x;
        z->r = y;
        insert(h, &n, z);
    }

    printf("Huffman Codes:\n");
    code(h[0], a, 0);

    return 0;
}
```

### INPUT
```text
Enter number of characters: 4
A 5
B 9
C 12
D 13
```

### OUTPUT
```text
Huffman Codes:
C: 00
D: 01
A: 100
B: 101
```

---
## EXPERIMENT - 10

**Date:** 30/09/2026  

### AIM
To implement Breadth First Search (BFS) and Depth First Search (DFS) for graph traversal.

### PSEUDOCODE - BFS
```text
START
READ GRAPH
READ START VERTEX
MARK START
ENQUEUE START
WHILE QUEUE ≠ EMPTY
    v ← DEQUEUE
    PRINT v
    FOR EACH ADJACENT u
        IF u NOT VISITED
            MARK u
            ENQUEUE u
        END IF
    END FOR
END WHILE
STOP
```

### PSEUDOCODE - DFS
```text
DFS(v)
    MARK v
    PRINT v
    FOR EACH ADJACENT u
        IF u NOT VISITED
            DFS(u)
        END IF
    END FOR
END
```

### C PROGRAM
```c
#include <stdio.h>

int g[20][20], vis[20], n;

void DFS(int v) {
    int i;
    vis[v] = 1;
    printf("%d ", v);

    for (i = 0; i < n; i++) {
        if (g[v][i] && !vis[i]) {
            DFS(i);
        }
    }
}

void BFS(int s) {
    int q[20], f = 0, r = 0, i, v;

    for (i = 0; i < n; i++) {
        vis[i] = 0;
    }

    q[r++] = s;
    vis[s] = 1;

    while (f < r) {
        v = q[f++];
        printf("%d ", v);

        for (i = 0; i < n; i++) {
            if (g[v][i] && !vis[i]) {
                vis[i] = 1;
                q[r++] = i;
            }
        }
    }
}

int main() {
    int i, j, s;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &g[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &s);

    for (i = 0; i < n; i++) {
        vis[i] = 0;
    }
    printf("DFS: ");
    DFS(s);

    printf("\nBFS: ");
    BFS(s);
    printf("\n");

    return 0;
}
```

### INPUT
```text
Enter number of vertices: 5
Enter adjacency matrix:
0 1 1 0 0
1 0 0 1 1
1 0 0 0 1
0 1 0 0 1
0 1 1 1 0
Enter starting vertex: 0
```

### OUTPUT
```text
DFS: 0 1 3 4 2
BFS: 0 1 2 3 4
```

---
## EXPERIMENT - 11

**Date:** 07/10/2026  

### AIM
To write and execute a C program to implement Minimum Spanning Tree (MST) using Kruskal's Algorithm and Prim's Algorithm.

### ALGORITHM

**Kruskal's Algorithm:**
1. Start.
2. Read the number of vertices and the cost adjacency matrix.
3. Initialize each vertex as a separate set.
4. Find the minimum-weight edge.
5. Check whether the edge forms a cycle.
6. If no cycle is formed, add the edge to MST.
7. Repeat until $V - 1$ edges are selected.
8. Display the MST edges and minimum cost.
9. Stop.

**Prim's Algorithm:**
1. Start.
2. Read the number of vertices and cost adjacency matrix.
3. Select vertex $0$ as the starting vertex.
4. Mark the selected vertex as visited.
5. Find the minimum-weight edge connecting a visited vertex to an unvisited vertex.
6. Add the edge to MST and mark the new vertex as visited.
7. Repeat until $V - 1$ edges are selected.
8. Display the MST edges and minimum cost.
9. Stop.

### PSEUDOCODE

**Kruskal's Algorithm:**
```text
KRUSKAL(G, n)
    for i ← 0 to n - 1
        parent[i] ← i
    end for
    edges ← 0
    total ← 0
    while edges < n - 1
        min ← INF
        a ← -1
        b ← -1
        for i ← 0 to n - 1
            for j ← 0 to n - 1
                if G[i][j] < min
                    min ← G[i][j]
                    a ← i
                    b ← j
                end if
            end for
        end for
        if a = -1
            break
        end if
        i ← FIND(a)
        j ← FIND(b)
        if i ≠ j
            Print a, b, min
            total ← total + min
            parent[i] ← j
            edges ← edges + 1
        end if
        G[a][b] ← INF
        G[b][a] ← INF
    end while
    if edges = n - 1
        Print total
    else
        Print "Spanning tree does not exist"
    end if
```

**Prim's Algorithm:**
```text
PRIM(G, n)
    for i ← 0 to n - 1
        visited[i] ← 0
    end for
    visited[0] ← 1
    total ← 0
    for i ← 0 to n - 2
        min ← INF
        a ← -1
        b ← -1
        for j ← 0 to n - 1
            if visited[j] = 1
                for k ← 0 to n - 1
                    if visited[k] = 0 AND G[j][k] < min
                        min ← G[j][k]
                        a ← j
                        b ← k
                    end if
                end for
            end if
        end for
        if a = -1
            Print "Spanning tree does not exist"
            return
        end if
        Print a, b, min
        total ← total + min
        visited[b] ← 1
    end for
    Print "Minimum Cost = ", total
END
```

### C PROGRAM
```c
#include <stdio.h>
#define INF 999

int parent[20];

int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

// Kruskal's Algorithm
void kruskal(int n, int c[20][20]) {
    int i, j, a, b, min, total = 0, edges = 0;

    for (i = 0; i < n; i++)
        parent[i] = i;

    printf("\nKruskal's MST:\n");
    while (edges < n - 1) {
        min = INF;
        a = b = -1;

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (c[i][j] < min) {
                    min = c[a = i][b = j];
                }
            }
        }

        if (a == -1)
            break;

        i = find(a);
        j = find(b);

        if (i != j) {
            printf("%d - %d : %d\n", a, b, min);
            total += min;
            parent[i] = j;
            edges++;
        }

        c[a][b] = c[b][a] = INF;
    }

    if (edges == n - 1)
        printf("Minimum Cost = %d\n", total);
    else
        printf("Spanning tree does not exist\n");
}

// Prim's Algorithm
void prim(int n, int c[20][20]) {
    int v[20] = {0}, i, j, k, a, b;
    int min, total = 0;

    v[0] = 1;
    printf("\nPrim's MST:\n");

    for (i = 0; i < n - 1; i++) {
        min = INF;
        a = b = -1;

        for (j = 0; j < n; j++) {
            if (v[j]) {
                for (k = 0; k < n; k++) {
                    if (!v[k] && c[j][k] < min) {
                        min = c[j][k];
                        a = j;
                        b = k;
                    }
                }
            }
        }

        if (a == -1) {
            printf("Spanning tree does not exist\n");
            return;
        }

        printf("%d - %d : %d\n", a, b, min);
        total += min;
        v[b] = 1;
    }

    printf("Minimum Cost = %d\n", total);
}

int main() {
    int n, c[20][20], g[20][20], i, j, ch;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &c[i][j]);
            if (i == j || c[i][j] == 0)
                c[i][j] = INF;
            g[i][j] = c[i][j];
        }
    }

    printf("\n1. Kruskal\n2. Prim\n3. Both\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    if (ch == 1 || ch == 3)
        kruskal(n, c);
    if (ch == 2 || ch == 3)
        prim(n, g);
    if (ch < 1 || ch > 3)
        printf("Invalid choice\n");

    return 0;
}
```

### INPUT
```text
Enter number of vertices: 4
Enter cost adjacency matrix:
0 10 6 5
10 0 0 15
6 0 0 4
5 15 4 0

1. Kruskal
2. Prim
3. Both
Enter your choice: 3
```

### OUTPUT
```text
Kruskal's MST:
2 - 3 : 4
0 - 3 : 5
0 - 1 : 10
Minimum Cost = 19

Prim's MST:
0 - 3 : 5
3 - 2 : 4
0 - 1 : 10
Minimum Cost = 19
```

---
## EXPERIMENT - 12

**Date:** 28/10/2026  

### AIM
To write and execute a C program to find the shortest path from a source vertex to all other vertices in a weighted graph using Dijkstra's Algorithm.

### ALGORITHM
1. Start.
2. Read the number of vertices and cost adjacency matrix.
3. Read the source vertex.
4. Initialize distances to infinity and source distance to $0$.
5. Select the unvisited vertex having minimum distance.
6. Update the distances of its adjacent vertices.
7. Mark the selected vertex as visited.
8. Repeat until all vertices are visited or no reachable vertex remains.
9. Display the shortest distances.
10. Stop.

### PSEUDOCODE
```text
DIJKSTRA(G, n, source)
    for i ← 0 to n - 1
        dist[i] ← INF
        visited[i] ← 0
    end for
    dist[source] ← 0
    for i ← 0 to n - 1
        min ← INF
        u ← -1
        for j ← 0 to n - 1
            if visited[j] = 0 AND dist[j] < min
                min ← dist[j]
                u ← j
            end if
        end for
        if u = -1
            break
        end if
        visited[u] ← 1
        for v ← 0 to n - 1
            if G[u][v] ≠ 0 AND visited[v] = 0
                if dist[u] + G[u][v] < dist[v]
                    dist[v] ← dist[u] + G[u][v]
                end if
            end if
        end for
    end for
    Print dist[]
END
```

### C PROGRAM
```c
#include <stdio.h>
#define INF 999

int main() {
    int n, g[20][20], d[20], v[20] = {0};
    int i, j, u, min, src;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &g[i][j]);

    printf("Enter source vertex: ");
    scanf("%d", &src);

    for (i = 0; i < n; i++)
        d[i] = INF;
    d[src] = 0;

    for (i = 0; i < n; i++) {
        min = INF;
        u = -1;

        for (j = 0; j < n; j++) {
            if (!v[j] && d[j] < min) {
                min = d[j];
                u = j;
            }
        }

        if (u == -1)
            break;

        v[u] = 1;

        for (j = 0; j < n; j++) {
            if (g[u][j] != 0 && !v[j] && d[u] + g[u][j] < d[j])
                d[j] = d[u] + g[u][j];
        }
    }

    printf("\nShortest distances:\n");
    for (i = 0; i < n; i++) {
        if (d[i] == INF)
            printf("%d -> Unreachable\n", i);
        else
            printf("%d -> %d\n", i, d[i]);
    }

    return 0;
}
```

### INPUT
```text
Enter number of vertices: 4
Enter cost adjacency matrix:
0 5 10 0
5 0 3 9
10 3 0 1
0 9 1 0
Enter source vertex: 0
```

### OUTPUT
```text
Shortest distances:
0 -> 0
1 -> 5
2 -> 8
3 -> 9
```

---
## EXPERIMENT - 13

**Date:** 28/10/2026  

### AIM
To write and execute a C program to find the shortest path from a source vertex to all other vertices in a weighted graph using the Bellman-Ford Algorithm.

### ALGORITHM
1. Start.
2. Read the number of vertices and edges.
3. Read the source and destination vertices with their weights.
4. Initialize all distances to infinity and source distance to $0$.
5. Relax all edges repeatedly for $V - 1$ iterations.
6. Update the distance if a shorter path is found.
7. Check for a negative weight cycle.
8. Display the shortest distances.
9. Stop.

### PSEUDOCODE
```text
BELLMAN_FORD(G, V, E, source)
    for i ← 0 to V - 1
        dist[i] ← INF
    end for
    dist[source] ← 0
    for i ← 1 to V - 1
        for each edge (u, v, w)
            if dist[u] ≠ INF AND dist[u] + w < dist[v]
                dist[v] ← dist[u] + w
            end if
        end for
    end for
    for each edge (u, v, w)
        if dist[u] ≠ INF AND dist[u] + w < dist[v]
            Print "Negative cycle exists"
            return
        end if
    end for
    Print dist[]
END
```

### C PROGRAM
```c
#include <stdio.h>
#define INF 999

struct Edge {
    int u, v, w;
};

int main() {
    int n, m, i, j, src, d[20];
    struct Edge e[50];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &m);

    printf("Enter edges (u v weight):\n");
    for (i = 0; i < m; i++)
        scanf("%d %d %d", &e[i].u, &e[i].v, &e[i].w);

    printf("Enter source vertex: ");
    scanf("%d", &src);

    for (i = 0; i < n; i++)
        d[i] = INF;
    d[src] = 0;

    // Relax all edges V - 1 times
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < m; j++) {
            int u = e[j].u, v = e[j].v, w = e[j].w;
            if (d[u] != INF && d[u] + w < d[v])
                d[v] = d[u] + w;
        }
    }

    // Check negative cycle
    for (i = 0; i < m; i++) {
        int u = e[i].u, v = e[i].v, w = e[i].w;
        if (d[u] != INF && d[u] + w < d[v]) {
            printf("Negative cycle exists\n");
            return 0;
        }
    }

    printf("\nShortest distances:\n");
    for (i = 0; i < n; i++) {
        if (d[i] == INF)
            printf("%d -> Unreachable\n", i);
        else
            printf("%d -> %d\n", i, d[i]);
    }

    return 0;
}
```

### INPUT
```text
Enter number of vertices: 4
Enter number of edges: 5
Enter edges (u v weight):
0 1 5
0 2 10
1 2 3
1 3 9
2 3 1
Enter source vertex: 0
```

### OUTPUT
```text
Shortest distances:
0 -> 0
1 -> 5
2 -> 8
3 -> 9
```