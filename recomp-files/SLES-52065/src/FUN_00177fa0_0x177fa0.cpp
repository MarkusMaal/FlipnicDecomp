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

// Function: FUN_00177fa0
// Address: 0x177fa0 - 0x1780e4
void FUN_00177fa0_0x177fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00177fa0_0x177fa0");
#endif

    switch (ctx->pc) {
        case 0x178038u: goto label_178038;
        case 0x178070u: goto label_178070;
        default: break;
    }

    ctx->pc = 0x177fa0u;

    // 0x177fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x177fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x177fa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x177fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x177fa8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x177fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x177fac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x177facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x177fb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x177fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x177fb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x177fb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x177fb8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x177fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x177fbc: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x177fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x177fc0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x177fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x177fc4: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x177FC4u;
    {
        const bool branch_taken_0x177fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FC4u;
        // 0x177fc8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fc4) {
            ctx->pc = 0x1780A8u;
            goto label_1780a8;
        }
    }
    ctx->pc = 0x177FCCu;
    // 0x177fcc: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x177fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x177fd0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x177fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x177fd4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x177fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177fd8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x177FD8u;
    {
        const bool branch_taken_0x177fd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x177FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FD8u;
        // 0x177fdc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fd8) {
            ctx->pc = 0x177FECu;
            goto label_177fec;
        }
    }
    ctx->pc = 0x177FE0u;
    // 0x177fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x177fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177fe4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x177FE4u;
    {
        const bool branch_taken_0x177fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FE4u;
        // 0x177fe8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fe4) {
            ctx->pc = 0x178004u;
            goto label_178004;
        }
    }
    ctx->pc = 0x177FECu;
label_177fec:
    // 0x177fec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x177fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x177ff0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x177ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x177ff4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x177ff4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177ff8: 0x0  nop
    ctx->pc = 0x177ff8u;
    // NOP
    // 0x177ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x178000: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x178000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_178004:
    // 0x178004: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x178004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x178008: 0x3c04c0f0  lui         $a0, 0xC0F0
    ctx->pc = 0x178008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49392 << 16));
    // 0x17800c: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x17800cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x178010: 0x3c0340f0  lui         $v1, 0x40F0
    ctx->pc = 0x178010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16624 << 16));
    // 0x178014: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x178014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x178018: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x178018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x17801c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x17801cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x178020: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x178020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178024: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x178024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x178028: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x178028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17802c: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x17802cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x178030: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x178030u;
    {
        const bool branch_taken_0x178030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178030u;
        // 0x178034: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178030) {
            ctx->pc = 0x17808Cu;
            goto label_17808c;
        }
    }
    ctx->pc = 0x178038u;
label_178038:
    // 0x178038: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x178038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17803c: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x17803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
    // 0x178040: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x178040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178044: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x178044u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178048: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178048u;
    {
        const bool branch_taken_0x178048 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x17804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178048u;
        // 0x17804c: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178048) {
            ctx->pc = 0x17805Cu;
            goto label_17805c;
        }
    }
    ctx->pc = 0x178050u;
    // 0x178050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x178050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178054u;
    {
        const bool branch_taken_0x178054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178054u;
        // 0x178058: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178054) {
            ctx->pc = 0x178068u;
            goto label_178068;
        }
    }
    ctx->pc = 0x17805Cu;
label_17805c:
    // 0x17805c: 0x0  nop
    ctx->pc = 0x17805cu;
    // NOP
    // 0x178060: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x178060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x178064: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x178064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_178068:
    // 0x178068: 0xc07ef92  jal         func_1FBE48
    ctx->pc = 0x178068u;
    SET_GPR_U32(ctx, 31, 0x178070u);
    ctx->pc = 0x1FBE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE48u, 0x178068u, 0x178070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178070u;
label_178070:
    // 0x178070: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x178070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x178074: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x178074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x178078: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x178078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17807c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17807cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x178080: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x178080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178084: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x178084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x178088: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x178088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
label_17808c:
    // 0x17808c: 0x0  nop
    ctx->pc = 0x17808cu;
    // NOP
    // 0x178090: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x178090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x178094: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x178094u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x178098: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x178098u;
    {
        const bool branch_taken_0x178098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178098) {
            ctx->pc = 0x178038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178038;
        }
    }
    ctx->pc = 0x1780A0u;
    // 0x1780a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1780A0u;
    {
        const bool branch_taken_0x1780a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1780A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780A0u;
        // 0x1780a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1780a0) {
            ctx->pc = 0x1780CCu;
            goto label_1780cc;
        }
    }
    ctx->pc = 0x1780A8u;
label_1780a8:
    // 0x1780a8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1780a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1780ac: 0x3c04c0f0  lui         $a0, 0xC0F0
    ctx->pc = 0x1780acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49392 << 16));
    // 0x1780b0: 0xe64c001c  swc1        $f12, 0x1C($s2)
    ctx->pc = 0x1780b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1780b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1780b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1780b8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1780b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1780bc: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x1780bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x1780c0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x1780c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x1780c4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1780c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1780c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1780c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1780cc:
    // 0x1780cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1780ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1780d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1780d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1780d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1780d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1780d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1780d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1780dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1780DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1780E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780DCu;
        // 0x1780e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1780DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1780E4u;
}
