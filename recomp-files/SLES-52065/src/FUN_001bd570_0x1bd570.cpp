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

// Function: FUN_001bd570
// Address: 0x1bd570 - 0x1bd768
void FUN_001bd570_0x1bd570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bd570_0x1bd570");
#endif

    switch (ctx->pc) {
        case 0x1bd5b8u: goto label_1bd5b8;
        case 0x1bd5c0u: goto label_1bd5c0;
        case 0x1bd5d4u: goto label_1bd5d4;
        case 0x1bd5e4u: goto label_1bd5e4;
        case 0x1bd634u: goto label_1bd634;
        case 0x1bd6f4u: goto label_1bd6f4;
        case 0x1bd6fcu: goto label_1bd6fc;
        case 0x1bd714u: goto label_1bd714;
        case 0x1bd71cu: goto label_1bd71c;
        default: break;
    }

    ctx->pc = 0x1bd570u;

    // 0x1bd570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bd570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bd574: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x1bd574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
    // 0x1bd578: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bd578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bd57c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1bd57cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1bd580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bd580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bd584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd588: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bd588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd58c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd590: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1bd590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bd594: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1bd594u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1bd598: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD598u;
    {
        const bool branch_taken_0x1bd598 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD598u;
        // 0x1bd59c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd598) {
            ctx->pc = 0x1BD5C0u;
            goto label_1bd5c0;
        }
    }
    ctx->pc = 0x1BD5A0u;
    // 0x1bd5a0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bd5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bd5a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bd5a8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bd5ac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bd5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd5b0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BD5B0u;
    SET_GPR_U32(ctx, 31, 0x1BD5B8u);
    ctx->pc = 0x1BD5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5B0u;
    // 0x1bd5b4: 0x24a51220  addiu       $a1, $a1, 0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BD5B0u, 0x1BD5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5B8u;
label_1bd5b8:
    // 0x1bd5b8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BD5B8u;
    SET_GPR_U32(ctx, 31, 0x1BD5C0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BD5B8u, 0x1BD5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5C0u;
label_1bd5c0:
    // 0x1bd5c0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1bd5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bd5c4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD5C4u;
    {
        const bool branch_taken_0x1bd5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5C4u;
        // 0x1bd5c8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5c4) {
            ctx->pc = 0x1BD5E4u;
            goto label_1bd5e4;
        }
    }
    ctx->pc = 0x1BD5CCu;
    // 0x1bd5cc: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x1BD5CCu;
    SET_GPR_U32(ctx, 31, 0x1BD5D4u);
    ctx->pc = 0x1BD5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5CCu;
    // 0x1bd5d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x1BD5CCu, 0x1BD5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5D4u;
label_1bd5d4:
    // 0x1bd5d4: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1bd5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1bd5d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd5dc: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x1BD5DCu;
    SET_GPR_U32(ctx, 31, 0x1BD5E4u);
    ctx->pc = 0x1BD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5DCu;
    // 0x1bd5e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x1BD5DCu, 0x1BD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5E4u;
label_1bd5e4:
    // 0x1bd5e4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x1bd5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x1bd5e8: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x1bd5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1bd5ec: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1bd5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1bd5f0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1bd5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1bd5f4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1bd5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1bd5f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bd5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bd5fc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1bd5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bd600: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bd600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd604: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x1bd604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd608: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x1bd608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bd60c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1bd60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1bd610: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1bd610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd614: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1bd614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bd618: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD618u;
    {
        const bool branch_taken_0x1bd618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BD61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD618u;
        // 0x1bd61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd618) {
            ctx->pc = 0x1BD634u;
            goto label_1bd634;
        }
    }
    ctx->pc = 0x1BD620u;
    // 0x1bd620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd624: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd628: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x1bd628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bd62c: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1BD62Cu;
    SET_GPR_U32(ctx, 31, 0x1BD634u);
    ctx->pc = 0x1BD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD62Cu;
    // 0x1bd630: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1BD62Cu, 0x1BD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD634u;
label_1bd634:
    // 0x1bd634: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1bd634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd638: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1bd638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bd63c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1bd63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd640: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bd644: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x1bd644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1bd648: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1BD648u;
    {
        const bool branch_taken_0x1bd648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd648) {
            ctx->pc = 0x1BD680u;
            goto label_1bd680;
        }
    }
    ctx->pc = 0x1BD650u;
    // 0x1bd650: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1bd650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bd654: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bd658: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1bd658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bd65c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1bd65cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bd660: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bd660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bd664: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd668: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bd668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd66c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BD66Cu;
    {
        const bool branch_taken_0x1bd66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd66c) {
            ctx->pc = 0x1BD6D4u;
            goto label_1bd6d4;
        }
    }
    ctx->pc = 0x1BD674u;
    // 0x1bd674: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bd674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd678: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BD678u;
    {
        const bool branch_taken_0x1bd678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD678u;
        // 0x1bd67c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd678) {
            ctx->pc = 0x1BD6D4u;
            goto label_1bd6d4;
        }
    }
    ctx->pc = 0x1BD680u;
label_1bd680:
    // 0x1bd680: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1bd680u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1bd684: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1bd684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bd688: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x1bd688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bd68c: 0x2812  mflo        $a1
    ctx->pc = 0x1bd68cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1bd690: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bd690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bd694: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x1bd694u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1bd698: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD698u;
    {
        const bool branch_taken_0x1bd698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd698) {
            ctx->pc = 0x1BD6A4u;
            goto label_1bd6a4;
        }
    }
    ctx->pc = 0x1BD6A0u;
    // 0x1bd6a0: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1bd6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1bd6a4:
    // 0x1bd6a4: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1bd6a4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1bd6a8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1bd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bd6ac: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1bd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bd6b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd6b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bd6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd6b8: 0x2010  mfhi        $a0
    ctx->pc = 0x1bd6b8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bd6bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bd6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bd6c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd6c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD6C4u;
    {
        const bool branch_taken_0x1bd6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6c4) {
            ctx->pc = 0x1BD6D4u;
            goto label_1bd6d4;
        }
    }
    ctx->pc = 0x1BD6CCu;
    // 0x1bd6cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd6d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bd6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1bd6d4:
    // 0x1bd6d4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1bd6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bd6d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bd6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bd6dc: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1bd6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x1bd6e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd6e4: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD6E4u;
    {
        const bool branch_taken_0x1bd6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6e4) {
            ctx->pc = 0x1BD72Cu;
            goto label_1bd72c;
        }
    }
    ctx->pc = 0x1BD6ECu;
    // 0x1bd6ec: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BD6ECu;
    SET_GPR_U32(ctx, 31, 0x1BD6F4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BD6ECu, 0x1BD6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6F4u;
label_1bd6f4:
    // 0x1bd6f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BD6F4u;
    {
        const bool branch_taken_0x1bd6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6f4) {
            ctx->pc = 0x1BD72Cu;
            goto label_1bd72c;
        }
    }
    ctx->pc = 0x1BD6FCu;
label_1bd6fc:
    // 0x1bd6fc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1bd6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bd700: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bd704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd70c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BD70Cu;
    SET_GPR_U32(ctx, 31, 0x1BD714u);
    ctx->pc = 0x1BD710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD70Cu;
    // 0x1bd710: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BD70Cu, 0x1BD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD714u;
label_1bd714:
    // 0x1bd714: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x1BD714u;
    SET_GPR_U32(ctx, 31, 0x1BD71Cu);
    ctx->pc = 0x1BD718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD714u;
    // 0x1bd718: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x1BD714u, 0x1BD71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD71Cu;
label_1bd71c:
    // 0x1bd71c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1bd71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd720: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bd720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd724: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1bd724u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bd728: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1bd728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_1bd72c:
    // 0x1bd72c: 0x0  nop
    ctx->pc = 0x1bd72cu;
    // NOP
    // 0x1bd730: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1bd730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd734: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1bd734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd738: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bd738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bd73c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd740: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1bd740u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1bd744: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1bd744u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bd748: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1BD748u;
    {
        const bool branch_taken_0x1bd748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd748) {
            ctx->pc = 0x1BD6FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd6fc;
        }
    }
    ctx->pc = 0x1BD750u;
    // 0x1bd750: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bd750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bd754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd75c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd760: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD760u;
        // 0x1bd764: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD768u;
}
