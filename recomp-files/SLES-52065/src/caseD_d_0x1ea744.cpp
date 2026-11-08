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

// Function: caseD_d
// Address: 0x1ea744 - 0x1ea784
void caseD_d_0x1ea744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1ea744");
#endif

    switch (ctx->pc) {
        case 0x1ea754u: goto label_1ea754;
        default: break;
    }

    ctx->pc = 0x1ea744u;

    // 0x1ea744: 0x0  nop
    ctx->pc = 0x1ea744u;
    // NOP
    // 0x1ea748: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea74c: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA74Cu;
    SET_GPR_U32(ctx, 31, 0x1EA754u);
    ctx->pc = 0x1EA750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA74Cu;
    // 0x1ea750: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA74Cu, 0x1EA754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA754u;
label_1ea754:
    // 0x1ea754: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x1ea754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea758: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1ea758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ea75c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ea75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ea760: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1ea760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ea764: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA764u;
    {
        const bool branch_taken_0x1ea764 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA764u;
        // 0x1ea768: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea764) {
            ctx->pc = 0x1EA790u;
            return;
        }
    }
    ctx->pc = 0x1EA76Cu;
    // 0x1ea76c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ea76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea770: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1ea770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1ea774: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA774u;
    {
        const bool branch_taken_0x1ea774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ea774) {
            ctx->pc = 0x1EA784u;
            return;
        }
    }
    ctx->pc = 0x1EA77Cu;
    // 0x1ea77c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA77Cu;
    {
        const bool branch_taken_0x1ea77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA77Cu;
        // 0x1ea780: 0xae860008  sw          $a2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea77c) {
            ctx->pc = 0x1EA790u;
            return;
        }
    }
    ctx->pc = 0x1EA784u;
}
