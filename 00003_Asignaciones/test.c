/*...extra...*/


describe (genState("Función 'exp1a'", X_VAR, Y_VAR, CONSULTA)) {

  int x_student = 1;
  int x_test = 1; 
  
  exp1a(&x_student);
  my_exp1a(&x_test);
    
    it (genMsg("x", x_test, x_student, CONSULTA)) {
      if (!CONSULTA) {
        should_int(x_student) be equal to(x_test);
      } else {
        should_bool(false) be equal to(true);
      }
    } end

} end


describe (genState("Función 'exp1b'", X_VAR, Y_VAR, CONSULTA)) {

  int x_student = X_VAR;
  int y_student = Y_VAR;
  
  int x_test = X_VAR; 
  int y_test = Y_VAR;
  
  exp1b(&x_student, &y_student);
  my_exp1b(&x_test, &y_test);
  
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


describe (genState("Función 'exp1c'", X_VAR, Y_VAR, CONSULTA)) {

  int x_student = X_VAR;
  int y_student = Y_VAR;
  
  int x_test = X_VAR; 
  int y_test = Y_VAR;
  
  exp1c(&x_student, &y_student);
  my_exp1c(&x_test, &y_test);
  
  
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