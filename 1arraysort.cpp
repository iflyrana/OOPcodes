#include <iostream>
using namespace std;

void read_array(int arr[], int size);
void display_array(int arr[], int size);
void sort_array(int arr[], int size);
void swap_elements(int& a, int& b);

int main() {
  const int SIZE = 5;
  int arr[SIZE];

  read_array(arr, SIZE);
  cout << "Original array:" << endl;
  display_array(arr, SIZE);

  sort_array(arr, SIZE);
  cout << "Sorted array:" << endl;
  display_array(arr, SIZE);

  return 0;
}

void read_array(int arr[], int size) {
  cout << "Enter " << size << " numbers:" << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}

void display_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void sort_array(int arr[], int size) {
  for (int i = 0; i < size-1; i++) {
    for (int j = 0; j < size-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        swap_elements(arr[j], arr[j+1]);
      }
    }
  }
}

void swap_elements(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}
