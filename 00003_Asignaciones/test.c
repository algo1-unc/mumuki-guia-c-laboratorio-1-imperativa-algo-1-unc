/*...extra...*/


describe (genState("Test ejer1a()", X_INIT, Y_INIT)) {

  int x_student = X_INIT;
  int x_expected = X_INIT; 
  
  exp1a(&x_student);
  my_exp1a(&x_expected);
    
    it (genIntMsg("x", x_expected, x_student, DEBUG)) {
      if (!DEBUG) {
        should_int(x_student) be equal to(x_expected);
      } else {
        false;
      }
    } end

} end


describe (genState("Test ejer1b()", X_INIT, Y_INIT)) {

  int x_student = X_INIT;
  int y_student = Y_INIT;
  
  int x_expected = X_INIT; 
  int y_expected = Y_INIT;
  
  exp1b(&x_student, &y_student);
  my_exp1b(&x_expected, &y_expected);
  
  
  it (genIntMsg("x", x_expected, x_student, DEBUG)) {
    if (!DEBUG) {
      should_int(x_student) be equal to(x_expected);
    } else {
      false;
    }
  } end
  
  
  it (genIntMsg("y", y_expected, y_student, DEBUG)) {
    if (!DEBUG) {
      should_int(y_student) be equal to(y_expected);
    } else {
      false;
    }
  } end
  
} end


describe (genState("Test ejer1c()", X_INIT, Y_INIT)) {

  int x_student = X_INIT;
  int y_student = Y_INIT;
  
  int x_expected = X_INIT; 
  int y_expected = Y_INIT;
  
  exp1c(&x_student, &y_student);
  my_exp1c(&x_expected, &y_expected);
  
  
  it (genIntMsg("x", x_expected, x_student, DEBUG)) {
    if (!DEBUG) {
      should_int(x_student) be equal to(x_expected);
    } else {
      false;
    }
  } end
  
  
  it (genIntMsg("y", y_expected, y_student, DEBUG)) {
    if (!DEBUG) {
      should_int(y_student) be equal to(y_expected);
    } else {
      false;
    }
  } end
  
} end

  