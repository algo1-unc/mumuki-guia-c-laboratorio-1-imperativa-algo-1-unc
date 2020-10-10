/*...extra...*/


describe ("Test") {

  int x_student = X_INIT;
  int y_student = Y_INIT;
  
  int x_expected = X_INIT; 
  int y_expected = Y_INIT;
  
  exp1b(&x_student, &y_student);
  my_exp1b(&x_expected, &y_expected);
  
  
  it (genIntMsg("exp1b (x->)", x_expected,x_student, DEBUG)) {
    should_int(x_student) be equal to(x_expected);
  } end
  
  
  it (genIntMsg("exp1b (y->)", y_expected,y_student, DEBUG)) {
    should_int(y_student) be equal to(y_expected);
  } end
  

  
} end
  