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

// Function: entry_00173ef8
// Address: 0x173ef8 - 0x173f14
void entry_00173ef8_0x173ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173ef8_0x173ef8");
#endif

    ctx->pc = 0x173ef8u;

    // 0x173ef8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x173ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173efc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x173efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x173f00: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x173f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x173f04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x173f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x173f08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x173f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x173f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173f10: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x173f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x173f14u;
}
