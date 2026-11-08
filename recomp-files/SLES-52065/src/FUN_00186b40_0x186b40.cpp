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

// Function: FUN_00186b40
// Address: 0x186b40 - 0x186ce4
void FUN_00186b40_0x186b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186b40_0x186b40");
#endif

    switch (ctx->pc) {
        case 0x186bc8u: goto label_186bc8;
        case 0x186bdcu: goto label_186bdc;
        case 0x186c04u: goto label_186c04;
        case 0x186c10u: goto label_186c10;
        case 0x186c1cu: goto label_186c1c;
        case 0x186c38u: goto label_186c38;
        case 0x186c48u: goto label_186c48;
        case 0x186c58u: goto label_186c58;
        case 0x186c68u: goto label_186c68;
        case 0x186c8cu: goto label_186c8c;
        case 0x186ca0u: goto label_186ca0;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cc0u: goto label_186cc0;
        default: break;
    }

    ctx->pc = 0x186b40u;

    // 0x186b40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x186b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x186b44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x186b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x186b48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186b4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x186b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x186b50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x186b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x186b54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b58: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x186b58u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x186b5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x186b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b60: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x186b60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x186b64: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x186b64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x186b68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x186b68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x186b6c: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x186b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x186b70: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x186b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186b74: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x186b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x186b78: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x186b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x186b7c: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x186b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x186b80: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x186b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x186b84: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x186b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186b88: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x186b88u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x186b8c: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x186b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186b90: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x186b90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x186b94: 0x4605315c  madd.s      $f5, $f6, $f5
    ctx->pc = 0x186b94u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[5]));
    // 0x186b98: 0x46051818  adda.s      $f3, $f5
    ctx->pc = 0x186b98u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[5]));
    // 0x186b9c: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x186b9cu;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x186ba0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x186ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186ba4: 0x0  nop
    ctx->pc = 0x186ba4u;
    // NOP
    // 0x186ba8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x186BA8u;
    {
        const bool branch_taken_0x186ba8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BA8u;
        // 0x186bac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ba8) {
            ctx->pc = 0x186BD0u;
            goto label_186bd0;
        }
    }
    ctx->pc = 0x186BB0u;
    // 0x186bb0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x186bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x186bb4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x186bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x186bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x186bbc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186bc0: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x186BC0u;
    SET_GPR_U32(ctx, 31, 0x186BC8u);
    ctx->pc = 0x186BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BC0u;
    // 0x186bc4: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x186BC0u, 0x186BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186BC8u;
label_186bc8:
    // 0x186bc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x186BC8u;
    {
        const bool branch_taken_0x186bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BC8u;
        // 0x186bcc: 0x3c023f73  lui         $v0, 0x3F73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bc8) {
            ctx->pc = 0x186BE0u;
            goto label_186be0;
        }
    }
    ctx->pc = 0x186BD0u;
label_186bd0:
    // 0x186bd0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x186bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bd4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x186BD4u;
    SET_GPR_U32(ctx, 31, 0x186BDCu);
    ctx->pc = 0x186BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BD4u;
    // 0x186bd8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x186BD4u, 0x186BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186BDCu;
label_186bdc:
    // 0x186bdc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x186bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_186be0:
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
            goto label_186c94;
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
            goto label_186cc4;
        }
    }
    ctx->pc = 0x186C94u;
label_186c94:
    // 0x186c94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186c98: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x186C98u;
    SET_GPR_U32(ctx, 31, 0x186CA0u);
    ctx->pc = 0x186C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C98u;
    // 0x186c9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x186C98u, 0x186CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CA0u;
label_186ca0:
    // 0x186ca0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x186ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186ca4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x186ca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x186ca8: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x186CA8u;
    SET_GPR_U32(ctx, 31, 0x186CB0u);
    ctx->pc = 0x186CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CA8u;
    // 0x186cac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x186CA8u, 0x186CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CB0u;
label_186cb0:
    // 0x186cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186cb8: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x186CB8u;
    SET_GPR_U32(ctx, 31, 0x186CC0u);
    ctx->pc = 0x186CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CB8u;
    // 0x186cbc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x186CB8u, 0x186CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CC0u;
label_186cc0:
    // 0x186cc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x186cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_186cc4:
    // 0x186cc4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x186cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x186cc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x186cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186ccc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x186cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x186cd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186cd4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x186cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x186cd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x186cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x186CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CDCu;
        // 0x186ce0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186CE4u;
}
