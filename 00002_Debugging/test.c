describe ("Test para estado (X,Y,X,B,W)") {
  
  it ("exp1: (x % 4 == 0)") {
    should_bool(exp1()) be equal to(true);
  } end
  
  it ("exp2: (x + y == 0 && y - x == (-1) * z)") {
    should_bool(exp2()) be equal to(true);
  } end
  
  it ("exp3: (not b && w)") {
    should_bool(exp3()) be equal to(false);
  } end
  
} end