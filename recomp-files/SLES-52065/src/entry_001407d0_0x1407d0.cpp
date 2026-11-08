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

// Function: entry_001407d0
// Address: 0x1407d0 - 0x1407fc
void entry_001407d0_0x1407d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001407d0_0x1407d0");
#endif

    ctx->pc = 0x1407d0u;

    // 0x1407d0: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x1407d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
    // 0x1407d4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1407d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1407d8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1407d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1407dc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1407dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1407e0: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x1407e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1407e4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1407e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1407e8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1407e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1407ec: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1407ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1407f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1407f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1407f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1407F4u;
    {
        const bool branch_taken_0x1407f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1407F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407F4u;
        // 0x1407f8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407f4) {
            ctx->pc = 0x140818u;
            return;
        }
    }
    ctx->pc = 0x1407FCu;
}
