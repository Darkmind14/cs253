int main(int argc, char* argv[]) {

	// Loop and a half

	// Read one line of input
	String s;
	getline(cin, s);

	// loop
	while (s!="") {

		// process s
		// Loop and a half
		istringstream sin(s + " ");

		// Read one character of input
		char c;
		sin >> c;

		while (!sin.eof()) {
			// process the character
			switch (c) {

			}

			// read the next c
			sin >> c;

		}

		// read the next s
		getline(cin, s);
		
	}
}
