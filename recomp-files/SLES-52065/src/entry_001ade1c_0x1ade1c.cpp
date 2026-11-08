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

// Function: entry_001ade1c
// Address: 0x1ade1c - 0x1ade98
void entry_001ade1c_0x1ade1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ade1c_0x1ade1c");
#endif

    switch (ctx->pc) {
        case 0x1ade24u: goto label_1ade24;
        case 0x1ade30u: goto label_1ade30;
        case 0x1ade44u: goto label_1ade44;
        case 0x1ade54u: goto label_1ade54;
        case 0x1ade74u: goto label_1ade74;
        case 0x1ade8cu: goto label_1ade8c;
        default: break;
    }

    ctx->pc = 0x1ade1cu;

    // 0x1ade1c: 0xc055c40  jal         func_157100
    ctx->pc = 0x1ADE1Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE24u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1ADE1Cu, 0x1ADE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE24u;
label_1ade24:
    // 0x1ade24: 0x26240700  addiu       $a0, $s1, 0x700
    ctx->pc = 0x1ade24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1ade28: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1ADE28u;
    SET_GPR_U32(ctx, 31, 0x1ADE30u);
    ctx->pc = 0x1ADE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE28u;
    // 0x1ade2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1ADE28u, 0x1ADE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE30u;
label_1ade30:
    // 0x1ade30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ade30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ade34: 0x26240700  addiu       $a0, $s1, 0x700
    ctx->pc = 0x1ade34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1ade38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ade38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1ade3c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1ADE3Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE44u);
    ctx->pc = 0x1ADE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE3Cu;
    // 0x1ade40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1ADE3Cu, 0x1ADE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE44u;
label_1ade44:
    // 0x1ade44: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ade44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ade48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ade48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ade4c: 0xc062858  jal         func_18A160
    ctx->pc = 0x1ADE4Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE54u);
    ctx->pc = 0x1ADE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE4Cu;
    // 0x1ade50: 0x26240700  addiu       $a0, $s1, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1ADE4Cu, 0x1ADE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE54u;
label_1ade54:
    // 0x1ade54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ade54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ade58: 0x26240700  addiu       $a0, $s1, 0x700
    ctx->pc = 0x1ade58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1ade5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ade5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ade60: 0x0  nop
    ctx->pc = 0x1ade60u;
    // NOP
    // 0x1ade64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ade64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1ade68: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1ade68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1ade6c: 0xc062860  jal         func_18A180
    ctx->pc = 0x1ADE6Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE74u);
    ctx->pc = 0x1ADE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE6Cu;
    // 0x1ade70: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1ADE6Cu, 0x1ADE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE74u;
label_1ade74:
    // 0x1ade74: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1ade74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1ade78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ade78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ade7c: 0x8e270690  lw          $a3, 0x690($s1)
    ctx->pc = 0x1ade7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1ade80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ade80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ade84: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1ADE84u;
    SET_GPR_U32(ctx, 31, 0x1ADE8Cu);
    ctx->pc = 0x1ADE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE84u;
    // 0x1ade88: 0x24a50aa8  addiu       $a1, $a1, 0xAA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1ADE84u, 0x1ADE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE8Cu;
label_1ade8c:
    // 0x1ade8c: 0x26240700  addiu       $a0, $s1, 0x700
    ctx->pc = 0x1ade8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1ade90: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1ADE90u;
    SET_GPR_U32(ctx, 31, 0x1ADE98u);
    ctx->pc = 0x1ADE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE90u;
    // 0x1ade94: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1ADE90u, 0x1ADE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE98u;
}
