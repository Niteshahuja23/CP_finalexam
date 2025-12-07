//Write a program to demonstrate pointers, pointer to pointer and pointer to array
#include <stdio.h>
void main()
{
    int a,*ptr,**pptr;
    int arr[100];
    int *p,i,n;
    p = arr;//address of first element of array(i.e. arr[0])
    a = 125;
    ptr = &a;
    printf("Demonstration of pointers\n");
    printf("Value of a: %d\n",a);
    printf("Address of a: %x\n",ptr);
    printf("Value at address stored in ptr: %d\n",*ptr);
    pptr = &ptr;
    printf("Demonstration of pointer to pointer\n");
    printf("Value of a: %d\n",a);
    printf("Address of a: %x\n",ptr);
    printf("Value at address stored in ptr: %d\n",*ptr);
    printf("Address of ptr: %x\n",pptr);
    printf("Value at address stored in pptr (i.e., value of ptr): %x\n",*pptr);
    printf("Value at address stored at the address stored in pptr (i.e., value of a): %d\n",**pptr);
    printf("Demonstration of pointer to array\n");
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements one by one:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);//&arr[i];
    }
    printf("The elements in the array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));//arr[i];
    }
}