#include <stdio.h>
#include <stdlib.h>

int main() {

    int array1[2] = {1, 2, 3}; 
    int array2[2] = {0, 0, 0};
    int array3[2] = {0, 0, 0};

    int array1[2] = {1, 2, 0}; // 3 para array3
    int array2[2] = {0, 0, 0};
    int array3[2] = {3, 0, 0};
    
    int array1[2] = {1, 0, 0}; // 2 para array2
    int array2[2] = {2, 0, 0};
    int array3[2] = {3, 0, 0};
    
    int array1[2] = {1, 0, 0}; // 3 para array2
    int array2[2] = {2, 3, 0};
    int array3[2] = {0, 0, 0};
    
    int array1[2] = {0, 0, 0}; // 1 para array3
    int array2[2] = {2, 3, 0};
    int array3[2] = {1, 0, 0};
    
    int array1[2] = {3, 0, 0}; // 2 para array1
    int array2[2] = {2, 0, 0};
    int array3[2] = {1, 0, 0};
    
    int array1[2] = {3, 0, 0}; // 2 para array3
    int array2[2] = {0, 0, 0};
    int array3[2] = {1, 2, 0};
    
    int array1[2] = {0, 0, 0}; // 3 para array3
    int array2[2] = {0, 0, 0};
    int array3[2] = {1, 2, 3};
    
    return 0;

}