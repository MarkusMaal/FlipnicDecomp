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

// Function: FUN_001bc070
// Address: 0x1bc070 - 0x1bc1a8
void FUN_001bc070_0x1bc070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc070_0x1bc070");
#endif

    switch (ctx->pc) {
        case 0x1bc0e0u: goto label_1bc0e0;
        case 0x1bc0e8u: goto label_1bc0e8;
        case 0x1bc0f0u: goto label_1bc0f0;
        case 0x1bc114u: goto label_1bc114;
        case 0x1bc11cu: goto label_1bc11c;
        case 0x1bc178u: goto label_1bc178;
        default: break;
    }

    ctx->pc = 0x1bc070u;

    // 0x1bc070: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bc070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bc074: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x1bc074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1bc078: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bc078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bc07c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1bc07cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1bc080: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bc080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bc084: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1bc084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1bc088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bc088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bc08c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1bc08cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1bc090: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bc090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bc094: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1bc094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1bc098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bc098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bc09c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1bc09cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1bc0a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bc0a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1bc0a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc0ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1bc0acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bc0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc0b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1bc0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0b8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1bc0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0bc: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1bc0bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1bc0c0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC0C0u;
    {
        const bool branch_taken_0x1bc0c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0C0u;
        // 0x1bc0c4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc0c0) {
            ctx->pc = 0x1BC0E8u;
            goto label_1bc0e8;
        }
    }
    ctx->pc = 0x1BC0C8u;
    // 0x1bc0c8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bc0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bc0cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc0d0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bc0d4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bc0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc0d8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BC0D8u;
    SET_GPR_U32(ctx, 31, 0x1BC0E0u);
    ctx->pc = 0x1BC0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0D8u;
    // 0x1bc0dc: 0x24a51160  addiu       $a1, $a1, 0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BC0D8u, 0x1BC0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0E0u;
label_1bc0e0:
    // 0x1bc0e0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BC0E0u;
    SET_GPR_U32(ctx, 31, 0x1BC0E8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BC0E0u, 0x1BC0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0E8u;
label_1bc0e8:
    // 0x1bc0e8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BC0E8u;
    SET_GPR_U32(ctx, 31, 0x1BC0F0u);
    ctx->pc = 0x1BC0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0E8u;
    // 0x1bc0ec: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BC0E8u, 0x1BC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0F0u;
label_1bc0f0:
    // 0x1bc0f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bc0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0f4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC0F4u;
    {
        const bool branch_taken_0x1bc0f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0F4u;
        // 0x1bc0f8: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc0f4) {
            ctx->pc = 0x1BC120u;
            goto label_1bc120;
        }
    }
    ctx->pc = 0x1BC0FCu;
    // 0x1bc0fc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bc0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bc100: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc104: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bc104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bc108: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bc108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc10c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BC10Cu;
    SET_GPR_U32(ctx, 31, 0x1BC114u);
    ctx->pc = 0x1BC110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC10Cu;
    // 0x1bc110: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BC10Cu, 0x1BC114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC114u;
label_1bc114:
    // 0x1bc114: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BC114u;
    SET_GPR_U32(ctx, 31, 0x1BC11Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BC114u, 0x1BC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC11Cu;
label_1bc11c:
    // 0x1bc11c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1bc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1bc120:
    // 0x1bc120: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC120u;
    {
        const bool branch_taken_0x1bc120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc120) {
            ctx->pc = 0x1BC138u;
            goto label_1bc138;
        }
    }
    ctx->pc = 0x1BC128u;
    // 0x1bc128: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bc128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bc12c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bc12cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1bc130: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bc130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bc134: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1bc134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1bc138:
    // 0x1bc138: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bc138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bc13c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bc13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bc140: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bc140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc148: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1bc148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1bc14c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC14Cu;
    {
        const bool branch_taken_0x1bc14c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC14Cu;
        // 0x1bc150: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc14c) {
            ctx->pc = 0x1BC15Cu;
            goto label_1bc15c;
        }
    }
    ctx->pc = 0x1BC154u;
    // 0x1bc154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC154u;
    {
        const bool branch_taken_0x1bc154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC154u;
        // 0x1bc158: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc154) {
            ctx->pc = 0x1BC160u;
            goto label_1bc160;
        }
    }
    ctx->pc = 0x1BC15Cu;
label_1bc15c:
    // 0x1bc15c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x1bc15cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_1bc160:
    // 0x1bc160: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1bc160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1bc164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bc164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bc168: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1bc168u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1bc16c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1bc16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1bc170: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x1BC170u;
    SET_GPR_U32(ctx, 31, 0x1BC178u);
    ctx->pc = 0x1BC174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC170u;
    // 0x1bc174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x1BC170u, 0x1BC178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC178u;
label_1bc178:
    // 0x1bc178: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC178u;
    {
        const bool branch_taken_0x1bc178 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC178u;
        // 0x1bc17c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc178) {
            ctx->pc = 0x1BC184u;
            goto label_1bc184;
        }
    }
    ctx->pc = 0x1BC180u;
    // 0x1bc180: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x1bc180u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
label_1bc184:
    // 0x1bc184: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bc184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc188: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bc188u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc18c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bc18cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc190: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1A0u;
        // 0x1bc1a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC1A8u;
}
