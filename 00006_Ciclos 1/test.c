/*...extra...*/

// Variables para testeo de estados
int i_student;
int i_test;

if (CONSULTA) {
    // Entorno de prueba que simula scanf() usando *_VAR's

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
    // Testeo estado final partiendo de diferentes estados iniciales:
    
    describe("Testeo de exp_1h") {
        
        // Testeo Estado (x->4)
        i_test = 4;
        i_student = i_test;

        describe (genState("exp_1h", i_test, CONSULTA)) {
            my_exp_1h(&i_test);
            exp_1h(&i_student);
            
            // Controlo estado final de variable i
            it (genMsg("i", i_test, i_student, CONSULTA)) {
                should_int(i_student) be equal to(i_test);
            } end
        } end


        // Testeo Estado (x->0)
        i_test = 0;
        i_student = i_test;
        
        describe (genState("exp_1h", i_test, CONSULTA)) {
            my_exp_1h(&i_test);
            exp_1h(&i_student);
                
            // Controlo estado final de variable i
            it (genMsg("i", i_test, i_student, CONSULTA)) {
                should_int(i_student) be equal to(i_test);
            } end
        } end

    } end

    describe("Testeo de exp_1i") {

        // Testeo Estado (x->400)
        i_test = 400;
        i_student = i_test;
        
        describe (genState("exp_1i", i_test, CONSULTA)) {
            my_exp_1i(&i_test);
            exp_1i(&i_student);
            
            // Controlo estado final de variable i
            it (genMsg("i", i_test, i_student, CONSULTA)) {
                should_int(i_student) be equal to(i_test);
            } end
        } end


        // Testeo Estado (x->-400)
        i_test = -400;
        i_student = i_test;

        describe (genState("exp_1i", i_test, CONSULTA)) {
            my_exp_1i(&i_test);
            exp_1i(&i_student);
            
            // Controlo estado final de variable i
            it (genMsg("i", i_test, i_student, CONSULTA)) {
                should_int(i_student) be equal to(i_test);
            } end
        } end

    } end
}