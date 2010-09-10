/**********************************************************\ 
  Default Windows factory methods

  These are used to create the Npapi plugin type and
  the PluginWindow type on windows; if you want to extend
  these classses, do so and update these functions to
  instantiate the correct types.
\**********************************************************/

#include "Win/FactoryDefinitionsWin.h"
#include "Win/NpapiPluginWin.h"
#include "Win/PluginWindowWin.h"

FB::Npapi::NpapiPluginPtr _getNpapiPlugin(FB::Npapi::NpapiBrowserHostPtr host)
{
    return FB::Npapi::NpapiPluginPtr(new FB::Npapi::NpapiPluginWin(host));
}

FB::PluginWindowWin *_createPluginWindow(HWND hWnd)
{
    return new FB::PluginWindowWin(hWnd);
}
