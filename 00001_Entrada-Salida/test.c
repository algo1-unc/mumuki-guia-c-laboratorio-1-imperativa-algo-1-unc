/*...extra...*/

describe ("Test de estado (x,y,z)") {
  before {
    puts("Init X");
    puts(X_VAR);
  } end

  it ("exp1: (x + y + 1)") {
    should_int(exp1()) be equal to(my_exp1(X_VAR,Y_VAR));
  } end
  
  it ("exp2: (z * z + y * 45 - 15 * x)") {
    should_int(exp2()) be equal to(my_exp2(X_VAR,Y_VAR,Z_VAR));
  } end
  
  it ("exp3: (y - 2 = (x * 3 + 1) % 5)") {
    should_bool(exp3()) be equal to(my_exp3(X_VAR,Y_VAR));
  } end
  
  it ("exp4: (y / 2 * x)") {
    should_int(exp4()) be equal to(my_exp4(X_VAR,Y_VAR));
  } end
  
  it ("exp5: (y < x * z)") {
    should_bool(exp5()) be equal to(my_exp5(X_VAR,Y_VAR,Z_VAR));
  } end
} end