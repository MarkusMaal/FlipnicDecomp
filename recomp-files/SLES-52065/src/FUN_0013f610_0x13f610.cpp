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

// Function: FUN_0013f610
// Address: 0x13f610 - 0x13f7d8
void FUN_0013f610_0x13f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f610_0x13f610");
#endif

    switch (ctx->pc) {
        case 0x13f678u: goto label_13f678;
        case 0x13f68cu: goto label_13f68c;
        case 0x13f6b8u: goto label_13f6b8;
        case 0x13f6d8u: goto label_13f6d8;
        case 0x13f6e0u: goto label_13f6e0;
        case 0x13f70cu: goto label_13f70c;
        case 0x13f74cu: goto label_13f74c;
        case 0x13f75cu: goto label_13f75c;
        case 0x13f790u: goto label_13f790;
        case 0x13f7acu: goto label_13f7ac;
        default: break;
    }

    ctx->pc = 0x13f610u;

    // 0x13f610: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x13f610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x13f614: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13f614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13f618: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f61c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f624: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x13f624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x13f628: 0x8c23f090  lw          $v1, -0xF70($at)
    ctx->pc = 0x13f628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F090u));
    // 0x13f62c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f630: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13f630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13f634: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f638: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13f638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x13f63c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x13f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x13f640: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x13f640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x13f644: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x13f644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x13f648: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f64c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x13f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x13f650: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x13f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x13f654: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f658: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x13f658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x13f65c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x13f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f660: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x13f660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13f664: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x13F664u;
    {
        const bool branch_taken_0x13f664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F664u;
        // 0x13f668: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f664) {
            ctx->pc = 0x13F7C0u;
            goto label_13f7c0;
        }
    }
    ctx->pc = 0x13F66Cu;
    // 0x13f66c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x13f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x13f670: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x13F670u;
    SET_GPR_U32(ctx, 31, 0x13F678u);
    ctx->pc = 0x13F674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F670u;
    // 0x13f674: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x13F670u, 0x13F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F678u;
label_13f678:
    // 0x13f678: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f67c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f684: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x13F684u;
    SET_GPR_U32(ctx, 31, 0x13F68Cu);
    ctx->pc = 0x13F688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F684u;
    // 0x13f688: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x13F684u, 0x13F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F68Cu;
label_13f68c:
    // 0x13f68c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x13f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f690: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x13f690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13f694: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f698: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x13f698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13f69c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F69Cu;
    {
        const bool branch_taken_0x13f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f69c) {
            ctx->pc = 0x13F6A8u;
            goto label_13f6a8;
        }
    }
    ctx->pc = 0x13F6A4u;
    // 0x13f6a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_13f6a8:
    // 0x13f6a8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f6ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f6b0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13F6B0u;
    SET_GPR_U32(ctx, 31, 0x13F6B8u);
    ctx->pc = 0x13F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6B0u;
    // 0x13f6b4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13F6B0u, 0x13F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6B8u;
label_13f6b8:
    // 0x13f6b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13f6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6bc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F6BCu;
    {
        const bool branch_taken_0x13f6bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6BCu;
        // 0x13f6c0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6bc) {
            ctx->pc = 0x13F6E0u;
            goto label_13f6e0;
        }
    }
    ctx->pc = 0x13F6C4u;
    // 0x13f6c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13f6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13f6c8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13f6cc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f6d0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13F6D0u;
    SET_GPR_U32(ctx, 31, 0x13F6D8u);
    ctx->pc = 0x13F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6D0u;
    // 0x13f6d4: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13F6D0u, 0x13F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6D8u;
label_13f6d8:
    // 0x13f6d8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13F6D8u;
    SET_GPR_U32(ctx, 31, 0x13F6E0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13F6D8u, 0x13F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6E0u;
label_13f6e0:
    // 0x13f6e0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f6e4: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x13f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x13f6e8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x13f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f6ec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13f6f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f6f8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x13f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x13f6fc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f700: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x13f700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x13f704: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x13F704u;
    SET_GPR_U32(ctx, 31, 0x13F70Cu);
    ctx->pc = 0x13F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F704u;
    // 0x13f708: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x13F704u, 0x13F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F70Cu;
label_13f70c:
    // 0x13f70c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x13f70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f710: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13f714: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f718: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x13f718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13f71c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x13f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x13f720: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f724: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x13f724u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x13f728: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x13f728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x13f72c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x13f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f730: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x13f730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13f734: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x13f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x13f738: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x13f738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x13f73c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x13f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f740: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x13f740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13f744: 0xc050054  jal         func_140150
    ctx->pc = 0x13F744u;
    SET_GPR_U32(ctx, 31, 0x13F74Cu);
    ctx->pc = 0x13F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F744u;
    // 0x13f748: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140150u, 0x13F744u, 0x13F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F74Cu;
label_13f74c:
    // 0x13f74c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13f750: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13f750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13f754: 0xc050054  jal         func_140150
    ctx->pc = 0x13F754u;
    SET_GPR_U32(ctx, 31, 0x13F75Cu);
    ctx->pc = 0x13F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F754u;
    // 0x13f758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140150u, 0x13F754u, 0x13F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F75Cu;
label_13f75c:
    // 0x13f75c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x13f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13f760: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x13f760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f764: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x13f764u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f768: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x13f768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13f76c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13f770: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x13f770u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13f774: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x13f774u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x13f778: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x13f778u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x13f77c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13f77cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f780: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x13f780u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13f784: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x13f784u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x13f788: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13F788u;
    {
        const bool branch_taken_0x13f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F788u;
        // 0x13f78c: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f788) {
            ctx->pc = 0x13F7ACu;
            goto label_13f7ac;
        }
    }
    ctx->pc = 0x13F790u;
label_13f790:
    // 0x13f790: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F790u;
    {
        const bool branch_taken_0x13f790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f790) {
            ctx->pc = 0x13F7A0u;
            goto label_13f7a0;
        }
    }
    ctx->pc = 0x13F798u;
    // 0x13f798: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f79c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_13f7a0:
    // 0x13f7a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f7a4: 0xc04fdf8  jal         func_13F7E0
    ctx->pc = 0x13F7A4u;
    SET_GPR_U32(ctx, 31, 0x13F7ACu);
    ctx->pc = 0x13F7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7A4u;
    // 0x13f7a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F7E0u, 0x13F7A4u, 0x13F7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7ACu;
label_13f7ac:
    // 0x13f7ac: 0x0  nop
    ctx->pc = 0x13f7acu;
    // NOP
    // 0x13f7b0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x13f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13f7b4: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x13f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x13f7b8: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13F7B8u;
    {
        const bool branch_taken_0x13f7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f7b8) {
            ctx->pc = 0x13F790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f790;
        }
    }
    ctx->pc = 0x13F7C0u;
label_13f7c0:
    // 0x13f7c0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f7c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f7c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f7cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7D0u;
        // 0x13f7d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F7D8u;
}
