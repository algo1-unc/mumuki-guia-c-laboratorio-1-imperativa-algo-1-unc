/*...extra...*/

// Variables para testeo de estados
int x_test;
int y_test;
int z_test;

// Variables para testeo de devoluciones
int int_expected;
bool bool_expected;
int int_student;
bool bool_student;


if (CONSULTA) {
    // Entorno de prueba que simula scanf() usando *_VAR's

    describe (genState("exp1", X_VAR, Y_VAR, Z_VAR, CONSULTA)) {
        it (genIntMsg(0, exp1(X_VAR, Y_VAR), CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

    describe (genState("exp2", X_VAR, Y_VAR, Z_VAR, CONSULTA)) {
        it (genIntMsg(0, exp2(X_VAR, Y_VAR, Z_VAR), CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

    describe (genState("exp3", X_VAR, Y_VAR, Z_VAR, CONSULTA)) {
        it (genIntMsg(0, exp3(X_VAR, Y_VAR), CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

    describe (genState("exp4", X_VAR, Y_VAR, Z_VAR, CONSULTA)) {
        it (genIntMsg(0, exp4(X_VAR, Y_VAR), CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

    describe (genState("exp5", X_VAR, Y_VAR, Z_VAR, CONSULTA)) {
        it (genIntMsg(0, exp5(X_VAR, Y_VAR, Z_VAR), CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

} else {
    // Teste0 de funciones para dos estados particulares
    // Estado1: (x->7, y->3, z->5)
    // Estado2: (x->1, y->10, z->8)

    describe("Testeo de estado 1") {
        x_test = 7;
        y_test = 3;
        z_test = 5;

        describe (genState("exp1", x_test, y_test, z_test, CONSULTA)) {
            int_expected = my_exp1(x_test, y_test);
            int_student = exp1(x_test, y_test);
            it (genIntMsg(int_expected, int_student, CONSULTA)) {
                should_int(int_student) be equal to(int_expected);
            } end
        } end

        describe (genState("exp2", x_test, y_test, z_test, CONSULTA)) {
            int_expected = my_exp2(x_test, y_test, z_test);
            int_student = exp2(x_test, y_test, z_test);
            it (genIntMsg(int_expected, int_student, CONSULTA)) {
                should_int(int_student) be equal to(int_expected);
            } end
        } end

        describe (genState("exp3", x_test, y_test, z_test, CONSULTA)) {
            bool_expected = my_exp3(x_test, y_test);
            bool_student = exp3(x_test, y_test);
            it (genIntMsg(bool_expected, bool_student, CONSULTA)) {
                should_bool(bool_student) be equal to(bool_expected);
            } end
        } end

        describe (genState("exp4", x_test, y_test, z_test, CONSULTA)) {
            int_expected = my_exp4(x_test, y_test);
            int_student = exp4(x_test, y_test);
            it (genIntMsg(int_expected, int_student, CONSULTA)) {
                should_int(int_student) be equal to(int_expected);
            } end
        } end

        describe (genState("exp5", x_test, y_test, z_test, CONSULTA)) {
            bool_expected = my_exp5(x_test, y_test, z_test);
            bool_student = exp5(x_test, y_test, z_test);
            it (genIntMsg(bool_expected, bool_student, CONSULTA)) {
                should_bool(bool_student) be equal to(bool_expected);
            } end
        } end
        
    } end

    describe("Testeo de estado 2") {
        x_test = 1;
        y_test = 10;
        z_test = 8;

        describe (genState("exp1", x_test, y_test, z_test, CONSULTA)) {
            int_expected = my_exp1(x_test, y_test);
            int_student = exp1(x_test, y_test);
            it (genIntMsg(int_expected, int_student, CONSULTA)) {
                should_int(int_student) be equal to(int_expected);
            } end
        } end

        describe (genState("exp2", x_test, y_test, z_test, CONSULTA)) {
            int_expected = my_exp2(x_test, y_test, z_test);
            int_student = exp2(x_test, y_test, z_test);
            it (genIntMsg(int_expected, int_student, CONSULTA)) {
                should_int(int_student) be equal to(int_expected);
            } end
        } end

        describe (genState("exp3", x_test, y_test, z_test, CONSULTA)) {
            bool_expected = my_exp3(x_test, y_test);
            bool_student = exp3(x_test, y_test);
            it (genIntMsg(bool_expected, bool_student, CONSULTA)) {
                should_bool(bool_student) be equal to(bool_expected);
            } end
        } end

        describe (genState("exp4", x_test, y_test, z_test, CONSULTA)) {
            int_expected = my_exp4(x_test, y_test);
            int_student = exp4(x_test, y_test);
            it (genIntMsg(int_expected, int_student, CONSULTA)) {
                should_int(int_student) be equal to(int_expected);
            } end
        } end

        describe (genState("exp5", x_test, y_test, z_test, CONSULTA)) {
            bool_expected = my_exp5(x_test, y_test, z_test);
            bool_student = exp5(x_test, y_test, z_test);
            it (genIntMsg(bool_expected, bool_student, CONSULTA)) {
                should_bool(bool_student) be equal to(bool_expected);
            } end
        } end
        
    } end
}