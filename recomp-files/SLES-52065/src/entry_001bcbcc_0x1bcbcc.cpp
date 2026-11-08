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

// Function: entry_001bcbcc
// Address: 0x1bcbcc - 0x1bcbf4
void entry_001bcbcc_0x1bcbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcbcc_0x1bcbcc");
#endif

    switch (ctx->pc) {
        case 0x1bcbd4u: goto label_1bcbd4;
        default: break;
    }

    ctx->pc = 0x1bcbccu;

    // 0x1bcbcc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BCBCCu;
    SET_GPR_U32(ctx, 31, 0x1BCBD4u);
    ctx->pc = 0x1BCBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBCCu;
    // 0x1bcbd0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BCBCCu, 0x1BCBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBD4u;
label_1bcbd4:
    // 0x1bcbd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCBD4u;
    {
        const bool branch_taken_0x1bcbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBD4u;
        // 0x1bcbd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbd4) {
            ctx->pc = 0x1BCBF8u;
            return;
        }
    }
    ctx->pc = 0x1BCBDCu;
    // 0x1bcbdc: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x1bcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcbe0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bcbe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bcbe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCBE4u;
    {
        const bool branch_taken_0x1bcbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBE4u;
        // 0x1bcbe8: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbe4) {
            ctx->pc = 0x1BCBF4u;
            return;
        }
    }
    ctx->pc = 0x1BCBECu;
    // 0x1bcbec: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCBECu;
    SET_GPR_U32(ctx, 31, 0x1BCBF4u);
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCBECu, 0x1BCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBF4u;
}
