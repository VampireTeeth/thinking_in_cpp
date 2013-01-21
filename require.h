/*
 * require.h
 *
 *  Created on: Jan 21, 2013
 *      Author: weikeliu
 */

#ifndef REQUIRE_H_
#define REQUIRE_H_
#include <cstdio>
#include <cstdlib>
#include <fstream>

inline void require(bool requirement,
		char* err_msg="Requirement failed"){
	using namespace std;
	if(!requirement){
		fprintf(stderr, "%s", err_msg);
		exit(1);
	}
}

inline void requireArgs(int argc, int args,
		char* msg = "Must be %d arguments"){
	using namespace std;
	if(argc != args) {
		fprintf(stderr, msg);
		exit(1);
	}
}

inline void assure(std::ifstream& in, char* filename = "") {
	using namespace std;
	if(!in){
		fprintf(stderr, "Could not open file %s", filename);
		exit(1);
	}
}

inline void assure(std::ofstream& out, char* filename = "") {
	using namespace std;
	if(!out) {
		fprintf(stderr, "Could not open file %s", filename);
		exit(1);
	}
}

#endif /* REQUIRE_H_ */
