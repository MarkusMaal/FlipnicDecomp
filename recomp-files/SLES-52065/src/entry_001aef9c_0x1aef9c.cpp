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

// Function: entry_001aef9c
// Address: 0x1aef9c - 0x1aefc8
void entry_001aef9c_0x1aef9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aef9c_0x1aef9c");
#endif

    switch (ctx->pc) {
        case 0x1aefb0u: goto label_1aefb0;
        default: break;
    }

    ctx->pc = 0x1aef9cu;

    // 0x1aef9c: 0x0  nop
    ctx->pc = 0x1aef9cu;
    // NOP
    // 0x1aefa0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1aefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1aefa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aefa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1aefa8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1AEFA8u;
    SET_GPR_U32(ctx, 31, 0x1AEFB0u);
    ctx->pc = 0x1AEFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFA8u;
    // 0x1aefac: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1AEFA8u, 0x1AEFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEFB0u;
label_1aefb0:
    // 0x1aefb0: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1aefb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x1aefb4: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1aefb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1aefb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aefb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aefbc: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1AEFBCu;
    {
        const bool branch_taken_0x1aefbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFBCu;
        // 0x1aefc0: 0xae800014  sw          $zero, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefbc) {
            ctx->pc = 0x1AF058u;
            return;
        }
    }
    ctx->pc = 0x1AEFC4u;
    // 0x1aefc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aefc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aefc8u;
}
