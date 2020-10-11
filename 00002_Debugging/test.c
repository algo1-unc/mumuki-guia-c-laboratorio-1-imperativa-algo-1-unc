/*...extra...*/

// Variables para testeo de estados
int x_test;
int y_test;
int z_test;
bool b_test;
bool w_test;

// Variables para testeo de devoluciones
bool bool_expected;
bool bool_student;

if (CONSULTA) {
	// Entorno de prueba que simula scanf() usando *_VAR's

	describe (genState("exp1", X_VAR, Y_VAR, Z_VAR, B_VAR, W_VAR, CONSULTA)) {
		it (genBoolMsg(true, exp1(X_VAR), CONSULTA)) {
				should_bool(false) be equal to(true);
		} end
	} end

	describe (genState("exp2", X_VAR, Y_VAR, Z_VAR, B_VAR, W_VAR, CONSULTA)) {
		it (genBoolMsg(true, exp2(X_VAR, Y_VAR, Z_VAR), CONSULTA)) {
				should_bool(false) be equal to(true);
		} end
	} end

	describe (genState("exp3", X_VAR, Y_VAR, Z_VAR, B_VAR, W_VAR, CONSULTA)) {
		it (genBoolMsg(true, exp3(B_VAR, W_VAR), CONSULTA)) {
				should_bool(false) be equal to(true);
		} end
	} end

} else {
	// Teste0 de funciones para dos estados particulares
  // Estado1: (x->4, y->-4, z->8, b->true, m->true)
	// Estado2: (x->2, y->-2, z->2, b->false, m->true)

	describe("Testeo de estado 1") {
		x_test = 4;
		y_test = -4;
		z_test = 8;
		b_test = true;
		w_test = true;

		describe (genState("exp1", x_test, y_test, z_test, b_test, w_test, CONSULTA)) {
			bool_expected = my_exp1(x_test);
			bool_student = exp1(x_test);
			it (genBoolMsg(bool_expected, bool_student, CONSULTA)) {
				should_bool(bool_student) be equal to(bool_expected);
			} end
		} end

		describe (genState("exp2", x_test, y_test, z_test, b_test, w_test, CONSULTA)) {
			bool_expected = my_exp2(x_test, y_test, z_test);
			bool_student = exp2(x_test, y_test, z_test);
			it (genBoolMsg(bool_expected, bool_student, CONSULTA)) {
				should_bool(bool_student) be equal to(bool_expected);
			} end
		} end

		describe (genState("exp3", x_test, y_test, z_test, b_test, w_test, CONSULTA)) {
			bool_expected = my_exp3(b_test, w_test);
			bool_student = exp3(b_test, w_test);
			it (genBoolMsg(bool_expected, bool_student, CONSULTA)) {
				should_bool(bool_student) be equal to(bool_expected);
			} end
		} end

	} end

	describe("Testeo de estado 2") {
		// Estado1: (x->2, y->-2, z->2, b->false, m->true)
		x_test = 2;
		y_test = -2;
		z_test = 2;
		b_test = false;
		w_test = true;

		describe (genState("exp1", x_test, y_test, z_test, b_test, w_test, CONSULTA)) {
			bool_expected = my_exp1(x_test);
			bool_student = exp1(x_test);
			it (genBoolMsg(bool_expected, bool_student, CONSULTA)) {
				should_bool(bool_student) be equal to(bool_expected);
			} end
		} end

		describe (genState("exp2", x_test, y_test, z_test, b_test, w_test, CONSULTA)) {
			bool_expected = my_exp2(x_test, y_test, z_test);
			bool_student = exp2(x_test, y_test, z_test);
			it (genBoolMsg(bool_expected, bool_student, CONSULTA)) {
				should_bool(bool_student) be equal to(bool_expected);
			} end
		} end

		describe (genState("exp3", x_test, y_test, z_test, b_test, w_test, CONSULTA)) {
			bool_expected = my_exp3(b_test, w_test);
			bool_student = exp3(b_test, w_test);
			it (genBoolMsg(bool_expected, bool_student, CONSULTA)) {
				should_bool(bool_student) be equal to(bool_expected);
			} end
		} end

	} end
} end