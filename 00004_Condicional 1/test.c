/*...extra...*/

describe (genState("", X_VAR, Y_VAR, CONSULTA)) {

  int x_student = X_VAR;
  int y_student = Y_VAR;
  
  int x_test = X_VAR; 
  int y_test = Y_VAR;
  
  fun(&x_student, &y_student);
  my_fun(&x_test, &y_test);
  
  it (genMsg("x", x_test, x_student, CONSULTA)) {
    if (!CONSULTA) {
      should_int(x_student) be equal to(x_test);
    } else {
      should_bool(false) be equal to(true);
    }
  } end
  
  it (genMsg("y", y_test, y_student, CONSULTA)) {
    if (!CONSULTA) {
      should_int(y_student) be equal to(y_test);
    } else {
      should_bool(false) be equal to(true);
    }
  } end
  
} end