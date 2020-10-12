describe ("Test negativos") {
  
  it ("Dado hayEscalera(1,1), debe devolver 'false'") {
    should_bool(hayEscalera(1,1)) be equal to(false);
  } end

  it ("Dado hayEscalera(10,5), debe devolver 'false'") {
    should_bool(hayEscalera(10,5)) be equal to(false);
  } end

  it ("Dado hayEscalera(1,12), debe devolver 'false'") {
    should_bool(hayEscalera(1,12)) be equal to(false);
  } end

  it ("Dado hayEscalera(7,9), debe devolver 'false'") {
    should_bool(hayEscalera(1,12)) be equal to(false);
  } end

} end


describe ("Test positivos") {
  
  it ("Dado hayEscalera(3,4), debe devolver 'true'") {
    should_bool(hayEscalera(3,4)) be equal to(true);
  } end

  it ("Dado hayEscalera(10,9), debe devolver 'true'") {
    should_bool(hayEscalera(10,9)) be equal to(true);
  } end

  it ("Dado hayEscalera(11,12), debe devolver 'true'") {
    should_bool(hayEscalera(11,12)) be equal to(true);
  } end

  it ("Dado hayEscalera(6,7), debe devolver 'true'") {
    should_bool(hayEscalera(6,7)) be equal to(true);
  } end

} end