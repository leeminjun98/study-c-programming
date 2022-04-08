#define COMPARE(x,y) (((x) < (y)) ? -1: ((x) == (y)) ? 0 : 1)

int binarySearch(int arr[], int target, int left, int right) {
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        switch (COMPARE(arr[mid], target)) {
            //arr[mid] < target이면 target은 mid+1~right 사이에 존재한다. 
        case -1: left = mid + 1; break;
            //return 되므로 굳이 break; 를 쓸 필요가 없다. 
        case 0: return mid;
            //arr[mid] > target이면 target은 left~mid-1 사이에 존재한다
        case 1: right = mid - 1;
        }
    }
    return -1; //arr에 target이 존재하지 않으면 -1 반환. 
}