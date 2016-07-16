#ifndef _ANALYSIS_H
#define _ANALYSIS_H

#include "_plugin_types.h"

struct FunctionAnalysisInfo;
struct ModuleAnalysisInfo;

struct BasicBlockAnalysisInfo : public AnalysisInfo
{
    FunctionAnalysisInfo* functionInfo;
};

struct FunctionAnalysisInfo : public AnalysisInfo
{
    ModuleAnalysisInfo* moduleInfo;
    BridgeList<BasicBlockAnalysisInfo> blocks;
};

struct ModuleAnalysisInfo : public AnalysisInfo
{
    BridgeList<FunctionAnalysisInfo> functions;
};

#endif