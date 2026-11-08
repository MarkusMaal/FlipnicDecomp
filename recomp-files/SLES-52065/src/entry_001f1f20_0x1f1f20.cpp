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

// Function: entry_001f1f20
// Address: 0x1f1f20 - 0x1f1f44
void entry_001f1f20_0x1f1f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1f20_0x1f1f20");
#endif

    switch (ctx->pc) {
        case 0x1f1f2cu: goto label_1f1f2c;
        case 0x1f1f3cu: goto label_1f1f3c;
        default: break;
    }

    ctx->pc = 0x1f1f20u;

    // 0x1f1f20: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f1f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f1f24: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1F24u;
    SET_GPR_U32(ctx, 31, 0x1F1F2Cu);
    ctx->pc = 0x1F1F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F24u;
    // 0x1f1f28: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1F24u, 0x1F1F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F2Cu;
label_1f1f2c:
    // 0x1f1f2c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1F2Cu;
    {
        const bool branch_taken_0x1f1f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F2Cu;
        // 0x1f1f30: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f2c) {
            ctx->pc = 0x1F1F44u;
            return;
        }
    }
    ctx->pc = 0x1F1F34u;
    // 0x1f1f34: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1F34u;
    SET_GPR_U32(ctx, 31, 0x1F1F3Cu);
    ctx->pc = 0x1F1F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F34u;
    // 0x1f1f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1F34u, 0x1F1F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F3Cu;
label_1f1f3c:
    // 0x1f1f3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F1F3Cu;
    {
        const bool branch_taken_0x1f1f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F3Cu;
        // 0x1f1f40: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f3c) {
            ctx->pc = 0x1F1F70u;
            return;
        }
    }
    ctx->pc = 0x1F1F44u;
}
