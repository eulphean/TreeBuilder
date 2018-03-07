#pragma once

#include "ofMain.h"
#include "ofxLSystemGrammar.h"
#include "Turtle.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    void keyPressed(int key);
  
    // Let's try with stochastic tree.
    vector<string> stochastic {
      "0.50 -> F -> F[+F]F[-F]",
      "0.30 -> F -> FF[-FF]",
      "0.20 -> F -> FF[+FF]"
    };
  
    vector<string> resultStochastic;
  
    Turtle turtle;
  
    int generation;
};
