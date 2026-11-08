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

// Function: entry_001360a0
// Address: 0x1360a0 - 0x1360c4
void entry_001360a0_0x1360a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001360a0_0x1360a0");
#endif

    ctx->pc = 0x1360a0u;

    // 0x1360a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1360a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1360a4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1360a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1360a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1360a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1360ac: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x1360acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1360b0: 0x1261023  subu        $v0, $t1, $a2
    ctx->pc = 0x1360b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1360b4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1360B4u;
    {
        const bool branch_taken_0x1360b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1360B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360B4u;
        // 0x1360b8: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360b4) {
            ctx->pc = 0x1360C4u;
            return;
        }
    }
    ctx->pc = 0x1360BCu;
    // 0x1360bc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1360bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1360c0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1360c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x1360c4u;
}
