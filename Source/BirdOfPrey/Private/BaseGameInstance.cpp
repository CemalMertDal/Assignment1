#include "BaseGameInstance.h"

void UBaseGameInstance::SetPlayerAgentInfoFor(int32 PlayerControllerID, FSAgentInfo AgentInfo) {}
FSAgentInfo UBaseGameInstance::GetPlayerAgentInfoFor(int32 PlayerControllerID, bool& bSuccess) { bSuccess = false; return FSAgentInfo(); }