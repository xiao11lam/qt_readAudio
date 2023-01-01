/*
Copyright 2015 Google Inc. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <memory>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <QFile>


int main(int argc, char* argv[]) {
//  int opt = 0;
//  std::string filename;
//  std::string f0_output;
//  std::string pm_output;
//  std::string corr_output;
//  bool do_hilbert_transform = kDoHilbertTransform;
//  bool do_high_pass = kDoHighpass;
//  float external_frame_interval = kExternalFrameInterval;
//  float max_f0 = kMaxF0Search;
//  float min_f0 = kMinF0Search;
//  float inter_pulse = kUnvoicedPulseInterval;
//    std::string filename;
//    filename = "test.wav";
    const char * fname = "test.wav" ;
    QFile data(fname); ;

    puts ("Done.\n") ;
//    Wave wav;
//    wav.Load(filename);

//    if (!wav.Load(filename)) {
//        fprintf(stderr, "Failed to load waveform '%s'\n", filename.c_str());
//        return 1;
//    }
//  wav.Load(filename);

  return 0;
}
