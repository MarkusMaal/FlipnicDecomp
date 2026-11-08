#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_002024dc
// Address: 0x2024dc - 0x2024e0
void entry_002024dc_0x2024dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002024dc_0x2024dc");
#endif

    ctx->pc = 0x2024dcu;

    // 0x2024dc: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2024dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x2024e0u;
}
