#include <clients/rt/AmpSlice.hpp>
#include <FluidMaxWrapper.hpp>

void ext_main(void*)
{
  using namespace fluid::client;
  makeMaxWrapper<NRTAmpSlice>("fluid.bufampslice~");
}
