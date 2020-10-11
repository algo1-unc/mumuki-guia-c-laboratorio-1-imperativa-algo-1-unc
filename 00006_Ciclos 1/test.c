/*...extra...*/

int i_student;
int i_test;

if (CONSULTA) {

    describe (genState("exp_1h", I_VAR, CONSULTA)) {
        i_student = I_VAR;
        exp_1h(&i_student);
        
        it (genMsg("", 0, i_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end

    } end

    describe (genState("exp_1i", I_VAR, CONSULTA)) {
        i_student = I_VAR;
        exp_1i(&i_student);
            
        it (genMsg("", 0, i_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
        
    } end

} else {

    // Testeo estado final partiendo de los siguiente valores iniciales:
    describe("Tests funcion exp_1h") {

        i_test = 4;
        i_student = i_test;

        describe (genState("exp_1h", i_test, CONSULTA)) {
            my_exp_1h(&i_test);
            exp_1h(&i_student);
                
            it (genMsg("", i_test, i_student, CONSULTA)) {
                should_int(i_student) be equal to(i_test);
            } end

        } end

        i_test = 0;
        i_student = i_test;

        describe (genState("exp_1h", i_test, CONSULTA)) {
            my_exp_1h(&i_test);
            exp_1h(&i_student);
                
            it (genMsg("", i_test, i_student, CONSULTA)) {
                should_int(i_student) be equal to(i_test);
            } end

        } end

    } end


     describe("Tests funcion exp_1i") {

        i_test = 400;
        i_student = i_test;

        describe (genState("exp_1i", i_test, CONSULTA)) {
            my_exp_1i(&i_test);
            exp_1i(&i_student);
                
            it (genMsg("", i_test, i_student, CONSULTA)) {
                should_int(i_student) be equal to(i_test);
            } end

        } end

        i_test = -400;
        i_student = i_test;

        describe (genState("exp_1i", i_test, CONSULTA)) {
            my_exp_1i(&i_test);
            exp_1i(&i_student);
                
            it (genMsg("", i_test, i_student, CONSULTA)) {
                should_int(i_student) be equal to(i_test);
            } end

        } end

    } end
}