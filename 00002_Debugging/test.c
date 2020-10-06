describe ("Test para estado (X,Y,X,B,W)") {
  
  it ("exp1 debe ser True") {
    should_bool(exp1()) be equal to(true);
  } end
  
  it ("exp2 debe ser True") {
    should_bool(exp2()) be equal to(true);
  } end
  
  it ("exp3 debe ser False") {
    should_bool(exp3()) be equal to(false);
  } end
  
} end