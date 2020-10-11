/*...extra...*/

describe (genState("exp1", X_VAR,Y_VAR, Z_VAR, CONSULTA)) {
  
    int expected1 = my_exp1(X_VAR,Y_VAR);
    it (genIntMsg(expected1, exp1(), CONSULTA)) {
        if (!CONSULTA) {
            should_int(exp1()) be equal to(expected1);
        } else {
            should_bool(false) be equal to(true);
        }
    } end

} end

describe (genState("exp2", X_VAR,Y_VAR, Z_VAR, CONSULTA)) {

    int expected2 = my_exp2(X_VAR,Y_VAR,Z_VAR);
    it (genIntMsg(expected2, exp2(), CONSULTA)) {
        if (!CONSULTA) {
            should_int(exp2()) be equal to(expected2);
        } else {
            should_bool(false) be equal to(true);
        }
    } end
} end


describe (genState("exp3", X_VAR,Y_VAR, Z_VAR, CONSULTA)) {

    bool expected3 = my_exp3(X_VAR,Y_VAR);
    it (genBoolMsg(expected3, exp3(), CONSULTA)) {
        if (!CONSULTA) {
            should_bool(exp3()) be equal to(expected3);
        } else {
            should_bool(false) be equal to(true);
        }
    } end

} end

describe (genState("exp4", X_VAR,Y_VAR, Z_VAR, CONSULTA)) {

    int expected4 = my_exp4(X_VAR,Y_VAR);
    it (genIntMsg(expected4, exp4(), CONSULTA)) {
        if (!CONSULTA) {
            should_int(exp4()) be equal to(expected4);
        } else {
            should_bool(false) be equal to(true);
        }
    } end
} end

describe (genState("exp5", X_VAR,Y_VAR, Z_VAR, CONSULTA)) {
    
    bool expected5 = my_exp5(X_VAR,Y_VAR,Z_VAR);
    it (genBoolMsg(expected5, exp5(), CONSULTA)) {
        if (!CONSULTA) {
            should_bool(exp5()) be equal to(expected5);
        } else {
            should_bool(false) be equal to(true);
        }
    } end
} end 
