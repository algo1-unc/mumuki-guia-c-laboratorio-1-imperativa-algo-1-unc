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

}