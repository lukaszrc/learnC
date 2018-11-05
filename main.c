// learning about pointers and arrays


#include<stdio.h> 

int arr[] = {0,999,2,3,4,5};

int arr2d[][4] = {  {0, 1, 2, 3},
                     {33, 22, 1, 0},
                     {3, 5, 6, 111},
                     {3, 8, 3, 4},
					 {2,2,1,1}
					  };
                     
int *ptr_arr = arr;
int (**ptr_arr2d)[5][4]= arr2d;
int a = 221;
int *ptr = &a;
int **pptr = &ptr;

typedef enum{
	POINTERS,
	ONE_DIM,
	TWO_DIM,
	THREE_DIM
}choice_t;
  
int main() 
{ 
        char *s= "hello";
        char *p = s;

choice_t choice = TWO_DIM;
	switch(choice){
		case POINTERS:
			printf("pptr address: %p\n", &pptr);
			printf("ptr address: %p\t, %p\n", pptr, &ptr);
			printf("variable a address: %p\t, %p\t, %p\n", *pptr, ptr, &a);
			printf("variable a value: %d\t, %d\t, %d\n", **pptr, *ptr, a);
			
			
			break;
			
		case ONE_DIM:
			printf("arr address: %p\t, %p\t, %p\t, %p\n", arr, &arr, ptr_arr, &ptr_arr[0]);
			printf("arr[1]: %d\t, %d\t, %d\n", arr[1], *(arr+1), arr[1] );
			printf("arr[1] by pointer: %d\t, %d\n", ptr_arr[1], *(ptr_arr+1) );
			
			
			break;
		
		case TWO_DIM:
			printf("arr address: %p\t, %p\t, %p\t, %p\n", &arr2d, arr2d, ptr_arr2d, &ptr_arr2d[0]);
			printf("arr[1][0]: %d\t, %d\t, %d\n", arr2d[1][0], **(arr2d+1), *arr2d[1] ); //wartosc 11
			printf("arr[1][0] by ptr: %d\n", ptr_arr2d[1] );
			
			
		
			
			//
			printf("address arr[2][3]: %p\t, %p\t, %p\n", &arr2d[2][3], *(arr2d+2)+3, arr2d[2]+3);
			//printf("address arr[2][3] by pointer: %p\t, %p\t, %p\n", &(ptr_arr2d[2][3]), *(arr2d+2)+3, arr2d[2]+3);
			printf("value of arr[2][3]: %d\t, %d\t, %d\n",  arr2d[2][3], *((*(arr2d+2))+3) ,*(arr2d[2]+3));
			
			break;
			
		case THREE_DIM:
			


        printf("%c\t%c", 1[p], s[1]);
			
	}
    return 0; 
} 
