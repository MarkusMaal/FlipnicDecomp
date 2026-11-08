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

// Function: entry_001ac150
// Address: 0x1ac150 - 0x1ac154
void entry_001ac150_0x1ac150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac150_0x1ac150");
#endif

    ctx->pc = 0x1ac150u;

    // 0x1ac150: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1ac150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x1ac154u;
}
