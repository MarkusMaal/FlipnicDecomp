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

// Function: entry_001aaf40
// Address: 0x1aaf40 - 0x1aaf44
void entry_001aaf40_0x1aaf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf40_0x1aaf40");
#endif

    ctx->pc = 0x1aaf40u;

    // 0x1aaf40: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1aaf40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x1aaf44u;
}
