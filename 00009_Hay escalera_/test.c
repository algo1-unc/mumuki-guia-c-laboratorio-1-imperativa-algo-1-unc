describe ("Test negativos") {
  
  it ("Dado hayEscalera(1,1,10), debe devolver 'false'") {
    should_bool(hayEscalera(1,1,10)) be equal to(false);
  } end

  it ("Dado hayEscalera(5,3,3), debe devolver 'false'") {
    should_bool(hayEscalera(5,3,3)) be equal to(false);
  } end

  it ("Dado hayEscalera(5,4,1), debe devolver 'false'") {
    should_bool(hayEscalera(5,4,1)) be equal to(false);
  } end

  it ("Dado hayEscalera(5,1,4), debe devolver 'false'") {
    should_bool(hayEscalera(5,1,4)) be equal to(false);
  } end

  it ("Dado hayEscalera(1,4,2), debe devolver 'false'") {
    should_bool(hayEscalera(1,4,2)) be equal to(false);
  } end

  it ("Dado hayEscalera(7,7,7), debe devolver 'false'") {
    should_bool(hayEscalera(7,7,7)) be equal to(false);
  } end

  it ("Dado hayEscalera(7,3,7), debe devolver 'false'") {
    should_bool(hayEscalera(7,3,7)) be equal to(false);
  } end

  it ("Dado hayEscalera(12,3,7), debe devolver 'false'") {
    should_bool(hayEscalera(12,3,7)) be equal to(false);
  } end

} end


describe ("Test positivos") {
  
  it ("Dado hayEscalera(3,4,5), debe devolver 'true'") {
    should_bool(hayEscalera(3,4,5)) be equal to(true);
  } end

  it ("Dado hayEscalera(10,9,8), debe devolver 'true'") {
    should_bool(hayEscalera(10,9,8)) be equal to(true);
  } end

  it ("Dado hayEscalera(11,12,10), debe devolver 'true'") {
    should_bool(hayEscalera(11,12,10)) be equal to(true);
  } end

  it ("Dado hayEscalera(8,6,7), debe devolver 'true'") {
    should_bool(hayEscalera(8,6,7)) be equal to(true);
  } end

  it ("Dado hayEscalera(8,9,7), debe devolver 'true'") {
    should_bool(hayEscalera(8,9,7)) be equal to(true);
  } end
  
  it ("Dado hayEscalera(7,9,8), debe devolver 'true'") {
    should_bool(hayEscalera(7,9,8)) be equal to(true);
  } end

} end