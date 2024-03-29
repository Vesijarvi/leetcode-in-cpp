class Solution {
public:
  int hammingDistance(int x, int y) {
    int tmp = x ^ y;
    int count = 0;
    while (tmp) {
      tmp &= (tmp - 1);
      count++;
    }
    return count;
  }
};
