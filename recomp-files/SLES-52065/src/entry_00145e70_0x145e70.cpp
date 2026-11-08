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

// Function: entry_00145e70
// Address: 0x145e70 - 0x145e9c
void entry_00145e70_0x145e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145e70_0x145e70");
#endif

    ctx->pc = 0x145e70u;

    // 0x145e70: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x145e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
    // 0x145e74: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x145e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x145e78: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x145e78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145e7c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x145e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x145e80: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x145e80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x145e84: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x145e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x145e88: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x145e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145e8c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x145e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x145e90: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x145e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145e94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145E94u;
    {
        const bool branch_taken_0x145e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E94u;
        // 0x145e98: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e94) {
            ctx->pc = 0x145EB8u;
            return;
        }
    }
    ctx->pc = 0x145E9Cu;
}
