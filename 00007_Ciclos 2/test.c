/*...extra...*/

// Variables para testeo de estados
int x_test;
int y_test;
int i_test;

int x_student;
int y_student;
int i_student;

if (CONSULTA) {
    // Entorno de prueba que simula scanf() usando *_VAR's

    describe (genState("ciclo1", X_VAR, Y_VAR, I_VAR, CONSULTA)) {
        x_student = X_VAR;
        y_student = Y_VAR;
        i_student = I_VAR;

        ciclo1(&x_student, &y_student, &i_student);
        it (genMsg("", 0, 0, 0, x_student, y_student, i_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

} else {
    // Testeo estado final partiendo de dos estados iniciales diferentes:

    // Estado1 (x->13,y->3,i->0)
    x_test = 13;
    y_test = 3;
    i_test = 0;

    x_student = x_test;
    y_student = y_test;
    i_student = i_test;

    describe (genState("Test1 ciclo1", x_test, y_test, i_test, CONSULTA)) {
        my_ciclo1(&x_test, &y_test, &i_test);
        ciclo1(&x_student, &y_student, &i_student);
        
        // Controlo estado final de variable x
        it (genMsg("x", x_test, y_test, i_test, x_student, y_student, i_student, CONSULTA)) {
            should_int(x_student) be equal to(x_test);
        } end

        // Controlo estado final de variable y
        it (genMsg("y", x_test, y_test, i_test, x_student, y_student, i_student, CONSULTA)) {
            should_int(y_student) be equal to(y_test);
        } end

        // Controlo estado final de variable i
        it (genMsg("i", x_test, y_test, i_test, x_student, y_student, i_student, CONSULTA)) {
            should_int(i_student) be equal to(i_test);
        } end
    } end


    // Estado2 (x->5,y->4,i->8)
    x_test = 5;
    y_test = 4;
    i_test = 8;

    x_student = x_test;
    y_student = y_test;
    i_student = i_test;

    describe (genState("Test2 ciclo1", x_test, y_test, i_test, CONSULTA)) {
        my_ciclo1(&x_test, &y_test, &i_test);
        ciclo1(&x_student, &y_student, &i_student);
        
        // Controlo estado final de variable x
        it (genMsg("x", x_test, y_test, i_test, x_student, y_student, i_student, CONSULTA)) {
            should_int(x_student) be equal to(x_test);
        } end

        // Controlo estado final de variable y
        it (genMsg("y", x_test, y_test, i_test, x_student, y_student, i_student, CONSULTA)) {
            should_int(y_student) be equal to(y_test);
        } end

        // Controlo estado final de variable i
        it (genMsg("i", x_test, y_test, i_test, x_student, y_student, i_student, CONSULTA)) {
            should_int(i_student) be equal to(i_test);
        } end
    } end
    
    
    // Estado3 (x->8,y->4,i->1)
    x_test = 8;
    y_test = 4;
    i_test = 1;

    x_student = x_test;
    y_student = y_test;
    i_student = i_test;

    describe (genState("Test3 ciclo1", x_test, y_test, i_test, CONSULTA)) {
        my_ciclo1(&x_test, &y_test, &i_test);
        ciclo1(&x_student, &y_student, &i_student);
        
        // Controlo estado final de variable x
        it (genMsg("x", x_test, y_test, i_test, x_student, y_student, i_student, CONSULTA)) {
            should_int(x_student) be equal to(x_test);
        } end

        // Controlo estado final de variable y
        it (genMsg("y", x_test, y_test, i_test, x_student, y_student, i_student, CONSULTA)) {
            should_int(y_student) be equal to(y_test);
        } end

        // Controlo estado final de variable i
        it (genMsg("i", x_test, y_test, i_test, x_student, y_student, i_student, CONSULTA)) {
            should_int(i_student) be equal to(i_test);
        } end
    } end
       
}