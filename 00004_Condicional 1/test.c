/*...extra...*/

// Variables para testeo de estados
int x_student;
int y_student;
int x_test;
int y_test;


if (CONSULTA) {
    // Entorno de prueba que simula scanf() usando *_VAR's

    describe (genState("fun", X_VAR, Y_VAR, CONSULTA)) {
        x_student = X_VAR;
        y_student = Y_VAR;
        fun(&x_student, &y_student);
            
        it (genMsg("", 0, 0, x_student, y_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

} else {
    // Testeo todas las funciones para dos estados especificos

    // Estado1 (x->3, y->1)
    x_test = 3;
    y_test = 1;
    x_student = x_test;
    y_student = y_test;

    describe (genState("Test1 fun", x_test, y_test, CONSULTA)) {
        my_fun(&x_test, &y_student);
        fun(&x_student, &y_student);
        
        // Controlo estado final de variable x
        it (genMsg("x", x_test, y_test, x_student, y_student, CONSULTA)) {
            should_int(x_student) be equal to(x_test);
        } end

        // Controlo estado final de variable y
        it (genMsg("y", x_test, y_test, x_student, y_student, CONSULTA)) {
            should_int(y_student) be equal to(y_test);
        } end

    } end
    
    // Estado1 (x->-100, y->1)
    x_test = -100;
    y_test = 1;
    x_student = x_test;
    y_student = y_test;

    describe (genState("Test2 fun", x_test, y_test, CONSULTA)) {
        my_fun(&x_test, &y_student);
        fun(&x_student, &y_student);
        
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