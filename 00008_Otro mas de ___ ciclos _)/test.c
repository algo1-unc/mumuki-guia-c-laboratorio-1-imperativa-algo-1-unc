/*...extra...*/

// Variables para testeo de estados
int x_test;
int i_test;
bool res_test;

int x_student;
int i_student;
bool res_student;

if (CONSULTA) {
    // Entorno de prueba que simula scanf() usando *_VAR's

    describe (genState("ciclo2", X_VAR, I_VAR, RES_VAR, CONSULTA)) {
        x_student = X_VAR;
        i_student = I_VAR;
        res_student = RES_VAR;

        ciclo2(&x_student, &i_student, &res_student);
        it (genMsg("", 0, 0, true, x_student, i_student, res_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

} else {
    // Testeo estado final partiendo de dos estados iniciales diferentes:

    // Estado1 (x->5,i->0,res->false)
    x_test = 5;
    i_test = 0;
    res_test = false;

    x_student = x_test;
    i_student = i_test;
    res_student = res_test;

    describe (genState("Test1 ciclo2", x_test, i_test, res_test, CONSULTA)) {
        my_ciclo2(&x_test, &i_test, &res_test);
        ciclo2(&x_student, &i_student, &res_student);
        
        // Controlo estado final de variable x
        it (genMsg("x", x_test, i_test, res_test, x_student, i_student, res_student, CONSULTA)) {
            should_int(x_student) be equal to(x_test);
        } end

        // Controlo estado final de variable i
        it (genMsg("i", x_test, i_test, res_test, x_student, i_student, res_student, CONSULTA)) {
            should_int(i_student) be equal to(i_test);
        } end

        // Controlo estado final de variable res
        it (genMsg("res", x_test, i_test, res_test, x_student, i_student, res_student, CONSULTA)) {
            should_bool(res_student) be equal to(res_test);
        } end
    } end

    // Estado1 (x->1,i->100,res->true)
    x_test = 1;
    i_test = 100;
    res_test = true;

    x_student = x_test;
    i_student = i_test;
    res_student = res_test;

    describe (genState("Test2 ciclo2", x_test, i_test, res_test, CONSULTA)) {
        my_ciclo2(&x_test, &i_test, &res_test);
        ciclo2(&x_student, &i_student, &res_student);
        
        // Controlo estado final de variable x
        it (genMsg("x", x_test, i_test, res_test, x_student, i_student, res_student, CONSULTA)) {
            should_int(x_student) be equal to(x_test);
        } end

        // Controlo estado final de variable i
        it (genMsg("i", x_test, i_test, res_test, x_student, i_student, res_student, CONSULTA)) {
            should_int(i_student) be equal to(i_test);
        } end

        // Controlo estado final de variable res
        it (genMsg("res", x_test, i_test, res_test, x_student, i_student, res_student, CONSULTA)) {
            should_bool(res_student) be equal to(res_test);
        } end
    } end
}