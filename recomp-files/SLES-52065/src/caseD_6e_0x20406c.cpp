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

// Function: caseD_6e
// Address: 0x20406c - 0x204088
void caseD_6e_0x20406c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6e_0x20406c");
#endif

    ctx->pc = 0x20406cu;

    // 0x20406c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x20406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x204070: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204070u;
    {
        const bool branch_taken_0x204070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204070u;
        // 0x204074: 0x8fa501f0  lw          $a1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204070) {
            ctx->pc = 0x204088u;
            return;
        }
    }
    ctx->pc = 0x204078u;
    // 0x204078: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x204078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x20407c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x20407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x204080: 0x1000fec1  b           . + 4 + (-0x13F << 2)
    ctx->pc = 0x204080u;
    {
        const bool branch_taken_0x204080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204080u;
        // 0x204084: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204080) {
            ctx->pc = 0x203B88u;
            return;
        }
    }
    ctx->pc = 0x204088u;
}
