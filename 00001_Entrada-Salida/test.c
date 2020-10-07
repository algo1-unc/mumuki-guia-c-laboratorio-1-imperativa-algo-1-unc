/*...extra...*/

describe ("Test de estado (x,y,z)") {
  
  
  int out1 = my_exp1(X_VAR,Y_VAR);
  it (genIntMsn("exp1", out1)) {
    should_int(exp1()) be equal to(out1);
  } end
  
  int out2 = my_exp2(X_VAR,Y_VAR,Z_VAR);
  it (genIntMsg("exp2", out2)) {
    should_int(exp2()) be equal to(out2);
  } end
  
  bool out3 = my_exp3(X_VAR,Y_VAR);
  it (genBoolMsg("exp3", out3)) {
    should_bool(exp3()) be equal to(out3);
  } end
  
  int out4 = my_exp4(X_VAR,Y_VAR);
  it (genIntMsg("exp4", out4)) {
    should_int(exp4()) be equal to(out4);
  } end
  
  bool out5 = my_exp5(X_VAR,Y_VAR,Z_VAR);
  it (genBoolMsg("exp5", out5)) {
    should_bool(exp5()) be equal to(out5);
  } end
} end