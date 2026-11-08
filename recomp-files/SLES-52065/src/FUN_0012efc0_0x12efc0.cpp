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

// Function: FUN_0012efc0
// Address: 0x12efc0 - 0x12f130
void FUN_0012efc0_0x12efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012efc0_0x12efc0");
#endif

    switch (ctx->pc) {
        case 0x12f030u: goto label_12f030;
        case 0x12f038u: goto label_12f038;
        case 0x12f040u: goto label_12f040;
        case 0x12f064u: goto label_12f064;
        case 0x12f06cu: goto label_12f06c;
        case 0x12f100u: goto label_12f100;
        default: break;
    }

    ctx->pc = 0x12efc0u;

    // 0x12efc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12efc4: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x12efc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x12efc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12efcc: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x12efccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x12efd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12efd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12efd4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x12efd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x12efd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12efdc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x12efdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x12efe0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12efe4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x12efe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x12efe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12efec: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x12efecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x12eff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12eff4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12eff4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12eff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12effc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12effcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f000: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f004: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12f004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f008: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x12f008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f00c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x12f00cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x12f010: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F010u;
    {
        const bool branch_taken_0x12f010 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F010u;
        // 0x12f014: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f010) {
            ctx->pc = 0x12F038u;
            goto label_12f038;
        }
    }
    ctx->pc = 0x12F018u;
    // 0x12f018: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x12f018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x12f01c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12f01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12f020: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12f020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x12f024: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12f024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12f028: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12F028u;
    SET_GPR_U32(ctx, 31, 0x12F030u);
    ctx->pc = 0x12F02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F028u;
    // 0x12f02c: 0x24a5ed30  addiu       $a1, $a1, -0x12D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12F028u, 0x12F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F030u;
label_12f030:
    // 0x12f030: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12F030u;
    SET_GPR_U32(ctx, 31, 0x12F038u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12F030u, 0x12F038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F038u;
label_12f038:
    // 0x12f038: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x12F038u;
    SET_GPR_U32(ctx, 31, 0x12F040u);
    ctx->pc = 0x12F03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F038u;
    // 0x12f03c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12F038u, 0x12F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F040u;
label_12f040:
    // 0x12f040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f044: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x12F044u;
    {
        const bool branch_taken_0x12f044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F044u;
        // 0x12f048: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f044) {
            ctx->pc = 0x12F070u;
            goto label_12f070;
        }
    }
    ctx->pc = 0x12F04Cu;
    // 0x12f04c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x12f04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x12f050: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12f050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12f054: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12f054u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x12f058: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12f058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12f05c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12F05Cu;
    SET_GPR_U32(ctx, 31, 0x12F064u);
    ctx->pc = 0x12F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F05Cu;
    // 0x12f060: 0x24a5ecf0  addiu       $a1, $a1, -0x1310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12F05Cu, 0x12F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F064u;
label_12f064:
    // 0x12f064: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12F064u;
    SET_GPR_U32(ctx, 31, 0x12F06Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12F064u, 0x12F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F06Cu;
label_12f06c:
    // 0x12f06c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x12f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_12f070:
    // 0x12f070: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12F070u;
    {
        const bool branch_taken_0x12f070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f070) {
            ctx->pc = 0x12F0C0u;
            goto label_12f0c0;
        }
    }
    ctx->pc = 0x12F078u;
    // 0x12f078: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f07c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12f080: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x12f080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12f084: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x12f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f088: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x12f088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f08c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x12f08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f090: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x12f090u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12f094: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x12f094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12f098: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x12f098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x12f09c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x12f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x12f0a0: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x12f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12f0a4: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x12f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f0a8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x12f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f0ac: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x12f0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f0b0: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x12f0b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x12f0b4: 0xe4620018  swc1        $f2, 0x18($v1)
    ctx->pc = 0x12f0b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x12f0b8: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x12f0b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x12f0bc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x12f0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_12f0c0:
    // 0x12f0c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12f0c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12f0c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f0cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12f0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12f0d0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x12f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x12f0d4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F0D4u;
    {
        const bool branch_taken_0x12f0d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0D4u;
        // 0x12f0d8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0d4) {
            ctx->pc = 0x12F0E4u;
            goto label_12f0e4;
        }
    }
    ctx->pc = 0x12F0DCu;
    // 0x12f0dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12F0DCu;
    {
        const bool branch_taken_0x12f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0DCu;
        // 0x12f0e0: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0dc) {
            ctx->pc = 0x12F0E8u;
            goto label_12f0e8;
        }
    }
    ctx->pc = 0x12F0E4u;
label_12f0e4:
    // 0x12f0e4: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_12f0e8:
    // 0x12f0e8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x12f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12f0ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f0f0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x12f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x12f0f4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x12f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12f0f8: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x12F0F8u;
    SET_GPR_U32(ctx, 31, 0x12F100u);
    ctx->pc = 0x12F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F0F8u;
    // 0x12f0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x12F0F8u, 0x12F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F100u;
label_12f100:
    // 0x12f100: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F100u;
    {
        const bool branch_taken_0x12f100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F100u;
        // 0x12f104: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f100) {
            ctx->pc = 0x12F10Cu;
            goto label_12f10c;
        }
    }
    ctx->pc = 0x12F108u;
    // 0x12f108: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x12f108u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
label_12f10c:
    // 0x12f10c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12f10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f110: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12f110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f114: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12f114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12f118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f11c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12f11cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f128: 0x3e00008  jr          $ra
    ctx->pc = 0x12F128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F128u;
        // 0x12f12c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F130u;
}
