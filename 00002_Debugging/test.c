/*...extra...*/

describe (genState("exp1", X_VAR, Y_VAR, Z_VAR, B_VAR, W_VAR, CONSULTA)) {
	
	bool expected1 = true;
	it (genBoolMsg(expected1, exp1(), CONSULTA)) {
		if (!CONSULTA) {
			should_bool(exp1()) be equal to(expected1);
		} else {
			should_bool(false) be equal to(true);
		}
	} end
} end

describe (genState("exp2", X_VAR, Y_VAR, Z_VAR, B_VAR, W_VAR, CONSULTA)) {

	bool expected2 = true;
	it (genBoolMsg(expected2, exp2(), CONSULTA)) {
		if (!CONSULTA) {
	 		should_bool(exp2()) be equal to(expected2);
		} else {
			should_bool(false) be equal to(true);
		}
	} end
    
} end

describe (genState("exp3", X_VAR, Y_VAR, Z_VAR, B_VAR, W_VAR, CONSULTA)) {

	bool expected3 = false;
	it (genBoolMsg(expected3, exp3(), CONSULTA)) {
		if (!CONSULTA) {
			should_bool(exp3()) be equal to(expected3);
	  } else {
			should_bool(false) be equal to(true);
	  }
	} end
	
} end