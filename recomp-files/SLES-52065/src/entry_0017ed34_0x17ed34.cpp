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

// Function: entry_0017ed34
// Address: 0x17ed34 - 0x17ed9c
void entry_0017ed34_0x17ed34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ed34_0x17ed34");
#endif

    switch (ctx->pc) {
        case 0x17ed3cu: goto label_17ed3c;
        case 0x17ed4cu: goto label_17ed4c;
        case 0x17ed68u: goto label_17ed68;
        case 0x17ed78u: goto label_17ed78;
        case 0x17ed84u: goto label_17ed84;
        default: break;
    }

    ctx->pc = 0x17ed34u;

    // 0x17ed34: 0xc05fb90  jal         func_17EE40
    ctx->pc = 0x17ED34u;
    SET_GPR_U32(ctx, 31, 0x17ED3Cu);
    ctx->pc = 0x17EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE40u, 0x17ED34u, 0x17ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED3Cu;
label_17ed3c:
    // 0x17ed3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x17ed3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ed40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed44: 0xc05fb94  jal         func_17EE50
    ctx->pc = 0x17ED44u;
    SET_GPR_U32(ctx, 31, 0x17ED4Cu);
    ctx->pc = 0x17ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED44u;
    // 0x17ed48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE50u, 0x17ED44u, 0x17ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED4Cu;
label_17ed4c:
    // 0x17ed4c: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x17ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x17ed50: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x17ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x17ed54: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x17ed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x17ed58: 0x26a5000c  addiu       $a1, $s5, 0xC
    ctx->pc = 0x17ed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x17ed5c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x17ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x17ed60: 0xc05fcac  jal         func_17F2B0
    ctx->pc = 0x17ED60u;
    SET_GPR_U32(ctx, 31, 0x17ED68u);
    ctx->pc = 0x17ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED60u;
    // 0x17ed64: 0x27a60088  addiu       $a2, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F2B0u, 0x17ED60u, 0x17ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED68u;
label_17ed68:
    // 0x17ed68: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x17ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x17ed6c: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x17ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x17ed70: 0xc05faf0  jal         func_17EBC0
    ctx->pc = 0x17ED70u;
    SET_GPR_U32(ctx, 31, 0x17ED78u);
    ctx->pc = 0x17ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED70u;
    // 0x17ed74: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBC0u, 0x17ED70u, 0x17ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED78u;
label_17ed78:
    // 0x17ed78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed7c: 0xc05fb8c  jal         func_17EE30
    ctx->pc = 0x17ED7Cu;
    SET_GPR_U32(ctx, 31, 0x17ED84u);
    ctx->pc = 0x17ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED7Cu;
    // 0x17ed80: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE30u, 0x17ED7Cu, 0x17ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED84u;
label_17ed84:
    // 0x17ed84: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x17ed88: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17ed8c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17ED8Cu;
    {
        const bool branch_taken_0x17ed8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17ed8c) {
            ctx->pc = 0x17EDD4u;
            return;
        }
    }
    ctx->pc = 0x17ED94u;
    // 0x17ed94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17ED94u;
    {
        const bool branch_taken_0x17ed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed94) {
            ctx->pc = 0x17EDBCu;
            return;
        }
    }
    ctx->pc = 0x17ED9Cu;
}
