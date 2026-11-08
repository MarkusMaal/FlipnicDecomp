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

// Function: entry_00186be0
// Address: 0x186be0 - 0x186c94
void entry_00186be0_0x186be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186be0_0x186be0");
#endif

    switch (ctx->pc) {
        case 0x186c04u: goto label_186c04;
        case 0x186c10u: goto label_186c10;
        case 0x186c1cu: goto label_186c1c;
        case 0x186c38u: goto label_186c38;
        case 0x186c48u: goto label_186c48;
        case 0x186c58u: goto label_186c58;
        case 0x186c68u: goto label_186c68;
        case 0x186c8cu: goto label_186c8c;
        default: break;
    }

    ctx->pc = 0x186be0u;

    // 0x186be0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x186be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x186be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186be8: 0x0  nop
    ctx->pc = 0x186be8u;
    // NOP
    // 0x186bec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x186becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186bf0: 0x0  nop
    ctx->pc = 0x186bf0u;
    // NOP
    // 0x186bf4: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x186BF4u;
    {
        const bool branch_taken_0x186bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BF4u;
        // 0x186bf8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bf4) {
            ctx->pc = 0x186C94u;
            return;
        }
    }
    ctx->pc = 0x186BFCu;
    // 0x186bfc: 0xc07ef00  jal         func_1FBC00
    ctx->pc = 0x186BFCu;
    SET_GPR_U32(ctx, 31, 0x186C04u);
    ctx->pc = 0x186C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BFCu;
    // 0x186c00: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBC00u, 0x186BFCu, 0x186C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C04u;
label_186c04:
    // 0x186c04: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x186c04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x186c08: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x186C08u;
    SET_GPR_U32(ctx, 31, 0x186C10u);
    ctx->pc = 0x186C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C08u;
    // 0x186c0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x186C08u, 0x186C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C10u;
label_186c10:
    // 0x186c10: 0x4614ab02  mul.s       $f12, $f21, $f20
    ctx->pc = 0x186c10u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x186c14: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x186C14u;
    SET_GPR_U32(ctx, 31, 0x186C1Cu);
    ctx->pc = 0x186C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C14u;
    // 0x186c18: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x186C14u, 0x186C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C1Cu;
label_186c1c:
    // 0x186c1c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x186c1cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x186c20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186c28: 0x0  nop
    ctx->pc = 0x186c28u;
    // NOP
    // 0x186c2c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x186c2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x186c30: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x186C30u;
    SET_GPR_U32(ctx, 31, 0x186C38u);
    ctx->pc = 0x186C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C30u;
    // 0x186c34: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x186C30u, 0x186C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C38u;
label_186c38:
    // 0x186c38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186c40: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x186C40u;
    SET_GPR_U32(ctx, 31, 0x186C48u);
    ctx->pc = 0x186C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C40u;
    // 0x186c44: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x186C40u, 0x186C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C48u;
label_186c48:
    // 0x186c48: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x186c48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x186c4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x186c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x186c50: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x186C50u;
    SET_GPR_U32(ctx, 31, 0x186C58u);
    ctx->pc = 0x186C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C50u;
    // 0x186c54: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x186C50u, 0x186C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C58u;
label_186c58:
    // 0x186c58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186c5c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x186c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186c60: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x186C60u;
    SET_GPR_U32(ctx, 31, 0x186C68u);
    ctx->pc = 0x186C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C60u;
    // 0x186c64: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x186C60u, 0x186C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C68u;
label_186c68:
    // 0x186c68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186c74: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186c78: 0x46160303  div.s       $f12, $f0, $f22
    ctx->pc = 0x186c78u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[22]); }
    // 0x186c7c: 0x0  nop
    ctx->pc = 0x186c7cu;
    // NOP
    // 0x186c80: 0x0  nop
    ctx->pc = 0x186c80u;
    // NOP
    // 0x186c84: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x186C84u;
    SET_GPR_U32(ctx, 31, 0x186C8Cu);
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x186C84u, 0x186C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C8Cu;
label_186c8c:
    // 0x186c8c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x186C8Cu;
    {
        const bool branch_taken_0x186c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C8Cu;
        // 0x186c90: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c8c) {
            ctx->pc = 0x186CC4u;
            return;
        }
    }
    ctx->pc = 0x186C94u;
}
