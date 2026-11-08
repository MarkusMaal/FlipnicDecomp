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

// Function: entry_00121a0c
// Address: 0x121a0c - 0x121a90
void entry_00121a0c_0x121a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121a0c_0x121a0c");
#endif

    switch (ctx->pc) {
        case 0x121a14u: goto label_121a14;
        case 0x121a20u: goto label_121a20;
        case 0x121a30u: goto label_121a30;
        case 0x121a40u: goto label_121a40;
        case 0x121a50u: goto label_121a50;
        case 0x121a68u: goto label_121a68;
        case 0x121a74u: goto label_121a74;
        case 0x121a7cu: goto label_121a7c;
        case 0x121a88u: goto label_121a88;
        default: break;
    }

    ctx->pc = 0x121a0cu;

    // 0x121a0c: 0xc048f14  jal         func_123C50
    ctx->pc = 0x121A0Cu;
    SET_GPR_U32(ctx, 31, 0x121A14u);
    ctx->pc = 0x121A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A0Cu;
    // 0x121a10: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123C50u, 0x121A0Cu, 0x121A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A14u;
label_121a14:
    // 0x121a14: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x121a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x121a18: 0xc048920  jal         func_122480
    ctx->pc = 0x121A18u;
    SET_GPR_U32(ctx, 31, 0x121A20u);
    ctx->pc = 0x121A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A18u;
    // 0x121a1c: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x121A18u, 0x121A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A20u;
label_121a20:
    // 0x121a20: 0x27b10154  addiu       $s1, $sp, 0x154
    ctx->pc = 0x121a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x121a24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x121a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121a28: 0xc080748  jal         func_201D20
    ctx->pc = 0x121A28u;
    SET_GPR_U32(ctx, 31, 0x121A30u);
    ctx->pc = 0x121A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A28u;
    // 0x121a2c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x121A28u, 0x121A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A30u;
label_121a30:
    // 0x121a30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x121a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a34: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x121a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x121a38: 0xc048884  jal         func_122210
    ctx->pc = 0x121A38u;
    SET_GPR_U32(ctx, 31, 0x121A40u);
    ctx->pc = 0x121A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A38u;
    // 0x121a3c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x121A38u, 0x121A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A40u;
label_121a40:
    // 0x121a40: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x121a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x121a44: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x121a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x121a48: 0xc0488c8  jal         func_122320
    ctx->pc = 0x121A48u;
    SET_GPR_U32(ctx, 31, 0x121A50u);
    ctx->pc = 0x121A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A48u;
    // 0x121a4c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x121A48u, 0x121A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A50u;
label_121a50:
    // 0x121a50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x121a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121a54: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x121a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x121a58: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x121a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x121a5c: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x121a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x121a60: 0xc048a5c  jal         func_122970
    ctx->pc = 0x121A60u;
    SET_GPR_U32(ctx, 31, 0x121A68u);
    ctx->pc = 0x121A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A60u;
    // 0x121a64: 0xafa2017c  sw          $v0, 0x17C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x121A60u, 0x121A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A68u;
label_121a68:
    // 0x121a68: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x121a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x121a6c: 0xc04619c  jal         func_118670
    ctx->pc = 0x121A6Cu;
    SET_GPR_U32(ctx, 31, 0x121A74u);
    ctx->pc = 0x121A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A6Cu;
    // 0x121a70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121A6Cu, 0x121A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A74u;
label_121a74:
    // 0x121a74: 0xc049270  jal         func_1249C0
    ctx->pc = 0x121A74u;
    SET_GPR_U32(ctx, 31, 0x121A7Cu);
    ctx->pc = 0x121A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A74u;
    // 0x121a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x121A74u, 0x121A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A7Cu;
label_121a7c:
    // 0x121a7c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x121a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x121a80: 0xc04619c  jal         func_118670
    ctx->pc = 0x121A80u;
    SET_GPR_U32(ctx, 31, 0x121A88u);
    ctx->pc = 0x121A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A80u;
    // 0x121a84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121A80u, 0x121A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A88u;
label_121a88:
    // 0x121a88: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x121A88u;
    {
        const bool branch_taken_0x121a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A88u;
        // 0x121a8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a88) {
            ctx->pc = 0x121C90u;
            return;
        }
    }
    ctx->pc = 0x121A90u;
}
