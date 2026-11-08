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

// Function: FUN_0012e650
// Address: 0x12e650 - 0x12ebcc
void FUN_0012e650_0x12e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012e650_0x12e650");
#endif

    switch (ctx->pc) {
        case 0x12e6ccu: goto label_12e6cc;
        case 0x12e6d4u: goto label_12e6d4;
        case 0x12e724u: goto label_12e724;
        case 0x12e79cu: goto label_12e79c;
        case 0x12e81cu: goto label_12e81c;
        case 0x12e8c0u: goto label_12e8c0;
        case 0x12e8d4u: goto label_12e8d4;
        case 0x12e8e8u: goto label_12e8e8;
        case 0x12e97cu: goto label_12e97c;
        case 0x12e9b8u: goto label_12e9b8;
        case 0x12e9d8u: goto label_12e9d8;
        case 0x12e9e0u: goto label_12e9e0;
        case 0x12ea04u: goto label_12ea04;
        case 0x12ea78u: goto label_12ea78;
        case 0x12eae4u: goto label_12eae4;
        case 0x12eb64u: goto label_12eb64;
        case 0x12eb8cu: goto label_12eb8c;
        case 0x12eba0u: goto label_12eba0;
        default: break;
    }

    ctx->pc = 0x12e650u;

    // 0x12e650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12e654: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x12e654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x12e658: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12e658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x12e65c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12e65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12e660: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12e660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12e664: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12e664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12e668: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12e668u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e66c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12e66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12e670: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12e670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12e678: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12e678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e67c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12e67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12e680: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12e680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e684: 0x12600146  beqz        $s3, . + 4 + (0x146 << 2)
    ctx->pc = 0x12E684u;
    {
        const bool branch_taken_0x12e684 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E684u;
        // 0x12e688: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e684) {
            ctx->pc = 0x12EBA0u;
            goto label_12eba0;
        }
    }
    ctx->pc = 0x12E68Cu;
    // 0x12e68c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x12e68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x12e690: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12e690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12e694: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x12e694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x12e698: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E698u;
    {
        const bool branch_taken_0x12e698 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e698) {
            ctx->pc = 0x12E6B4u;
            goto label_12e6b4;
        }
    }
    ctx->pc = 0x12E6A0u;
    // 0x12e6a0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x12e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e6a4: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x12e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x12e6a8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x12e6a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12e6ac: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E6ACu;
    {
        const bool branch_taken_0x12e6ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e6ac) {
            ctx->pc = 0x12E6D4u;
            goto label_12e6d4;
        }
    }
    ctx->pc = 0x12E6B4u;
label_12e6b4:
    // 0x12e6b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x12e6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x12e6b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12e6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12e6bc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x12e6c0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12e6c4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12E6C4u;
    SET_GPR_U32(ctx, 31, 0x12E6CCu);
    ctx->pc = 0x12E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E6C4u;
    // 0x12e6c8: 0x24a5ed10  addiu       $a1, $a1, -0x12F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12E6C4u, 0x12E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6CCu;
label_12e6cc:
    // 0x12e6cc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12E6CCu;
    SET_GPR_U32(ctx, 31, 0x12E6D4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12E6CCu, 0x12E6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6D4u;
label_12e6d4:
    // 0x12e6d4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x12e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e6d8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x12e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e6dc: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x12e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x12e6e0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x12e6e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12e6e4: 0x14200095  bnez        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x12E6E4u;
    {
        const bool branch_taken_0x12e6e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e6e4) {
            ctx->pc = 0x12E93Cu;
            goto label_12e93c;
        }
    }
    ctx->pc = 0x12E6ECu;
    // 0x12e6ec: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x12e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12e6f0: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x12e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x12e6f4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x12e6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12e6f8: 0x2141823  subu        $v1, $s0, $s4
    ctx->pc = 0x12e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x12e6fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E6FCu;
    {
        const bool branch_taken_0x12e6fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6FCu;
        // 0x12e700: 0x32943  sra         $a1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6fc) {
            ctx->pc = 0x12E70Cu;
            goto label_12e70c;
        }
    }
    ctx->pc = 0x12E704u;
    // 0x12e704: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x12e704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x12e708: 0x32943  sra         $a1, $v1, 5
    ctx->pc = 0x12e708u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 5));
label_12e70c:
    // 0x12e70c: 0xb3082b  sltu        $at, $a1, $s3
    ctx->pc = 0x12e70cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x12e710: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x12E710u;
    {
        const bool branch_taken_0x12e710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E710u;
        // 0x12e714: 0x134140  sll         $t0, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e710) {
            ctx->pc = 0x12E80Cu;
            goto label_12e80c;
        }
    }
    ctx->pc = 0x12E718u;
    // 0x12e718: 0xb3082b  sltu        $at, $a1, $s3
    ctx->pc = 0x12e718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x12e71c: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12E71Cu;
    {
        const bool branch_taken_0x12e71c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E71Cu;
        // 0x12e720: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e71c) {
            ctx->pc = 0x12E78Cu;
            goto label_12e78c;
        }
    }
    ctx->pc = 0x12E724u;
label_12e724:
    // 0x12e724: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E724u;
    {
        const bool branch_taken_0x12e724 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e724) {
            ctx->pc = 0x12E76Cu;
            goto label_12e76c;
        }
    }
    ctx->pc = 0x12E72Cu;
    // 0x12e72c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x12e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e730: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x12e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e734: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x12e734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e738: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x12e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e73c: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x12e73cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x12e740: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x12e740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x12e744: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x12e744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x12e748: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x12e748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x12e74c: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x12e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e750: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x12e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e754: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x12e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e758: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x12e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e75c: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x12e75cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x12e760: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x12e760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x12e764: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x12e764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x12e768: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x12e768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_12e76c:
    // 0x12e76c: 0x0  nop
    ctx->pc = 0x12e76cu;
    // NOP
    // 0x12e770: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x12e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e774: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12e774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12e778: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12e778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12e77c: 0xb3082b  sltu        $at, $a1, $s3
    ctx->pc = 0x12e77cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x12e780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12e780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12e784: 0x1420ffe7  bnez        $at, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12E784u;
    {
        const bool branch_taken_0x12e784 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E784u;
        // 0x12e788: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e784) {
            ctx->pc = 0x12E724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e724;
        }
    }
    ctx->pc = 0x12E78Cu;
label_12e78c:
    // 0x12e78c: 0x0  nop
    ctx->pc = 0x12e78cu;
    // NOP
    // 0x12e790: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x12e790u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12e794: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x12E794u;
    {
        const bool branch_taken_0x12e794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E794u;
        // 0x12e798: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e794) {
            ctx->pc = 0x12E8E0u;
            goto label_12e8e0;
        }
    }
    ctx->pc = 0x12E79Cu;
label_12e79c:
    // 0x12e79c: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E79Cu;
    {
        const bool branch_taken_0x12e79c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e79c) {
            ctx->pc = 0x12E7E4u;
            goto label_12e7e4;
        }
    }
    ctx->pc = 0x12E7A4u;
    // 0x12e7a4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x12e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e7a8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x12e7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e7ac: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x12e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e7b0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x12e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e7b4: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x12e7b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x12e7b8: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x12e7b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x12e7bc: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x12e7bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x12e7c0: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x12e7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x12e7c4: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x12e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e7c8: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x12e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e7cc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x12e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e7d0: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x12e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e7d4: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x12e7d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x12e7d8: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x12e7d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x12e7dc: 0xe4c10018  swc1        $f1, 0x18($a2)
    ctx->pc = 0x12e7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x12e7e0: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x12e7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_12e7e4:
    // 0x12e7e4: 0x0  nop
    ctx->pc = 0x12e7e4u;
    // NOP
    // 0x12e7e8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x12e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e7ec: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x12e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x12e7f0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12e7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12e7f4: 0xb0182b  sltu        $v1, $a1, $s0
    ctx->pc = 0x12e7f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12e7f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12e7fc: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12E7FCu;
    {
        const bool branch_taken_0x12e7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7FCu;
        // 0x12e800: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7fc) {
            ctx->pc = 0x12E79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e79c;
        }
    }
    ctx->pc = 0x12E804u;
    // 0x12e804: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x12E804u;
    {
        const bool branch_taken_0x12e804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e804) {
            ctx->pc = 0x12E8E0u;
            goto label_12e8e0;
        }
    }
    ctx->pc = 0x12E80Cu;
label_12e80c:
    // 0x12e80c: 0x2083023  subu        $a2, $s0, $t0
    ctx->pc = 0x12e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x12e810: 0xd0082b  sltu        $at, $a2, $s0
    ctx->pc = 0x12e810u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12e814: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12E814u;
    {
        const bool branch_taken_0x12e814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E814u;
        // 0x12e818: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e814) {
            ctx->pc = 0x12E884u;
            goto label_12e884;
        }
    }
    ctx->pc = 0x12E81Cu;
label_12e81c:
    // 0x12e81c: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E81Cu;
    {
        const bool branch_taken_0x12e81c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e81c) {
            ctx->pc = 0x12E864u;
            goto label_12e864;
        }
    }
    ctx->pc = 0x12E824u;
    // 0x12e824: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x12e824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e828: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x12e828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e82c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x12e82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e830: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x12e830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e834: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x12e834u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x12e838: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x12e838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x12e83c: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x12e83cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x12e840: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x12e840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x12e844: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x12e844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e848: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x12e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e84c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x12e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e850: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x12e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e854: 0xe4e30010  swc1        $f3, 0x10($a3)
    ctx->pc = 0x12e854u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x12e858: 0xe4e20014  swc1        $f2, 0x14($a3)
    ctx->pc = 0x12e858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x12e85c: 0xe4e10018  swc1        $f1, 0x18($a3)
    ctx->pc = 0x12e85cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x12e860: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x12e860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_12e864:
    // 0x12e864: 0x0  nop
    ctx->pc = 0x12e864u;
    // NOP
    // 0x12e868: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x12e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e86c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12e86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12e870: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x12e870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x12e874: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x12e874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12e878: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12e878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12e87c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12E87Cu;
    {
        const bool branch_taken_0x12e87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E87Cu;
        // 0x12e880: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e87c) {
            ctx->pc = 0x12E81Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e81c;
        }
    }
    ctx->pc = 0x12E884u;
label_12e884:
    // 0x12e884: 0x0  nop
    ctx->pc = 0x12e884u;
    // NOP
    // 0x12e888: 0xb31823  subu        $v1, $a1, $s3
    ctx->pc = 0x12e888u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x12e88c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x12e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12e890: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x12e890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x12e894: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x12e894u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12e898: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E898u;
    {
        const bool branch_taken_0x12e898 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E898u;
        // 0x12e89c: 0x2848821  addu        $s1, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e898) {
            ctx->pc = 0x12E8B4u;
            goto label_12e8b4;
        }
    }
    ctx->pc = 0x12E8A0u;
    // 0x12e8a0: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x12e8a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12e8a4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x12E8A4u;
    {
        const bool branch_taken_0x12e8a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e8a4) {
            ctx->pc = 0x12E8B0u;
            goto label_12e8b0;
        }
    }
    ctx->pc = 0x12E8ACu;
    // 0x12e8ac: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x12e8acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_12e8b0:
    // 0x12e8b0: 0x2848821  addu        $s1, $s4, $a0
    ctx->pc = 0x12e8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_12e8b4:
    // 0x12e8b4: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x12e8b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12e8b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E8B8u;
    {
        const bool branch_taken_0x12e8b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e8b8) {
            ctx->pc = 0x12E8E0u;
            goto label_12e8e0;
        }
    }
    ctx->pc = 0x12E8C0u;
label_12e8c0:
    // 0x12e8c0: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x12e8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x12e8c4: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x12e8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x12e8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8cc: 0xc04bafc  jal         func_12EBF0
    ctx->pc = 0x12E8CCu;
    SET_GPR_U32(ctx, 31, 0x12E8D4u);
    ctx->pc = 0x12E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8CCu;
    // 0x12e8d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBF0u, 0x12E8CCu, 0x12E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8D4u;
label_12e8d4:
    // 0x12e8d4: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x12e8d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12e8d8: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12E8D8u;
    {
        const bool branch_taken_0x12e8d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e8d8) {
            ctx->pc = 0x12E8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e8c0;
        }
    }
    ctx->pc = 0x12E8E0u;
label_12e8e0:
    // 0x12e8e0: 0x126000af  beqz        $s3, . + 4 + (0xAF << 2)
    ctx->pc = 0x12E8E0u;
    {
        const bool branch_taken_0x12e8e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e8e0) {
            ctx->pc = 0x12EBA0u;
            goto label_12eba0;
        }
    }
    ctx->pc = 0x12E8E8u;
label_12e8e8:
    // 0x12e8e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e8ec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12e8ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12e8f0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x12e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x12e8f4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x12e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12e8f8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x12e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x12e8fc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x12e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12e900: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x12e900u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x12e904: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x12e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e908: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x12e908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x12e90c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x12e90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e910: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x12e910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x12e914: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12e918: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x12e918u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
    // 0x12e91c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12e920: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x12e920u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
    // 0x12e924: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x12e924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12e928: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x12e928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
    // 0x12e92c: 0x1660ffee  bnez        $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12E92Cu;
    {
        const bool branch_taken_0x12e92c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E92Cu;
        // 0x12e930: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e92c) {
            ctx->pc = 0x12E8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e8e8;
        }
    }
    ctx->pc = 0x12E934u;
    // 0x12e934: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x12E934u;
    {
        const bool branch_taken_0x12e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E934u;
        // 0x12e938: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e934) {
            ctx->pc = 0x12EBA4u;
            goto label_12eba4;
        }
    }
    ctx->pc = 0x12E93Cu;
label_12e93c:
    // 0x12e93c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x12e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x12e940: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x12e940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x12e944: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x12e944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x12e948: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x12e948u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x12e94c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x12e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x12e950: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x12e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e954: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x12e954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12e958: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E958u;
    {
        const bool branch_taken_0x12e958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E958u;
        // 0x12e95c: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e958) {
            ctx->pc = 0x12E968u;
            goto label_12e968;
        }
    }
    ctx->pc = 0x12E960u;
    // 0x12e960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E960u;
    {
        const bool branch_taken_0x12e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E960u;
        // 0x12e964: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e960) {
            ctx->pc = 0x12E970u;
            goto label_12e970;
        }
    }
    ctx->pc = 0x12E968u;
label_12e968:
    // 0x12e968: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12e968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e96c: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x12e96cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_12e970:
    // 0x12e970: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x12E970u;
    {
        const bool branch_taken_0x12e970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E970u;
        // 0x12e974: 0x3c0207ff  lui         $v0, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2047 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e970) {
            ctx->pc = 0x12E9ACu;
            goto label_12e9ac;
        }
    }
    ctx->pc = 0x12E978u;
    // 0x12e978: 0x3c0103ff  lui         $at, 0x3FF
    ctx->pc = 0x12e978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1023 << 16));
label_12e97c:
    // 0x12e97c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x12e97cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x12e980: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x12e980u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x12e984: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E984u;
    {
        const bool branch_taken_0x12e984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e984) {
            ctx->pc = 0x12E994u;
            goto label_12e994;
        }
    }
    ctx->pc = 0x12E98Cu;
    // 0x12e98c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E98Cu;
    {
        const bool branch_taken_0x12e98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E98Cu;
        // 0x12e990: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e98c) {
            ctx->pc = 0x12E99Cu;
            goto label_12e99c;
        }
    }
    ctx->pc = 0x12E994u;
label_12e994:
    // 0x12e994: 0x0  nop
    ctx->pc = 0x12e994u;
    // NOP
    // 0x12e998: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x12e998u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_12e99c:
    // 0x12e99c: 0x0  nop
    ctx->pc = 0x12e99cu;
    // NOP
    // 0x12e9a0: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x12e9a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12e9a4: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x12E9A4u;
    {
        const bool branch_taken_0x12e9a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9A4u;
        // 0x12e9a8: 0x3c0103ff  lui         $at, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1023 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9a4) {
            ctx->pc = 0x12E97Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e97c;
        }
    }
    ctx->pc = 0x12E9ACu;
label_12e9ac:
    // 0x12e9ac: 0x0  nop
    ctx->pc = 0x12e9acu;
    // NOP
    // 0x12e9b0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x12E9B0u;
    SET_GPR_U32(ctx, 31, 0x12E9B8u);
    ctx->pc = 0x12E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9B0u;
    // 0x12e9b4: 0x102140  sll         $a0, $s0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12E9B0u, 0x12E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9B8u;
label_12e9b8:
    // 0x12e9b8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12e9b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9bc: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E9BCu;
    {
        const bool branch_taken_0x12e9bc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9BCu;
        // 0x12e9c0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9bc) {
            ctx->pc = 0x12E9E0u;
            goto label_12e9e0;
        }
    }
    ctx->pc = 0x12E9C4u;
    // 0x12e9c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12e9c8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x12e9cc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12e9d0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12E9D0u;
    SET_GPR_U32(ctx, 31, 0x12E9D8u);
    ctx->pc = 0x12E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9D0u;
    // 0x12e9d4: 0x24a5ecf0  addiu       $a1, $a1, -0x1310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12E9D0u, 0x12E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9D8u;
label_12e9d8:
    // 0x12e9d8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12E9D8u;
    SET_GPR_U32(ctx, 31, 0x12E9E0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12E9D8u, 0x12E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9E0u;
label_12e9e0:
    // 0x12e9e0: 0xaed70000  sw          $s7, 0x0($s6)
    ctx->pc = 0x12e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
    // 0x12e9e4: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x12e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x12e9e8: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x12e9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12e9ec: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x12e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e9f0: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x12e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12e9f4: 0xd4082b  sltu        $at, $a2, $s4
    ctx->pc = 0x12e9f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x12e9f8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12e9fc: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12E9FCu;
    {
        const bool branch_taken_0x12e9fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9FCu;
        // 0x12ea00: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9fc) {
            ctx->pc = 0x12EA6Cu;
            goto label_12ea6c;
        }
    }
    ctx->pc = 0x12EA04u;
label_12ea04:
    // 0x12ea04: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12EA04u;
    {
        const bool branch_taken_0x12ea04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea04) {
            ctx->pc = 0x12EA4Cu;
            goto label_12ea4c;
        }
    }
    ctx->pc = 0x12EA0Cu;
    // 0x12ea0c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x12ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ea10: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x12ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ea14: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x12ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ea18: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x12ea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ea1c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x12ea1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x12ea20: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x12ea20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x12ea24: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x12ea24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x12ea28: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x12ea28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x12ea2c: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x12ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ea30: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x12ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ea34: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x12ea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ea38: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x12ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ea3c: 0xe4a30010  swc1        $f3, 0x10($a1)
    ctx->pc = 0x12ea3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x12ea40: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x12ea40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x12ea44: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x12ea44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x12ea48: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x12ea48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_12ea4c:
    // 0x12ea4c: 0x0  nop
    ctx->pc = 0x12ea4cu;
    // NOP
    // 0x12ea50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ea54: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12ea54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12ea58: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x12ea58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x12ea5c: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x12ea5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x12ea60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12ea64: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12EA64u;
    {
        const bool branch_taken_0x12ea64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA64u;
        // 0x12ea68: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea64) {
            ctx->pc = 0x12EA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ea04;
        }
    }
    ctx->pc = 0x12EA6Cu;
label_12ea6c:
    // 0x12ea6c: 0x0  nop
    ctx->pc = 0x12ea6cu;
    // NOP
    // 0x12ea70: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x12EA70u;
    {
        const bool branch_taken_0x12ea70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea70) {
            ctx->pc = 0x12EAD8u;
            goto label_12ead8;
        }
    }
    ctx->pc = 0x12EA78u;
label_12ea78:
    // 0x12ea78: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12EA78u;
    {
        const bool branch_taken_0x12ea78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea78) {
            ctx->pc = 0x12EAC0u;
            goto label_12eac0;
        }
    }
    ctx->pc = 0x12EA80u;
    // 0x12ea80: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x12ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12ea84: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x12ea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ea88: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x12ea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ea8c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x12ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ea90: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x12ea90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x12ea94: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x12ea94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x12ea98: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x12ea98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x12ea9c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x12ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x12eaa0: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x12eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12eaa4: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x12eaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12eaa8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x12eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12eaac: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x12eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eab0: 0xe4a30010  swc1        $f3, 0x10($a1)
    ctx->pc = 0x12eab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x12eab4: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x12eab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x12eab8: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x12eab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x12eabc: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x12eabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_12eac0:
    // 0x12eac0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12eac4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12eac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12eac8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x12eac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x12eacc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ead0: 0x1660ffe9  bnez        $s3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12EAD0u;
    {
        const bool branch_taken_0x12ead0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAD0u;
        // 0x12ead4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ead0) {
            ctx->pc = 0x12EA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ea78;
        }
    }
    ctx->pc = 0x12EAD8u;
label_12ead8:
    // 0x12ead8: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x12ead8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12eadc: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12EADCu;
    {
        const bool branch_taken_0x12eadc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eadc) {
            ctx->pc = 0x12EB4Cu;
            goto label_12eb4c;
        }
    }
    ctx->pc = 0x12EAE4u;
label_12eae4:
    // 0x12eae4: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12EAE4u;
    {
        const bool branch_taken_0x12eae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eae4) {
            ctx->pc = 0x12EB2Cu;
            goto label_12eb2c;
        }
    }
    ctx->pc = 0x12EAECu;
    // 0x12eaec: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x12eaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12eaf0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x12eaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12eaf4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x12eaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12eaf8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x12eaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eafc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x12eafcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x12eb00: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x12eb00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x12eb04: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x12eb04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x12eb08: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x12eb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x12eb0c: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x12eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12eb10: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x12eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12eb14: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x12eb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12eb18: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x12eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12eb1c: 0xe4a30010  swc1        $f3, 0x10($a1)
    ctx->pc = 0x12eb1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x12eb20: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x12eb20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x12eb24: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x12eb24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x12eb28: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x12eb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_12eb2c:
    // 0x12eb2c: 0x0  nop
    ctx->pc = 0x12eb2cu;
    // NOP
    // 0x12eb30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12eb34: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12eb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12eb38: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x12eb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x12eb3c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x12eb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12eb40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12eb44: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12EB44u;
    {
        const bool branch_taken_0x12eb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB44u;
        // 0x12eb48: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb44) {
            ctx->pc = 0x12EAE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eae4;
        }
    }
    ctx->pc = 0x12EB4Cu;
label_12eb4c:
    // 0x12eb4c: 0x0  nop
    ctx->pc = 0x12eb4cu;
    // NOP
    // 0x12eb50: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12eb54: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x12EB54u;
    {
        const bool branch_taken_0x12eb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x12EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB54u;
        // 0x12eb58: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb54) {
            ctx->pc = 0x12EB84u;
            goto label_12eb84;
        }
    }
    ctx->pc = 0x12EB5Cu;
    // 0x12eb5c: 0xc04baf4  jal         func_12EBD0
    ctx->pc = 0x12EB5Cu;
    SET_GPR_U32(ctx, 31, 0x12EB64u);
    ctx->pc = 0x12EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBD0u, 0x12EB5Cu, 0x12EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB64u;
label_12eb64:
    // 0x12eb64: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x12eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12eb68: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x12eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x12eb6c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x12eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x12eb70: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x12eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x12eb74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12eb78: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x12eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12eb7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12eb80: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x12eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_12eb84:
    // 0x12eb84: 0xc04bbe0  jal         func_12EF80
    ctx->pc = 0x12EB84u;
    SET_GPR_U32(ctx, 31, 0x12EB8Cu);
    ctx->pc = 0x12EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB84u;
    // 0x12eb88: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF80u, 0x12EB84u, 0x12EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB8Cu;
label_12eb8c:
    // 0x12eb8c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x12eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12eb90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EB90u;
    {
        const bool branch_taken_0x12eb90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb90) {
            ctx->pc = 0x12EBA0u;
            goto label_12eba0;
        }
    }
    ctx->pc = 0x12EB98u;
    // 0x12eb98: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EB98u;
    SET_GPR_U32(ctx, 31, 0x12EBA0u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EB98u, 0x12EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EBA0u;
label_12eba0:
    // 0x12eba0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x12eba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_12eba4:
    // 0x12eba4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12eba4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12eba8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12eba8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ebac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12ebacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ebb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12ebb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ebb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12ebb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ebb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12ebb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ebbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ebbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ebc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ebc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ebc4: 0x3e00008  jr          $ra
    ctx->pc = 0x12EBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBC4u;
        // 0x12ebc8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EBCCu;
}
