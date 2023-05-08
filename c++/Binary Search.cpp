#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
  int low = 0, high = n - 1;

  while (low <= high)
    {
    int mid = (low + high) / 2;
    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int n, target;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array (in sorted order): ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Enter the element to search for: ";
  cin >> target;

  int index = binarySearch(arr, n, target);

  if (index == -1) {
    cout << "Element not found in the array!" << endl;
  } else {
    cout << "Element found at index " << index << endl;
  }
  return 0;
}
