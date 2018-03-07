#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0);
  
  // Initialize turtle engine.
  // (Forward, Left, Right).
  turtle = Turtle("F", "+", "-");
  
  generation = 5;
  
  // We don't want to update this in every update loop because it's non-deterministic.
  resultStochastic = ofxLSystemGrammar::buildSentences(stochastic, generation, "F");
  
  turtle.setAngle(30);
  turtle.setLength(4);
  
  // Just change this initially, because it will change in every update loop.
  resultStochastic = ofxLSystemGrammar::buildSentences(stochastic, generation, "F");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofPushStyle();
  ofSetColor(ofColor::white);
  turtle.draw(resultStochastic[resultStochastic.size()-1], ofGetWidth(), ofGetHeight(), -130);
  ofPopStyle();
}

void ofApp::keyPressed(int key) {
  if (key == OF_KEY_UP) {
      turtle.setAngle(ofRandom(25, 35));
      // Regenerate the tree.
      resultStochastic = ofxLSystemGrammar::buildSentences(stochastic, generation, "F");
  } else if (key == OF_KEY_DOWN) {
      turtle.setAngle(ofRandom(25, 35));
      // Regenerate the tree.
      resultStochastic = ofxLSystemGrammar::buildSentences(stochastic, generation, "F");
  }
}
