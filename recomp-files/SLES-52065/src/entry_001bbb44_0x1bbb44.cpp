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

// Function: entry_001bbb44
// Address: 0x1bbb44 - 0x1bbb70
void entry_001bbb44_0x1bbb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbb44_0x1bbb44");
#endif

    switch (ctx->pc) {
        case 0x1bbb50u: goto label_1bbb50;
        case 0x1bbb60u: goto label_1bbb60;
        default: break;
    }

    ctx->pc = 0x1bbb44u;

    // 0x1bbb44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbb48: 0xc06ef38  jal         func_1BBCE0
    ctx->pc = 0x1BBB48u;
    SET_GPR_U32(ctx, 31, 0x1BBB50u);
    ctx->pc = 0x1BBB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB48u;
    // 0x1bbb4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBCE0u, 0x1BBB48u, 0x1BBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB50u;
label_1bbb50:
    // 0x1bbb50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bbb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb54: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1bbb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bbb58: 0xc06ef34  jal         func_1BBCD0
    ctx->pc = 0x1BBB58u;
    SET_GPR_U32(ctx, 31, 0x1BBB60u);
    ctx->pc = 0x1BBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB58u;
    // 0x1bbb5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBCD0u, 0x1BBB58u, 0x1BBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB60u;
label_1bbb60:
    // 0x1bbb60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBB60u;
    {
        const bool branch_taken_0x1bbb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB60u;
        // 0x1bbb64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb60) {
            ctx->pc = 0x1BBB70u;
            return;
        }
    }
    ctx->pc = 0x1BBB68u;
    // 0x1bbb68: 0xc06ef08  jal         func_1BBC20
    ctx->pc = 0x1BBB68u;
    SET_GPR_U32(ctx, 31, 0x1BBB70u);
    ctx->pc = 0x1BBB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB68u;
    // 0x1bbb6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC20u, 0x1BBB68u, 0x1BBB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB70u;
}
