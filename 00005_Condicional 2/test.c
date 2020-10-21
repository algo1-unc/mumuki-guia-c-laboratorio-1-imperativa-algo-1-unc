/*...extra...*/

// Variables para testeo de estados
int x_test;
int y_test;
int z_test;
int m_test;
int x_student;
int y_student;
int z_student;
int m_student;

if (CONSULTA) {
    // Entorno de prueba que simula scanf() usando *_VAR's

    describe (genState("program1", X_VAR, Y_VAR, Z_VAR, M_VAR, CONSULTA)) {
        x_student = X_VAR;
        y_student = Y_VAR;
        z_student = Z_VAR;
        m_student = M_VAR;

        program1(&x_student, &y_student, &z_student, &m_student); 
        it (genMsg("", 0, 0, 0, 0, x_student, y_student, z_student, m_student, CONSULTA)) {
            should_bool(false) be equal to(true);
        } end
    } end

} else {
    // Testeo estado final (sigma2) partiendo de dos estados iniciales diferentes:
    // Estado1 (x->5,y->4,z->8,m->0)
    // Estado2 (x->1,y->4,z->3,m->3)
    // Estado3 (x->10,y->4,z->0,m->1)

  
    describe ("Testeo de estado 1") {
        // Estado1 (x->5,y->4,z->8,m->0)
      
        x_test = 5;
        y_test = 4;
        z_test = 8;
        m_test = 0;
    
        x_student = x_test;
        y_student = y_test;
        z_student = z_test;
        m_student = m_test;
    
        describe (genState("program1", x_test, y_test, z_test, m_test, CONSULTA)) {
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
        
    } end
    
    describe ("Testeo de estado 2") {
        // Estado2 (x->1,y->4,z->3,m->3)
      
        x_test = 1;
        y_test = 4;
        z_test = 3;
        m_test = 3;
    
        x_student = x_test;
        y_student = y_test;
        z_student = z_test;
        m_student = m_test;
    
        describe (genState("program1", x_test, y_test, z_test, m_test, CONSULTA)) {
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
    
    describe ("Testeo de estado 3") {
         // Estado3 (x->10,y->4,z->0,m->1)
      
        x_test = 10;
        y_test = 4;
        z_test = 0;
        m_test = 3;
    
        x_student = x_test;
        y_student = y_test;
        z_student = z_test;
        m_student = m_test;
    
        describe (genState("program1", x_test, y_test, z_test, m_test, CONSULTA)) {
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
        
    } end
    
}