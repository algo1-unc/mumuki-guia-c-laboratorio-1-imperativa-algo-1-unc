/*...extra...*/

describe ("Test para estado (x,y,z,b,w)") {
  int x = getX();
  int y = getY();
  int z = getZ();
  bool b = getB();
  bool w = getW();
  
  it ("exp1: (x % 4 == 0)") {
    should_bool(exp1()) be equal to(my_exp1(x));
  } end
  
  it ("exp2: (x + y == 0 && y - x == (-1) * z)") {
    should_bool(exp2()) be equal to(my_exp2(x,y,z));
  } end
  
  it ("exp3: (not b && w)") {
    should_bool(exp3()) be equal to(my_exp3(b,w));
  } end
  
} end