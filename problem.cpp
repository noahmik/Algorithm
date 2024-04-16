#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for(int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  sort(nums.begin(), nums.end()); // 배열 정렬

  int count = 0;
  for(int i = 0; i < n; i++) {
    int target = nums[i]; // 첫 번째 포인터
    int left = 0, right = n - 1; // 두 번째 포인터
    while(left < right) {
      if(left == i) {
        left++;
        continue;
      }
      if(right == i) {
        right--;
        continue;
      }
      int sum = nums[left] + nums[right];
      if(sum == target) {
        count++;
        break;
      } else if(sum < target) {
        left++;
      } else {
        right--;
      }
    }
  }

  cout << count << endl;

  return 0;
}
