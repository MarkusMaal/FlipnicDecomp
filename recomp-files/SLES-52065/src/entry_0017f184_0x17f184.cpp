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

// Function: entry_0017f184
// Address: 0x17f184 - 0x17f1d4
void entry_0017f184_0x17f184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f184_0x17f184");
#endif

    switch (ctx->pc) {
        case 0x17f1a0u: goto label_17f1a0;
        case 0x17f1b0u: goto label_17f1b0;
        case 0x17f1bcu: goto label_17f1bc;
        default: break;
    }

    ctx->pc = 0x17f184u;

    // 0x17f184: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x17f184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x17f188: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x17f188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x17f18c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x17f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x17f190: 0x26a5000c  addiu       $a1, $s5, 0xC
    ctx->pc = 0x17f190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x17f194: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x17f194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x17f198: 0xc05fcac  jal         func_17F2B0
    ctx->pc = 0x17F198u;
    SET_GPR_U32(ctx, 31, 0x17F1A0u);
    ctx->pc = 0x17F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F198u;
    // 0x17f19c: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F2B0u, 0x17F198u, 0x17F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1A0u;
label_17f1a0:
    // 0x17f1a0: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x17f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x17f1a4: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x17f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x17f1a8: 0xc05faf0  jal         func_17EBC0
    ctx->pc = 0x17F1A8u;
    SET_GPR_U32(ctx, 31, 0x17F1B0u);
    ctx->pc = 0x17F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1A8u;
    // 0x17f1ac: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBC0u, 0x17F1A8u, 0x17F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1B0u;
label_17f1b0:
    // 0x17f1b0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17f1b4: 0xc05fb8c  jal         func_17EE30
    ctx->pc = 0x17F1B4u;
    SET_GPR_U32(ctx, 31, 0x17F1BCu);
    ctx->pc = 0x17F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1B4u;
    // 0x17f1b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE30u, 0x17F1B4u, 0x17F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1BCu;
label_17f1bc:
    // 0x17f1bc: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x17f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x17f1c0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x17f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17f1c4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17F1C4u;
    {
        const bool branch_taken_0x17f1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f1c4) {
            ctx->pc = 0x17F20Cu;
            return;
        }
    }
    ctx->pc = 0x17F1CCu;
    // 0x17f1cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F1CCu;
    {
        const bool branch_taken_0x17f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f1cc) {
            ctx->pc = 0x17F1F8u;
            return;
        }
    }
    ctx->pc = 0x17F1D4u;
}
