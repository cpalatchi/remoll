#ifndef __REMOLLRUN_HH
#define __REMOLLRUN_HH

/*!
 * All the information on the run
 * The data object will get put into the output
 * stream

   This is implemented in the soliton model
 */

#include "G4Run.hh"

class G4GenericMessenger;

class remollRunData;

class remollRun: public G4Run {

  public:
    remollRun();
    virtual ~remollRun();

  // Static run data access
  private:
    static remollRunData* fRunData;
  public:
    static remollRunData* GetRunData();

    void UpdateSeed(G4long seed);

  private:
    G4GenericMessenger* fMessenger;
};

#endif //__REMOLLRUN_HH
