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

// Function: entry_00112de8
// Address: 0x112de8 - 0x112df0
void entry_00112de8_0x112de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112de8_0x112de8");
#endif

    ctx->pc = 0x112de8u;

    // 0x112de8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x112de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x112dec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x112df0u;
}
