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

// Function: entry_0012c2cc
// Address: 0x12c2cc - 0x12c2e0
void entry_0012c2cc_0x12c2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c2cc_0x12c2cc");
#endif

    ctx->pc = 0x12c2ccu;

    // 0x12c2cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12c2ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2d0: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x12c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x12c2d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c2d8: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x12c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x12c2dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12c2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12c2e0u;
}
