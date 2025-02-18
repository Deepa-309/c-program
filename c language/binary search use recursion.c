int main(){
int n,i,low,high,mid, target;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int a[n];
printf("Enter %d elements in sorted order:\n", n);
for (int i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter the element to search: ");
scanf("%d", &target);
low=0;
high=n-1;
while(low<=high){
    mid=(low+high)/2;
    if(a[mid]<target)
        low+mid+1;
    else if(a[mid]==target){
        printf("element is found");
    }
        else
            high=mid-1;

    }
    if(low>high){
        printf("element not found" );
    }
    return 0;
}

