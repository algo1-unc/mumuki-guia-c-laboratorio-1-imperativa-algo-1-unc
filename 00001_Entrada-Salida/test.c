
if (CONSULTA) {

    describe (genState("", X_VAR, Y_VAR, Z_VAR, CONSULTA)) {

        int expected1 = my_exp1(X_VAR,Y_VAR);
        it (genIntMsg("exp1", expected1, exp1(), CONSULTA)) {
            should_bool(false) be equal to(true);
        } end

        int expected2 = my_exp2(X_VAR,Y_VAR,Z_VAR);
        it (genIntMsg("exp2", expected2, exp2(), CONSULTA)) {
            should_bool(false) be equal to(true);
        } end

        bool expected3 = my_exp3(X_VAR,Y_VAR);
        it (genBoolMsg("exp3", expected3, exp3(), CONSULTA)) {
            should_bool(false) be equal to(true);
        } end

        int expected4 = my_exp4(X_VAR,Y_VAR);
        it (genIntMsg("exp4", expected4, exp4(), CONSULTA)) {
            should_bool(false) be equal to(true);
        } end

        bool expected5 = my_exp5(X_VAR,Y_VAR,Z_VAR);
        it (genBoolMsg("exp5", expected5, exp5(), CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end
    
} else {
    // PRUEBO todas las expresiones con dos estados en particular

    int x = 7;
    int y = 3;
    int z = 5;

    describe (genState("Test1", x, y, z, CONSULTA)) {

        int expected1 = my_exp1(x,y);
        it (genIntMsg("exp1", expected1, exp1(), CONSULTA)) {
            should_int(exp1()) be equal to(expected1);
        } end

        int expected2 = my_exp2(x,y,z);
        it (genIntMsg("exp2", expected2, exp2(), CONSULTA)) {
            should_int(exp2()) be equal to(expected2);
        } end

        bool expected3 = my_exp3(x,y);
        it (genBoolMsg("exp3", expected3, exp3(), CONSULTA)) {
            should_bool(exp3()) be equal to(expected3);
        } end

        int expected4 = my_exp4(x,y);
        it (genIntMsg("exp4", expected4, exp4(), CONSULTA)) {
            should_int(exp4()) be equal to(expected4);
        } end

        bool expected5 = my_exp5(x,y,z);
        it (genBoolMsg("exp5", expected5, exp5(), CONSULTA)) {
            should_bool(exp5()) be equal to(expected5);
        } end
    } end   


    x = 1;
    y = 10;
    z = 8;

    describe (genState("Test2", x, y, z, CONSULTA)) {

        int expected1 = my_exp1(x,y);
        it (genIntMsg("exp1", expected1, exp1(), CONSULTA)) {
            should_int(exp1()) be equal to(expected1);
        } end

        int expected2 = my_exp2(x,y,z);
        it (genIntMsg("exp2", expected2, exp2(), CONSULTA)) {
            should_int(exp2()) be equal to(expected2);
        } end

        bool expected3 = my_exp3(x,y);
        it (genBoolMsg("exp3", expected3, exp3(), CONSULTA)) {
            should_bool(exp3()) be equal to(expected3);
        } end

        int expected4 = my_exp4(x,y);
        it (genIntMsg("exp4", expected4, exp4(), CONSULTA)) {
            should_int(exp4()) be equal to(expected4);
        } end

        bool expected5 = my_exp5(x,y,z);
        it (genBoolMsg("exp5", expected5, exp5(), CONSULTA)) {
            should_bool(exp5()) be equal to(expected5);
        } end
    } end   

}