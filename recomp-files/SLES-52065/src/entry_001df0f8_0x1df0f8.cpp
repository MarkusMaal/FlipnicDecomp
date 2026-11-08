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

// Function: entry_001df0f8
// Address: 0x1df0f8 - 0x1df118
void entry_001df0f8_0x1df0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df0f8_0x1df0f8");
#endif

    ctx->pc = 0x1df0f8u;

    // 0x1df0f8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1df0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1df0fc: 0x244ca304  addiu       $t4, $v0, -0x5CFC
    ctx->pc = 0x1df0fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943492));
    // 0x1df100: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1df100u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df104: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x1df104u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1df108: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1df108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df10c: 0x248b9f00  addiu       $t3, $a0, -0x6100
    ctx->pc = 0x1df10cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942464));
    // 0x1df110: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x1df110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1df114: 0x0  nop
    ctx->pc = 0x1df114u;
    // NOP
    ctx->pc = 0x1df118u;
}
