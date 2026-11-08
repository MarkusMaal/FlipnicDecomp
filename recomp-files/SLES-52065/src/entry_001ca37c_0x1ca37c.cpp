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

// Function: entry_001ca37c
// Address: 0x1ca37c - 0x1ca3ac
void entry_001ca37c_0x1ca37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca37c_0x1ca37c");
#endif

    switch (ctx->pc) {
        case 0x1ca388u: goto label_1ca388;
        case 0x1ca390u: goto label_1ca390;
        case 0x1ca3a0u: goto label_1ca3a0;
        case 0x1ca3a8u: goto label_1ca3a8;
        default: break;
    }

    ctx->pc = 0x1ca37cu;

    // 0x1ca37c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ca37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca380: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA380u;
    SET_GPR_U32(ctx, 31, 0x1CA388u);
    ctx->pc = 0x1CA384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA380u;
    // 0x1ca384: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA380u, 0x1CA388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA388u;
label_1ca388:
    // 0x1ca388: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA388u;
    SET_GPR_U32(ctx, 31, 0x1CA390u);
    ctx->pc = 0x1CA38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA388u;
    // 0x1ca38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA388u, 0x1CA390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA390u;
label_1ca390:
    // 0x1ca390: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1ca390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ca394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca398: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA398u;
    SET_GPR_U32(ctx, 31, 0x1CA3A0u);
    ctx->pc = 0x1CA39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA398u;
    // 0x1ca39c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA398u, 0x1CA3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3A0u;
label_1ca3a0:
    // 0x1ca3a0: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CA3A0u;
    SET_GPR_U32(ctx, 31, 0x1CA3A8u);
    ctx->pc = 0x1CA3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3A0u;
    // 0x1ca3a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CA3A0u, 0x1CA3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3A8u;
label_1ca3a8:
    // 0x1ca3a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1ca3acu;
}
