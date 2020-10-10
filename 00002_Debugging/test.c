/*...extra...*/

describe (genState("", X_VAR, Y_VAR, Z_VAR, B_VAR, W_VAR, CONSULTA)) {
	
	bool expected1 = true;
	it (genBoolMsg("exp1", expected1, exp1(), CONSULTA)) {
		if (!CONSULTA) {
			should_bool(exp1()) be equal to(expected1);
		} else {
			should_bool(false) be equal to(true);
		}
	} end
	
	bool expected2 = true;
	it (genBoolMsg("exp2", expected2, exp2(), CONSULTA)) {
		if (!CONSULTA) {
	 		should_bool(exp2()) be equal to(expected2);
		} else {
			should_bool(false) be equal to(true);
		}
	} end
	
	bool expected3 = false;
	it (genBoolMsg("exp3", expected3, exp3(), CONSULTA)) {
		if (!CONSULTA) {
			should_bool(exp3()) be equal to(expected3);
	  } else {
			should_bool(false) be equal to(true);
	  }
	} end
	
} end