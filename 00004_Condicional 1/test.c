/*...extra...*/

int x_student;
int y_student;
int x_test;
int y_test;


if (CONSULTA) {

    describe (genState("", X_VAR, Y_VAR, CONSULTA)) {
        x_student = X_VAR;
        y_student = Y_VAR;
        fun(&x_student, &y_student);
            
        it (genMsg("", 0, 0, x_student, y_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

} else {
    // Testeo la funcion con estados específicos

    x_student = 3;
    y_student = 1;
    x_test = 3;
    y_test = 1; 

    describe (genState("Test1", x_test, y_test, CONSULTA)) {
        
        fun(&x_student, &y_student);
        my_fun(&x_test, &y_student);
        
        // Controlo estado final de variable x
        it (genMsg("x", x_test, y_test, x_student, y_student, CONSULTA)) {
            should_int(x_student) be equal to(x_test);
        } end

        // Controlo estado final de variable y
        it (genMsg("y", x_test, y_test, x_student, y_student, CONSULTA)) {
            should_int(y_student) be equal to(y_test);
        } end

    } end
    
    x_student = -100;
    y_student = 1;
    x_test = -100;
    y_test = 1; 

    describe (genState("Test2", x_test, y_test, CONSULTA)) {
        
        fun(&x_student, &y_student);
        my_fun(&x_test, &y_student);
        
        // Controlo estado final de variable x
        it (genMsg("x", x_test, y_test, x_student, y_student, CONSULTA)) {
            should_int(x_student) be equal to(x_test);
        } end

        // Controlo estado final de variable y
        it (genMsg("y", x_test, y_test, x_student, y_student, CONSULTA)) {
            should_int(y_student) be equal to(y_test);
        } end

    } end
}
