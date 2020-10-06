/*...extra...*/
describe ("Test para estado (x->7, y->3, z->5)") {
  int x = 7;
  int y = 3;
  int z = 5;
  it ("exp1: (x + y + 1)") {
    should_int(exp1(x,y,z)) be equal to(my_exp1(x,y,z));
  } end
  
  it ("exp2: (z * z + y * 45 - 15 * x)") {
    should_int(exp2(x,y,z)) be equal to(my_exp2(x,y,z));
  } end
  
  it ("exp3: (y - 2 = (x * 3 + 1) % 5)") {
    should_int(exp3(x,y,z)) be equal to(my_exp3(x,y,z));
  } end
  
  it ("exp4: (y / 2 * x)") {
    should_int(exp4(x,y,z)) be equal to(my_exp4(x,y,z));
  } end
  
  it ("exp5: (y < x * z)") {
    should_int(exp5(x,y,z)) be equal to(my_exp5(x,y,z));
  } end
} end

describe ("Test para estado (x->1, y->10, z->8)") {
  int x = 1;
  int y = 10;
  int z = 8;
  it ("exp1: (x + y + 1)") {
    should_int(exp1(x,y,z)) be equal to(my_exp1(x,y,z));
  } end
  
  it ("exp2: (z * z + y * 45 - 15 * x)") {
    should_int(exp2(x,y,z)) be equal to(my_exp2(x,y,z));
  } end
  
  it ("exp3: (y - 2 = (x * 3 + 1) % 5)") {
    should_int(exp3(x,y,z)) be equal to(my_exp3(x,y,z));
  } end
  
  it ("exp4: (y / 2 * x)") {
    should_int(exp4(x,y,z)) be equal to(my_exp4(x,y,z));
  } end
  
  it ("exp5: (y < x * z)") {
    should_int(exp5(x,y,z)) be equal to(my_exp5(x,y,z));
  } end
  
} end