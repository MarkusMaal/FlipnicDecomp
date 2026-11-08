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

// Function: entry_0014bac0
// Address: 0x14bac0 - 0x14baec
void entry_0014bac0_0x14bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bac0_0x14bac0");
#endif

    ctx->pc = 0x14bac0u;

    // 0x14bac0: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x14bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
    // 0x14bac4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x14bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14bac8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x14bac8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bacc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x14baccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14bad0: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x14bad0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14bad4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x14bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14bad8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x14bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14badc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x14badcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x14bae0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x14bae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bae4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14BAE4u;
    {
        const bool branch_taken_0x14bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BAE4u;
        // 0x14bae8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bae4) {
            ctx->pc = 0x14BB08u;
            return;
        }
    }
    ctx->pc = 0x14BAECu;
}
