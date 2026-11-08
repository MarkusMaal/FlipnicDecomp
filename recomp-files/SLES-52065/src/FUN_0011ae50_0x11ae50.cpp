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

// Function: FUN_0011ae50
// Address: 0x11ae50 - 0x11b050
void FUN_0011ae50_0x11ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ae50_0x11ae50");
#endif

    switch (ctx->pc) {
        case 0x11ae88u: goto label_11ae88;
        case 0x11aea8u: goto label_11aea8;
        case 0x11aec0u: goto label_11aec0;
        case 0x11aee0u: goto label_11aee0;
        case 0x11aef4u: goto label_11aef4;
        case 0x11af00u: goto label_11af00;
        case 0x11af10u: goto label_11af10;
        case 0x11af1cu: goto label_11af1c;
        case 0x11af34u: goto label_11af34;
        case 0x11af68u: goto label_11af68;
        case 0x11af74u: goto label_11af74;
        case 0x11af80u: goto label_11af80;
        case 0x11af98u: goto label_11af98;
        case 0x11afbcu: goto label_11afbc;
        case 0x11afd4u: goto label_11afd4;
        case 0x11affcu: goto label_11affc;
        default: break;
    }

    ctx->pc = 0x11ae50u;

    // 0x11ae50: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x11ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x11ae54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11ae58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11ae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11ae5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11ae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11ae60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11ae60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11ae64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11ae64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11ae6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11ae6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11ae74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11ae74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae78: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x11ae78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae7c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x11ae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11ae80: 0xc046d2c  jal         func_11B4B0
    ctx->pc = 0x11AE80u;
    SET_GPR_U32(ctx, 31, 0x11AE88u);
    ctx->pc = 0x11AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE80u;
    // 0x11ae84: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B4B0u, 0x11AE80u, 0x11AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE88u;
label_11ae88:
    // 0x11ae88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AE88u;
    {
        const bool branch_taken_0x11ae88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE88u;
        // 0x11ae8c: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae88) {
            ctx->pc = 0x11AE98u;
            goto label_11ae98;
        }
    }
    ctx->pc = 0x11AE90u;
    // 0x11ae90: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x11AE90u;
    {
        const bool branch_taken_0x11ae90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE90u;
        // 0x11ae94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae90) {
            ctx->pc = 0x11B02Cu;
            goto label_11b02c;
        }
    }
    ctx->pc = 0x11AE98u;
label_11ae98:
    // 0x11ae98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11ae9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aea0: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11AEA0u;
    SET_GPR_U32(ctx, 31, 0x11AEA8u);
    ctx->pc = 0x11AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AEA0u;
    // 0x11aea4: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11AEA0u, 0x11AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEA8u;
label_11aea8:
    // 0x11aea8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11aea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11aeac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11aeacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aeb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11aeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aeb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11aeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aeb8: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11AEB8u;
    SET_GPR_U32(ctx, 31, 0x11AEC0u);
    ctx->pc = 0x11AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AEB8u;
    // 0x11aebc: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11AEB8u, 0x11AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEC0u;
label_11aec0:
    // 0x11aec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aec4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AEC4u;
    {
        const bool branch_taken_0x11aec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEC4u;
        // 0x11aec8: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aec4) {
            ctx->pc = 0x11AED8u;
            goto label_11aed8;
        }
    }
    ctx->pc = 0x11AECCu;
    // 0x11aecc: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x11aeccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11aed0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x11AED0u;
    {
        const bool branch_taken_0x11aed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11aed0) {
            ctx->pc = 0x11AF40u;
            goto label_11af40;
        }
    }
    ctx->pc = 0x11AED8u;
label_11aed8:
    // 0x11aed8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AED8u;
    SET_GPR_U32(ctx, 31, 0x11AEE0u);
    ctx->pc = 0x11AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AED8u;
    // 0x11aedc: 0x26650104  addiu       $a1, $s3, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AED8u, 0x11AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEE0u;
label_11aee0:
    // 0x11aee0: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x11AEE0u;
    {
        const bool branch_taken_0x11aee0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEE0u;
        // 0x11aee4: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aee0) {
            ctx->pc = 0x11AF08u;
            goto label_11af08;
        }
    }
    ctx->pc = 0x11AEE8u;
    // 0x11aee8: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x11aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x11aeec: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AEECu;
    SET_GPR_U32(ctx, 31, 0x11AEF4u);
    ctx->pc = 0x11AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AEECu;
    // 0x11aef0: 0x266503c4  addiu       $a1, $s3, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AEECu, 0x11AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AEF4u;
label_11aef4:
    // 0x11aef4: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x11aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x11aef8: 0xc080664  jal         func_201990
    ctx->pc = 0x11AEF8u;
    SET_GPR_U32(ctx, 31, 0x11AF00u);
    ctx->pc = 0x11AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AEF8u;
    // 0x11aefc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AEF8u, 0x11AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF00u;
label_11af00:
    // 0x11af00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11AF00u;
    {
        const bool branch_taken_0x11af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF00u;
        // 0x11af04: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af00) {
            ctx->pc = 0x11AF14u;
            goto label_11af14;
        }
    }
    ctx->pc = 0x11AF08u;
label_11af08:
    // 0x11af08: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AF08u;
    SET_GPR_U32(ctx, 31, 0x11AF10u);
    ctx->pc = 0x11AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF08u;
    // 0x11af0c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AF08u, 0x11AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF10u;
label_11af10:
    // 0x11af10: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x11af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_11af14:
    // 0x11af14: 0xc080664  jal         func_201990
    ctx->pc = 0x11AF14u;
    SET_GPR_U32(ctx, 31, 0x11AF1Cu);
    ctx->pc = 0x11AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF14u;
    // 0x11af18: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AF14u, 0x11AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF1Cu;
label_11af1c:
    // 0x11af1c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x11af1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11af20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af24: 0x266500f8  addiu       $a1, $s3, 0xF8
    ctx->pc = 0x11af24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 248));
    // 0x11af28: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x11af28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x11af2c: 0xc046e18  jal         func_11B860
    ctx->pc = 0x11AF2Cu;
    SET_GPR_U32(ctx, 31, 0x11AF34u);
    ctx->pc = 0x11AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF2Cu;
    // 0x11af30: 0x27a701c0  addiu       $a3, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B860u, 0x11AF2Cu, 0x11AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF34u;
label_11af34:
    // 0x11af34: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x11af34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
    // 0x11af38: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x11AF38u;
    {
        const bool branch_taken_0x11af38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF38u;
        // 0x11af3c: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af38) {
            ctx->pc = 0x11B02Cu;
            goto label_11b02c;
        }
    }
    ctx->pc = 0x11AF40u;
label_11af40:
    // 0x11af40: 0x826203c4  lb          $v0, 0x3C4($s3)
    ctx->pc = 0x11af40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 964)));
    // 0x11af44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AF44u;
    {
        const bool branch_taken_0x11af44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF44u;
        // 0x11af48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af44) {
            ctx->pc = 0x11AF54u;
            goto label_11af54;
        }
    }
    ctx->pc = 0x11AF4Cu;
    // 0x11af4c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x11AF4Cu;
    {
        const bool branch_taken_0x11af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11af4c) {
            ctx->pc = 0x11B02Cu;
            goto label_11b02c;
        }
    }
    ctx->pc = 0x11AF54u;
label_11af54:
    // 0x11af54: 0x8e620538  lw          $v0, 0x538($s3)
    ctx->pc = 0x11af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1336)));
    // 0x11af58: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11AF58u;
    {
        const bool branch_taken_0x11af58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF58u;
        // 0x11af5c: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af58) {
            ctx->pc = 0x11AFB4u;
            goto label_11afb4;
        }
    }
    ctx->pc = 0x11AF60u;
    // 0x11af60: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AF60u;
    SET_GPR_U32(ctx, 31, 0x11AF68u);
    ctx->pc = 0x11AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF60u;
    // 0x11af64: 0x26650104  addiu       $a1, $s3, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AF60u, 0x11AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF68u;
label_11af68:
    // 0x11af68: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x11af68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x11af6c: 0xc080664  jal         func_201990
    ctx->pc = 0x11AF6Cu;
    SET_GPR_U32(ctx, 31, 0x11AF74u);
    ctx->pc = 0x11AF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF6Cu;
    // 0x11af70: 0x266503c4  addiu       $a1, $s3, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AF6Cu, 0x11AF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF74u;
label_11af74:
    // 0x11af74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11af74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af78: 0xc080664  jal         func_201990
    ctx->pc = 0x11AF78u;
    SET_GPR_U32(ctx, 31, 0x11AF80u);
    ctx->pc = 0x11AF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF78u;
    // 0x11af7c: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AF78u, 0x11AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF80u;
label_11af80:
    // 0x11af80: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x11af80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11af84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af88: 0x266500f4  addiu       $a1, $s3, 0xF4
    ctx->pc = 0x11af88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 244));
    // 0x11af8c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x11af8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11af90: 0xc046e18  jal         func_11B860
    ctx->pc = 0x11AF90u;
    SET_GPR_U32(ctx, 31, 0x11AF98u);
    ctx->pc = 0x11AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF90u;
    // 0x11af94: 0x27a701c0  addiu       $a3, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B860u, 0x11AF90u, 0x11AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF98u;
label_11af98:
    // 0x11af98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AF98u;
    {
        const bool branch_taken_0x11af98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11af98) {
            ctx->pc = 0x11AFA8u;
            goto label_11afa8;
        }
    }
    ctx->pc = 0x11AFA0u;
    // 0x11afa0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11AFA0u;
    {
        const bool branch_taken_0x11afa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFA0u;
        // 0x11afa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afa0) {
            ctx->pc = 0x11B02Cu;
            goto label_11b02c;
        }
    }
    ctx->pc = 0x11AFA8u;
label_11afa8:
    // 0x11afa8: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x11afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
    // 0x11afac: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11AFACu;
    {
        const bool branch_taken_0x11afac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFACu;
        // 0x11afb0: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afac) {
            ctx->pc = 0x11B02Cu;
            goto label_11b02c;
        }
    }
    ctx->pc = 0x11AFB4u;
label_11afb4:
    // 0x11afb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11afb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11afb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11afb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11afbc:
    // 0x11afbc: 0x8e62052c  lw          $v0, 0x52C($s3)
    ctx->pc = 0x11afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11afc0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11afc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11afc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11afc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11afc8: 0x24c6e730  addiu       $a2, $a2, -0x18D0
    ctx->pc = 0x11afc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960944));
    // 0x11afcc: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11AFCCu;
    SET_GPR_U32(ctx, 31, 0x11AFD4u);
    ctx->pc = 0x11AFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFCCu;
    // 0x11afd0: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11AFCCu, 0x11AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFD4u;
label_11afd4:
    // 0x11afd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11afd8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AFD8u;
    {
        const bool branch_taken_0x11afd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11afd8) {
            ctx->pc = 0x11AFE8u;
            goto label_11afe8;
        }
    }
    ctx->pc = 0x11AFE0u;
    // 0x11afe0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11AFE0u;
    {
        const bool branch_taken_0x11afe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFE0u;
        // 0x11afe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afe0) {
            ctx->pc = 0x11B02Cu;
            goto label_11b02c;
        }
    }
    ctx->pc = 0x11AFE8u;
label_11afe8:
    // 0x11afe8: 0x8e62052c  lw          $v0, 0x52C($s3)
    ctx->pc = 0x11afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11afec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11afecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aff0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x11aff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11aff4: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11AFF4u;
    SET_GPR_U32(ctx, 31, 0x11AFFCu);
    ctx->pc = 0x11AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFF4u;
    // 0x11aff8: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11AFF4u, 0x11AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFFCu;
label_11affc:
    // 0x11affc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b000: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B000u;
    {
        const bool branch_taken_0x11b000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b000) {
            ctx->pc = 0x11B020u;
            goto label_11b020;
        }
    }
    ctx->pc = 0x11B008u;
    // 0x11b008: 0x8e63052c  lw          $v1, 0x52C($s3)
    ctx->pc = 0x11b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11b00c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x11b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x11b010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11b010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b014: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11b018: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B018u;
    {
        const bool branch_taken_0x11b018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B018u;
        // 0x11b01c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b018) {
            ctx->pc = 0x11B02Cu;
            goto label_11b02c;
        }
    }
    ctx->pc = 0x11B020u;
label_11b020:
    // 0x11b020: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x11b020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x11b024: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x11B024u;
    {
        const bool branch_taken_0x11b024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B024u;
        // 0x11b028: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b024) {
            ctx->pc = 0x11AFBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11afbc;
        }
    }
    ctx->pc = 0x11B02Cu;
label_11b02c:
    // 0x11b02c: 0x0  nop
    ctx->pc = 0x11b02cu;
    // NOP
    // 0x11b030: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11b030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11b034: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11b034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b038: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11b038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b03c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11b03cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11b044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b048: 0x3e00008  jr          $ra
    ctx->pc = 0x11B048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B048u;
        // 0x11b04c: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B050u;
}
