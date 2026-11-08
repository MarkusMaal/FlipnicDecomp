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

// Function: entry_0011fc2c
// Address: 0x11fc2c - 0x11fca4
void entry_0011fc2c_0x11fc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fc2c_0x11fc2c");
#endif

    switch (ctx->pc) {
        case 0x11fc3cu: goto label_11fc3c;
        case 0x11fc4cu: goto label_11fc4c;
        case 0x11fc64u: goto label_11fc64;
        case 0x11fc78u: goto label_11fc78;
        case 0x11fc88u: goto label_11fc88;
        case 0x11fc94u: goto label_11fc94;
        case 0x11fc9cu: goto label_11fc9c;
        default: break;
    }

    ctx->pc = 0x11fc2cu;

label_11fc2c:
    // 0x11fc2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_11fc30:
    // 0x11fc30: 0x2484b510  addiu       $a0, $a0, -0x4AF0
    ctx->pc = 0x11fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948112));
label_11fc34:
    // 0x11fc34: 0xc048198  jal         func_120660
label_11fc38:
    if (ctx->pc == 0x11FC38u) {
        ctx->pc = 0x11FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC34u;
        // 0x11fc38: 0x24a5e920  addiu       $a1, $a1, -0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC3Cu;
        goto label_11fc3c;
    }
    ctx->pc = 0x11FC34u;
    SET_GPR_U32(ctx, 31, 0x11FC3Cu);
    ctx->pc = 0x11FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC34u;
    // 0x11fc38: 0x24a5e920  addiu       $a1, $a1, -0x16E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120660u, 0x11FC34u, 0x11FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC3Cu;
label_11fc3c:
    // 0x11fc3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11fc40:
    // 0x11fc40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11fc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fc44:
    // 0x11fc44: 0xc04805c  jal         func_120170
label_11fc48:
    if (ctx->pc == 0x11FC48u) {
        ctx->pc = 0x11FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC44u;
        // 0x11fc48: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC4Cu;
        goto label_11fc4c;
    }
    ctx->pc = 0x11FC44u;
    SET_GPR_U32(ctx, 31, 0x11FC4Cu);
    ctx->pc = 0x11FC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC44u;
    // 0x11fc48: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120170u, 0x11FC44u, 0x11FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC4Cu;
label_11fc4c:
    // 0x11fc4c: 0x9382840c  lbu         $v0, -0x7BF4($gp)
    ctx->pc = 0x11fc4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935564)));
label_11fc50:
    // 0x11fc50: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x11fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_11fc54:
    // 0x11fc54: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x11fc54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11fc58:
    // 0x11fc58: 0x83a5003c  lb          $a1, 0x3C($sp)
    ctx->pc = 0x11fc58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
label_11fc5c:
    // 0x11fc5c: 0xc04815c  jal         func_120570
label_11fc60:
    if (ctx->pc == 0x11FC60u) {
        ctx->pc = 0x11FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC5Cu;
        // 0x11fc60: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC64u;
        goto label_11fc64;
    }
    ctx->pc = 0x11FC5Cu;
    SET_GPR_U32(ctx, 31, 0x11FC64u);
    ctx->pc = 0x11FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC5Cu;
    // 0x11fc60: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120570u, 0x11FC5Cu, 0x11FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC64u;
label_11fc64:
    // 0x11fc64: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x11fc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11fc68:
    // 0x11fc68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fc6c:
    // 0x11fc6c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x11fc6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_11fc70:
    // 0x11fc70: 0x320f809  jalr        $t9
label_11fc74:
    if (ctx->pc == 0x11FC74u) {
        ctx->pc = 0x11FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC70u;
        // 0x11fc74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC78u;
        goto label_11fc78;
    }
    ctx->pc = 0x11FC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11FC78u);
        ctx->pc = 0x11FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC70u;
        // 0x11fc74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC70u, 0x11FC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11FC78u;
label_11fc78:
    // 0x11fc78: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x11fc78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11fc7c:
    // 0x11fc7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11fc80:
    // 0x11fc80: 0xc048044  jal         func_120110
label_11fc84:
    if (ctx->pc == 0x11FC84u) {
        ctx->pc = 0x11FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC80u;
        // 0x11fc84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC88u;
        goto label_11fc88;
    }
    ctx->pc = 0x11FC80u;
    SET_GPR_U32(ctx, 31, 0x11FC88u);
    ctx->pc = 0x11FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC80u;
    // 0x11fc84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x11FC80u, 0x11FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC88u;
label_11fc88:
    // 0x11fc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11fc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11fc8c:
    // 0x11fc8c: 0xc048254  jal         func_120950
label_11fc90:
    if (ctx->pc == 0x11FC90u) {
        ctx->pc = 0x11FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC8Cu;
        // 0x11fc90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC94u;
        goto label_11fc94;
    }
    ctx->pc = 0x11FC8Cu;
    SET_GPR_U32(ctx, 31, 0x11FC94u);
    ctx->pc = 0x11FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC8Cu;
    // 0x11fc90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120950u, 0x11FC8Cu, 0x11FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC94u;
label_11fc94:
    // 0x11fc94: 0xc048208  jal         func_120820
label_11fc98:
    if (ctx->pc == 0x11FC98u) {
        ctx->pc = 0x11FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC94u;
        // 0x11fc98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FC9Cu;
        goto label_11fc9c;
    }
    ctx->pc = 0x11FC94u;
    SET_GPR_U32(ctx, 31, 0x11FC9Cu);
    ctx->pc = 0x11FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC94u;
    // 0x11fc98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x11FC94u, 0x11FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC9Cu;
label_11fc9c:
    // 0x11fc9c: 0x10000115  b           . + 4 + (0x115 << 2)
label_11fca0:
    if (ctx->pc == 0x11FCA0u) {
        ctx->pc = 0x11FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC9Cu;
        // 0x11fca0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11FCA4u;
        goto label_fallthrough_0x11fc9c;
    }
    ctx->pc = 0x11FC9Cu;
    {
        const bool branch_taken_0x11fc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC9Cu;
        // 0x11fca0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc9c) {
            ctx->pc = 0x1200F4u;
            return;
        }
    }
label_fallthrough_0x11fc9c:
    ctx->pc = 0x11FCA4u;
}
