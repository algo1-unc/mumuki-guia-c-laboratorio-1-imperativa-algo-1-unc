/*...extra...*/

int x_student;
int y_student;
int z_student;
int m_student;

int x_test;
int y_test;
int z_test;
int m_test;

if (CONSULTA) {

    describe (genState("Run program1", X_VAR, Y_VAR, Z_VAR, M_VAR, CONSULTA)) {
        x_student = X_VAR;
        y_student = Y_VAR;
        z_student = Z_VAR;
        m_student = M_VAR;

        program1(&x_student, &y_student, &z_student, &m_student);
            
        it (genMsg("", 0, 0, 0, 0, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

    describe (genState("Run program2", x_student, y_student, z_student, m_student, CONSULTA)) {

        program2(&x_student, &y_student, &z_student, &m_student);
            
        it (genMsg("", 0, 0, 0, 0, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

} else {
    // Testeo estado final (sigma2) partiendo de los sigiente valores iniciales:

    x_test = 5;
    y_test = 4;
    z_test = 8;
    m_test = 0;

    x_student = 5;
    y_student = 4;
    z_student = 8;
    m_student = 0;

    describe (genState("Run program1", x_test, y_test, z_test, m_test, CONSULTA)) {

        my_program1(&x_test, &y_test, &z_test, &m_test);
        program1(&x_student, &y_student, &z_student, &m_student);
        
        // Controlo estado final de variable x
        it (genMsg("x", x_test, y_test, z_test, m_test, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_int(x_student) be equal to(x_test);
        } end

        // Controlo estado final de variable y
        it (genMsg("y", x_test, y_test, z_test, m_test, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_int(y_student) be equal to(y_test);
        } end

        // Controlo estado final de variable z
        it (genMsg("z", x_test, y_test, z_test, m_test, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_int(z_student) be equal to(z_test);
        } end

        // Controlo estado final de variable m
        it (genMsg("m", x_test, y_test, z_test, m_test, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_int(m_student) be equal to(m_test);
        } end

    } end

    describe (genState("Run program2", x_test, y_test, z_test, m_test, CONSULTA)) {

        my_program2(&x_test, &y_test, &z_test, &m_test);
        program2(&x_student, &y_student, &z_student, &m_student);
        
        // Controlo estado final de variable x
        it (genMsg("x", x_test, y_test, z_test, m_test, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_int(x_student) be equal to(x_test);
        } end

        // Controlo estado final de variable y
        it (genMsg("y", x_test, y_test, z_test, m_test, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_int(y_student) be equal to(y_test);
        } end

        // Controlo estado final de variable z
        it (genMsg("z", x_test, y_test, z_test, m_test, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_int(z_student) be equal to(z_test);
        } end

        // Controlo estado final de variable m
        it (genMsg("m", x_test, y_test, z_test, m_test, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_int(m_student) be equal to(m_test);
        } end

    } end
}