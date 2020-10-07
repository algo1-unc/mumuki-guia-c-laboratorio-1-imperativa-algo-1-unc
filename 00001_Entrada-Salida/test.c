/*...extra...*/

if (!DEBUG) {
  
  describe (genState("Test", X_VAR, Y_VAR, Z_VAR)) {
    int expected1 = my_exp1(X_VAR,Y_VAR);
    it (genIntMsg("exp1", expected1, exp1())) {
      should_int(exp1()) be equal to(expected1);
    } end
    
    int expected2 = my_exp2(X_VAR,Y_VAR,Z_VAR);
    it (genIntMsg("exp2", expected2, exp2())) {
      should_int(exp2()) be equal to(expected2);
    } end
    
    bool expected3 = my_exp3(X_VAR,Y_VAR);
    it (genBoolMsg("exp3", expected3, exp3())) {
      should_bool(exp3()) be equal to(expected3);
    } end
    
    int expected4 = my_exp4(X_VAR,Y_VAR);
    it (genIntMsg("exp4", expected4, exp4())) {
      should_int(exp4()) be equal to(expected4);
    } end
    
    bool expected5 = my_exp5(X_VAR,Y_VAR,Z_VAR);
    it (genBoolMsg("exp5", expected5, exp5())) {
      should_bool(exp5()) be equal to(expected5);
    } end
  } end
  
} else {
  
  describe (genState("Modo DEBUG", X_VAR, Y_VAR, Z_VAR)) {
    it (genIntDebugMsg("exp1", exp1())) {
      should_bool(false) be equal to(true);
    } end
    
    it (genIntDebugMsg("exp2",exp2())) {
      should_bool(false) be equal to(true);
    } end
    
    it (genBoolDebugMsg("exp3", exp3())) {
      should_bool(false) be equal to(true);
    } end
    
    it (genIntDebugMsg("exp4", exp4())) {
      should_bool(false) be equal to(true);
    } end
    
    it (genBoolDebugMsg("exp5", exp5())) {
      should_bool(false) be equal to(true);
    } end
  } end
  
}