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

// Function: FUN_001be840
// Address: 0x1be840 - 0x1be978
void FUN_001be840_0x1be840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001be840_0x1be840");
#endif

    switch (ctx->pc) {
        case 0x1be8b0u: goto label_1be8b0;
        case 0x1be8b8u: goto label_1be8b8;
        case 0x1be8c0u: goto label_1be8c0;
        case 0x1be8e4u: goto label_1be8e4;
        case 0x1be8ecu: goto label_1be8ec;
        case 0x1be948u: goto label_1be948;
        default: break;
    }

    ctx->pc = 0x1be840u;

    // 0x1be840: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1be840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1be844: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x1be844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1be848: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1be848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1be84c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1be84cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1be850: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1be850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1be854: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1be854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1be858: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1be858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1be85c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1be85cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1be860: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1be860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1be864: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1be864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1be868: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1be868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1be86c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1be86cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1be870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be874: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1be874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be87c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1be87cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be880: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1be880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be884: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1be884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be888: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1be888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be88c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1be88cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1be890: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE890u;
    {
        const bool branch_taken_0x1be890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE890u;
        // 0x1be894: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be890) {
            ctx->pc = 0x1BE8B8u;
            goto label_1be8b8;
        }
    }
    ctx->pc = 0x1BE898u;
    // 0x1be898: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1be898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1be89c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1be89cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1be8a0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1be8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1be8a4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1be8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1be8a8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BE8A8u;
    SET_GPR_U32(ctx, 31, 0x1BE8B0u);
    ctx->pc = 0x1BE8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8A8u;
    // 0x1be8ac: 0x24a51290  addiu       $a1, $a1, 0x1290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BE8A8u, 0x1BE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8B0u;
label_1be8b0:
    // 0x1be8b0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BE8B0u;
    SET_GPR_U32(ctx, 31, 0x1BE8B8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BE8B0u, 0x1BE8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8B8u;
label_1be8b8:
    // 0x1be8b8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BE8B8u;
    SET_GPR_U32(ctx, 31, 0x1BE8C0u);
    ctx->pc = 0x1BE8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8B8u;
    // 0x1be8bc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BE8B8u, 0x1BE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8C0u;
label_1be8c0:
    // 0x1be8c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8c4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE8C4u;
    {
        const bool branch_taken_0x1be8c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8C4u;
        // 0x1be8c8: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be8c4) {
            ctx->pc = 0x1BE8F0u;
            goto label_1be8f0;
        }
    }
    ctx->pc = 0x1BE8CCu;
    // 0x1be8cc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1be8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1be8d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1be8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1be8d4: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1be8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1be8d8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1be8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1be8dc: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BE8DCu;
    SET_GPR_U32(ctx, 31, 0x1BE8E4u);
    ctx->pc = 0x1BE8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE8DCu;
    // 0x1be8e0: 0x24a512b0  addiu       $a1, $a1, 0x12B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BE8DCu, 0x1BE8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8E4u;
label_1be8e4:
    // 0x1be8e4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BE8E4u;
    SET_GPR_U32(ctx, 31, 0x1BE8ECu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BE8E4u, 0x1BE8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE8ECu;
label_1be8ec:
    // 0x1be8ec: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1be8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1be8f0:
    // 0x1be8f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE8F0u;
    {
        const bool branch_taken_0x1be8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be8f0) {
            ctx->pc = 0x1BE908u;
            goto label_1be908;
        }
    }
    ctx->pc = 0x1BE8F8u;
    // 0x1be8f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1be8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1be8fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1be8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1be900: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1be900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1be904: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1be904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1be908:
    // 0x1be908: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1be908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1be90c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1be90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1be910: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1be910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1be914: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1be918: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1be918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1be91c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE91Cu;
    {
        const bool branch_taken_0x1be91c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE91Cu;
        // 0x1be920: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be91c) {
            ctx->pc = 0x1BE92Cu;
            goto label_1be92c;
        }
    }
    ctx->pc = 0x1BE924u;
    // 0x1be924: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE924u;
    {
        const bool branch_taken_0x1be924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE924u;
        // 0x1be928: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be924) {
            ctx->pc = 0x1BE930u;
            goto label_1be930;
        }
    }
    ctx->pc = 0x1BE92Cu;
label_1be92c:
    // 0x1be92c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x1be92cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_1be930:
    // 0x1be930: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1be930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1be934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1be934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be938: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1be938u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1be93c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1be93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1be940: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x1BE940u;
    SET_GPR_U32(ctx, 31, 0x1BE948u);
    ctx->pc = 0x1BE944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE940u;
    // 0x1be944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x1BE940u, 0x1BE948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE948u;
label_1be948:
    // 0x1be948: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE948u;
    {
        const bool branch_taken_0x1be948 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE948u;
        // 0x1be94c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be948) {
            ctx->pc = 0x1BE954u;
            goto label_1be954;
        }
    }
    ctx->pc = 0x1BE950u;
    // 0x1be950: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x1be950u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
label_1be954:
    // 0x1be954: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1be954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be958: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1be958u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be95c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1be95cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be960: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1be960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1be964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be970: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE970u;
        // 0x1be974: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE978u;
}
