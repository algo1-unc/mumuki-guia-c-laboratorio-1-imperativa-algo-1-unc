/*...extra...*/


describe (genState("Test", X_INIT, Y_INIT)) {
  
  describe ("Función exp1b()") {
    
    int x_student = X_INIT;
    int y_student = Y_INIT;
    
    int x_expected = X_INIT; 
    int y_expected = Y_INIT;
    
    exp1b(&x_student, &y_student);
    my_exp1b(&x_expected, &y_expected);
    
    it ("Estado de salida: (x->)") {
      should_bool(x_student) be equal to(x_expected);
    } end
    
    
    it ("Estado de salida: (y->)") {
      should_bool(y_student) be equal to(y_expected);
    } end
    
  }
  
} end
  