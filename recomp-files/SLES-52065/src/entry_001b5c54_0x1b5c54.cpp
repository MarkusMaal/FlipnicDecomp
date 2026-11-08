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

// Function: entry_001b5c54
// Address: 0x1b5c54 - 0x1b5cbc
void entry_001b5c54_0x1b5c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5c54_0x1b5c54");
#endif

    switch (ctx->pc) {
        case 0x1b5c64u: goto label_1b5c64;
        case 0x1b5c70u: goto label_1b5c70;
        case 0x1b5c7cu: goto label_1b5c7c;
        case 0x1b5c90u: goto label_1b5c90;
        case 0x1b5c9cu: goto label_1b5c9c;
        case 0x1b5ca8u: goto label_1b5ca8;
        case 0x1b5cb4u: goto label_1b5cb4;
        default: break;
    }

    ctx->pc = 0x1b5c54u;

    // 0x1b5c54: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x1b5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1b5c58: 0x24a50dd8  addiu       $a1, $a1, 0xDD8
    ctx->pc = 0x1b5c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3544));
    // 0x1b5c5c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5C5Cu;
    SET_GPR_U32(ctx, 31, 0x1B5C64u);
    ctx->pc = 0x1B5C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C5Cu;
    // 0x1b5c60: 0x27a60108  addiu       $a2, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5C5Cu, 0x1B5C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C64u;
label_1b5c64:
    // 0x1b5c64: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5c68: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5C68u;
    SET_GPR_U32(ctx, 31, 0x1B5C70u);
    ctx->pc = 0x1B5C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C68u;
    // 0x1b5c6c: 0x27a5010c  addiu       $a1, $sp, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5C68u, 0x1B5C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C70u;
label_1b5c70:
    // 0x1b5c70: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x1b5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1b5c74: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5C74u;
    SET_GPR_U32(ctx, 31, 0x1B5C7Cu);
    ctx->pc = 0x1B5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C74u;
    // 0x1b5c78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5C74u, 0x1B5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C7Cu;
label_1b5c7c:
    // 0x1b5c7c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b5c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b5c80: 0x27a40114  addiu       $a0, $sp, 0x114
    ctx->pc = 0x1b5c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1b5c84: 0x24a50e98  addiu       $a1, $a1, 0xE98
    ctx->pc = 0x1b5c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3736));
    // 0x1b5c88: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B5C88u;
    SET_GPR_U32(ctx, 31, 0x1B5C90u);
    ctx->pc = 0x1B5C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C88u;
    // 0x1b5c8c: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B5C88u, 0x1B5C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C90u;
label_1b5c90:
    // 0x1b5c90: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b5c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1b5c94: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1B5C94u;
    SET_GPR_U32(ctx, 31, 0x1B5C9Cu);
    ctx->pc = 0x1B5C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C94u;
    // 0x1b5c98: 0x27a50114  addiu       $a1, $sp, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1B5C94u, 0x1B5C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C9Cu;
label_1b5c9c:
    // 0x1b5c9c: 0x27a40114  addiu       $a0, $sp, 0x114
    ctx->pc = 0x1b5c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1b5ca0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B5CA0u;
    SET_GPR_U32(ctx, 31, 0x1B5CA8u);
    ctx->pc = 0x1B5CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CA0u;
    // 0x1b5ca4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B5CA0u, 0x1B5CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CA8u;
label_1b5ca8:
    // 0x1b5ca8: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1b5ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1b5cac: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1B5CACu;
    SET_GPR_U32(ctx, 31, 0x1B5CB4u);
    ctx->pc = 0x1B5CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5CACu;
    // 0x1b5cb0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1B5CACu, 0x1B5CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CB4u;
label_1b5cb4:
    // 0x1b5cb4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1B5CB4u;
    {
        const bool branch_taken_0x1b5cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5cb4) {
            ctx->pc = 0x1B5D40u;
            return;
        }
    }
    ctx->pc = 0x1B5CBCu;
}
