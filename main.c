#include <stdio.h>

void printArray(int*, int);
void isort(int *A, int len);


int main(void) {

  int arr[] = {23, 12, 03, 45 ,22};

  printArray(arr, 5);
  isort(arr, 5);
  printArray(arr, 5);
  
  return 0;
}



//Functions

void printArray(int *A, int len)
{
  for(int i = 0; i < len; i++)
    printf("%d\t",A[i]);
  printf("\n");
}

void isort(int *A, int len)
{
  for(int i = 1; i <= len-1; i++)
    {
      int j = i -1;
      int key = A[i];
      while(j >= 0 && A[j] > key)
      {
        A[j+1] = A[j];
        j--;
      }    
      A[j+1] = key;
    }

}