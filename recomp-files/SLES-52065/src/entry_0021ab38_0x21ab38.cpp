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

// Function: entry_0021ab38
// Address: 0x21ab38 - 0x21ab5c
void entry_0021ab38_0x21ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ab38_0x21ab38");
#endif

    ctx->pc = 0x21ab38u;

    // 0x21ab38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ab3c: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21AB3Cu;
    {
        const bool branch_taken_0x21ab3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ab3c) {
            ctx->pc = 0x21AB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AB3Cu;
            // 0x21ab40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AB5Cu;
            return;
        }
    }
    ctx->pc = 0x21AB44u;
    // 0x21ab44: 0x16050009  bne         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21AB44u;
    {
        const bool branch_taken_0x21ab44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x21AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB44u;
        // 0x21ab48: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab44) {
            ctx->pc = 0x21AB6Cu;
            return;
        }
    }
    ctx->pc = 0x21AB4Cu;
    // 0x21ab4c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x21ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x21ab50: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x21ab50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x21ab54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21AB54u;
    {
        const bool branch_taken_0x21ab54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB54u;
        // 0x21ab58: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab54) {
            ctx->pc = 0x21AB6Cu;
            return;
        }
    }
    ctx->pc = 0x21AB5Cu;
}
