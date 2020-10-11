/*...extra...*/

// Variables para testeo de estados
int x_student;
int y_student;
int x_test;
int y_test;


if (CONSULTA) {
    // Entorno de prueba que simula scanf() usando *_VAR's

    describe (genState("exp_1a", X_VAR, Y_VAR, CONSULTA)) {
        x_student = X_VAR;
        y_student = Y_VAR;
        exp_1a(&x_student);
            
        it (genMsg("", 0, 0, x_student, y_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

    describe (genState("exp_1b", X_VAR, Y_VAR, CONSULTA)) {
        x_student = X_VAR;
        y_student = Y_VAR;
        exp_1b(&x_student, &y_student);
        
        it (genMsg("", 0, 0, x_student, y_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

    describe (genState("exp_1c", X_VAR, Y_VAR, CONSULTA)) {
        x_student = X_VAR;
        y_student = Y_VAR;
        exp_1c(&x_student, &y_student);
            
        it (genMsg("", 0, 0, x_student, y_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

} else {
    // Testeo todas las funciones para dos estados especificos
    // Estado1 (x->2, y->5)
    // Estado1 (x->8, y->3)

    describe ("Testeo de estado 1") {
        x_test = 2;
        y_test = 5; 
        x_student = x_test;
        y_student = y_test;

        describe (genState("exp_1a", x_test, y_test, CONSULTA)) {
            exp_1a(&x_student);
            my_exp_1a(&x_test);
            
            // Controlo estado final de variable x
            it (genMsg("x", x_test, y_test, x_student, y_student, CONSULTA)) {
                should_int(x_student) be equal to(x_test);
            } end
    
        } end

        x_test = 2;
        y_test = 5; 
        x_student = x_test;
        y_student = y_test;

        describe (genState("exp_1b", x_test, y_test, CONSULTA)) {
            exp_1b(&x_student, &y_student);
            my_exp_1b(&x_test, &y_test);
            
            // Controlo estado final de variable x
            it (genMsg("x", x_test, y_test, x_student, y_student, CONSULTA)) {
                should_int(x_student) be equal to(x_test);
            } end
            
            // Controlo estado final de variable y
            it (genMsg("y", x_test, y_test, x_student, y_student, CONSULTA)) {
                should_int(y_student) be equal to(y_test);
            } end
    
        } end

        x_test = 2;
        y_test = 5; 
        x_student = x_test;
        y_student = y_test;

        describe (genState("exp_1c", x_test, y_test, CONSULTA)) {
            exp_1c(&x_student, &y_student);
            my_exp_1c(&x_test, &y_test);
            
            // Controlo estado final de variable x
            it (genMsg("x", x_test, y_test, x_student, y_student, CONSULTA)) {
                should_int(x_student) be equal to(x_test);
            } end
            
            // Controlo estado final de variable y
            it (genMsg("y", x_test, y_test, x_student, y_student, CONSULTA)) {
                should_int(y_student) be equal to(y_test);
            } end
    
        } end

    } end

    describe ("Testeo de estado 2") {
        x_test = 8;
        y_test = 3; 
        x_student = x_test;
        y_student = y_test;

        describe (genState("exp_1a", x_test, y_test, CONSULTA)) {
            exp_1a(&x_student);
            my_exp_1a(&x_test);
            
            // Controlo estado final de variable x
            it (genMsg("x", x_test, y_test, x_student, y_student, CONSULTA)) {
                should_int(x_student) be equal to(x_test);
            } end
    
        } end

        x_test = 8;
        y_test = 3; 
        x_student = x_test;
        y_student = y_test;

        describe (genState("exp_1b", x_test, y_test, CONSULTA)) {
            exp_1b(&x_student, &y_student);
            my_exp_1b(&x_test, &y_test);
            
            // Controlo estado final de variable x
            it (genMsg("x", x_test, y_test, x_student, y_student, CONSULTA)) {
                should_int(x_student) be equal to(x_test);
            } end
            
            // Controlo estado final de variable y
            it (genMsg("y", x_test, y_test, x_student, y_student, CONSULTA)) {
                should_int(y_student) be equal to(y_test);
            } end
    
        } end

        x_test = 8;
        y_test = 3; 
        x_student = x_test;
        y_student = y_test;

        describe (genState("exp_1c", x_test, y_test, CONSULTA)) {
            exp_1c(&x_student, &y_student);
            my_exp_1c(&x_test, &y_test);
            
            // Controlo estado final de variable x
            it (genMsg("x", x_test, y_test, x_student, y_student, CONSULTA)) {
                should_int(x_student) be equal to(x_test);
            } end
            
            // Controlo estado final de variable y
            it (genMsg("y", x_test, y_test, x_student, y_student, CONSULTA)) {
                should_int(y_student) be equal to(y_test);
            } end
    
        } end

    } end

}