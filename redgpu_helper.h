#pragma once

#ifdef _WIN32
#include "C:/RedGpuSDK/redgpu.h"
#endif
#ifdef __linux__
#include "/opt/RedGpuSDK/redgpu.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef enum RedHelperMemoryType {
  RED_HELPER_MEMORY_TYPE_VRAM     = 0,
  RED_HELPER_MEMORY_TYPE_UPLOAD   = 1,
  RED_HELPER_MEMORY_TYPE_READBACK = 2,
} RedHelperMemoryType;

REDGPU_DECLSPEC unsigned REDGPU_API redHelperGetMemoryTypeIndex  (const RedGpuInfo * gpuInfo, RedHelperMemoryType memoryType, unsigned memoryTypesSupported);
REDGPU_DECLSPEC void     REDGPU_API redHelperImageSetStateUsable (RedContext context, RedHandleGpu gpu, RedHandleImage image, RedImagePartBitflags imageAllParts, RedHandleQueue queueToSubmitImageStateChange, RedStatuses * outStatuses, const char * optionalFile, int optionalLine, void * optionalUserData);

#ifdef __cplusplus
}
#endif
