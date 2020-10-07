/*...extra...*/

if {DEBUG} {
  describe (genState("Test", X_VAR, Y_VAR, Z_VAR, B_VAR, W_VAR)) {
    
    bool expected1 = true;
    it (genBoolMsg("exp1", expected1, exp1(), DEBUG)) {
      should_bool(exp1()) be equal to(expected1);
    } end
    
    bool expected2 = true;
    it (genBoolMsg("exp2", expected2, exp2(), DEBUG)) {
      should_bool(exp2()) be equal to(expected2);
    } end
    
    bool expected3 = false;
    it (genBoolMsg("exp3", expected3, exp3(), DEBUG)) {
      should_bool(exp3()) be equal to(expected3);
    } end
    
  } end
  
} else {
  
  describe (genState("Modo Consulta", X_VAR, Y_VAR, Z_VAR, B_VAR, W_VAR)) {
    
    bool dbgbool = false;
    
    it (genBoolMsg("exp1", dbgbool, exp1(), DEBUG)) {
      should_bool(false) be equal to(true);
    } end
    
    bool expected2 = true;
    it (genBoolMsg("exp2", dbgbool, exp2(), DEBUG)) {
      should_bool(false) be equal to(true);
    } end
    
    bool expected3 = false;
    it (genBoolMsg("exp3", dbgbool, exp3(), DEBUG)) {
      should_bool(false) be equal to(true);
    } end
    
  } end
  
}
