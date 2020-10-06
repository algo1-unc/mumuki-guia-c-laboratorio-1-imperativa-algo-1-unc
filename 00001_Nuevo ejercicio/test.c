/*...extra...*/
describe ("Test para estado (x->7, y->3, z->5)") {
  int x = 7;
  int y = 3;
  int z = 5;
  it ("exp_1: (x + y + 1)") {
    should_int(exp1(x,y,z)) be equal to(my_exp1(x,y,z));
  } end
} end

describe ("Test para estado (x->1, y->10, z->8)") {
  int x = 1;
  int y = 10;
  int z = 8;
  it ("exp_1: (x + y + 1)") {
    should_int(exp1(x,y,z)) be equal to(my_exp1(x,y,z));
  } end
} end