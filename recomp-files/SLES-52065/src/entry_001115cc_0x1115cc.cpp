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

// Function: entry_001115cc
// Address: 0x1115cc - 0x1115d4
void entry_001115cc_0x1115cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001115cc_0x1115cc");
#endif

    ctx->pc = 0x1115ccu;

    // 0x1115cc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1115ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1115d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1115d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1115d4u;
}
