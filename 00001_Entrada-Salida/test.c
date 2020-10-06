/*...extra...*/

describe ("Test de estado (x,y,z)") {
  
  int outi = my_exp1(X_VAR,Y_VAR);
  it ("exp1: (x + y + 1)") {
    should_int(exp1()) be equal to(outi);
  } end
  
  outi = my_exp2(X_VAR,Y_VAR,Z_VAR);
  it ("exp2: (z * z + y * 45 - 15 * x)") {
    should_int(exp2()) be equal to(outi);
  } end
  
  bool outb = my_exp3(X_VAR,Y_VAR);
  printf("Resultado final %d", outb);
  it ("exp3: (y - 2 = (x * 3 + 1) % 5)") {
    should_bool(exp3()) be equal to(out);
  } end
  
  outi = my_exp4(X_VAR,Y_VAR);
  it ("exp4: (y / 2 * x)") {
    should_int(exp4()) be equal to(outi);
  } end
  
  outb = my_exp5(X_VAR,Y_VAR,Z_VAR);
  it ("exp5: (y < x * z)") {
    should_bool(exp5()) be equal to(outb);
  } end
} end