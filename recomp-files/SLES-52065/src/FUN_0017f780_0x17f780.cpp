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

// Function: FUN_0017f780
// Address: 0x17f780 - 0x17f8b8
void FUN_0017f780_0x17f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f780_0x17f780");
#endif

    switch (ctx->pc) {
        case 0x17f7f0u: goto label_17f7f0;
        case 0x17f7f8u: goto label_17f7f8;
        case 0x17f800u: goto label_17f800;
        case 0x17f824u: goto label_17f824;
        case 0x17f82cu: goto label_17f82c;
        case 0x17f888u: goto label_17f888;
        default: break;
    }

    ctx->pc = 0x17f780u;

    // 0x17f780: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17f784: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x17f784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x17f788: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17f78c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x17f78cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x17f790: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17f790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17f794: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x17f794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x17f798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17f79c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x17f79cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x17f7a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17f7a4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x17f7a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x17f7a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f7ac: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x17f7acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x17f7b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f7b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17f7b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f7bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17f7bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f7c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17f7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7c8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x17f7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7cc: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x17f7ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x17f7d0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F7D0u;
    {
        const bool branch_taken_0x17f7d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7D0u;
        // 0x17f7d4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7d0) {
            ctx->pc = 0x17F7F8u;
            goto label_17f7f8;
        }
    }
    ctx->pc = 0x17F7D8u;
    // 0x17f7d8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x17f7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x17f7dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17f7e0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x17f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x17f7e4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x17f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17f7e8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x17F7E8u;
    SET_GPR_U32(ctx, 31, 0x17F7F0u);
    ctx->pc = 0x17F7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7E8u;
    // 0x17f7ec: 0x24a5f960  addiu       $a1, $a1, -0x6A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x17F7E8u, 0x17F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7F0u;
label_17f7f0:
    // 0x17f7f0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x17F7F0u;
    SET_GPR_U32(ctx, 31, 0x17F7F8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x17F7F0u, 0x17F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F7F8u;
label_17f7f8:
    // 0x17f7f8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x17F7F8u;
    SET_GPR_U32(ctx, 31, 0x17F800u);
    ctx->pc = 0x17F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F7F8u;
    // 0x17f7fc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x17F7F8u, 0x17F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F800u;
label_17f800:
    // 0x17f800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f804: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x17F804u;
    {
        const bool branch_taken_0x17f804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F804u;
        // 0x17f808: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f804) {
            ctx->pc = 0x17F830u;
            goto label_17f830;
        }
    }
    ctx->pc = 0x17F80Cu;
    // 0x17f80c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x17f80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x17f810: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17f810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17f814: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x17f814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x17f818: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x17f818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17f81c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x17F81Cu;
    SET_GPR_U32(ctx, 31, 0x17F824u);
    ctx->pc = 0x17F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F81Cu;
    // 0x17f820: 0x24a5f940  addiu       $a1, $a1, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x17F81Cu, 0x17F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F824u;
label_17f824:
    // 0x17f824: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x17F824u;
    SET_GPR_U32(ctx, 31, 0x17F82Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x17F824u, 0x17F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F82Cu;
label_17f82c:
    // 0x17f82c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x17f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_17f830:
    // 0x17f830: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F830u;
    {
        const bool branch_taken_0x17f830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f830) {
            ctx->pc = 0x17F848u;
            goto label_17f848;
        }
    }
    ctx->pc = 0x17F838u;
    // 0x17f838: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17f83c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17f840: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17f844: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x17f844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_17f848:
    // 0x17f848: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17f848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x17f84c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17f84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17f850: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f854: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17f858: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x17f858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x17f85c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F85Cu;
    {
        const bool branch_taken_0x17f85c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F85Cu;
        // 0x17f860: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f85c) {
            ctx->pc = 0x17F86Cu;
            goto label_17f86c;
        }
    }
    ctx->pc = 0x17F864u;
    // 0x17f864: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F864u;
    {
        const bool branch_taken_0x17f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F864u;
        // 0x17f868: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f864) {
            ctx->pc = 0x17F870u;
            goto label_17f870;
        }
    }
    ctx->pc = 0x17F86Cu;
label_17f86c:
    // 0x17f86c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x17f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_17f870:
    // 0x17f870: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x17f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17f874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17f878: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x17f878u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x17f87c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x17f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17f880: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x17F880u;
    SET_GPR_U32(ctx, 31, 0x17F888u);
    ctx->pc = 0x17F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F880u;
    // 0x17f884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x17F880u, 0x17F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F888u;
label_17f888:
    // 0x17f888: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F888u;
    {
        const bool branch_taken_0x17f888 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F888u;
        // 0x17f88c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f888) {
            ctx->pc = 0x17F894u;
            goto label_17f894;
        }
    }
    ctx->pc = 0x17F890u;
    // 0x17f890: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x17f890u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
label_17f894:
    // 0x17f894: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17f894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17f898: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17f898u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f89c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17f89cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f8a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f8a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f8a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f8a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f8a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f8ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17F8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8B0u;
        // 0x17f8b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F8B8u;
}
