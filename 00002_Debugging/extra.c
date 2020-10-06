bool my_exp1(int x) {
  return x % 4 == 0;
}

bool my_exp2(int x, int y, int z) {
  return x + y == 0 && y - x == (-1) * z;
}

bool my_exp3(bool b, bool w) {
  return !b && w;