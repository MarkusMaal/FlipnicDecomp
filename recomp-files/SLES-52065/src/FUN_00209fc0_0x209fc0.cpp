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

// Function: FUN_00209fc0
// Address: 0x209fc0 - 0x20a334
void FUN_00209fc0_0x209fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209fc0_0x209fc0");
#endif

    switch (ctx->pc) {
        case 0x20a014u: goto label_20a014;
        case 0x20a034u: goto label_20a034;
        case 0x20a050u: goto label_20a050;
        case 0x20a308u: goto label_20a308;
        default: break;
    }

    ctx->pc = 0x209fc0u;

    // 0x209fc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x209fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x209fc4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x209fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x209fc8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x209fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x209fcc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x209fccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x209fd0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x209fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x209fd4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x209fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x209fd8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x209fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x209fdc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x209fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x209fe0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x209fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x209fe4: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x209fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x209fe8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x209fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x209fec: 0x5b403  sra         $s6, $a1, 16
    ctx->pc = 0x209fecu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 16));
    // 0x209ff0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x209ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x209ff4: 0x79403  sra         $s2, $a3, 16
    ctx->pc = 0x209ff4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 16));
    // 0x209ff8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x209ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x209ffc: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x209ffcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
    // 0x20a000: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x20a000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x20a004: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x20a004u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x20a008: 0x9a403  sra         $s4, $t1, 16
    ctx->pc = 0x20a008u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 9), 16));
    // 0x20a00c: 0xc0827a6  jal         func_209E98
    ctx->pc = 0x20A00Cu;
    SET_GPR_U32(ctx, 31, 0x20A014u);
    ctx->pc = 0x20A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A00Cu;
    // 0x20a010: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E98u, 0x20A00Cu, 0x20A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A014u;
label_20a014:
    // 0x20a014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20a014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a018: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x20a018u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x20a01c: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x20a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x20a020: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20a020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20a024: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x20A024u;
    {
        const bool branch_taken_0x20a024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a024) {
            ctx->pc = 0x20A028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A024u;
            // 0x20a028: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A060u;
            goto label_20a060;
        }
    }
    ctx->pc = 0x20A02Cu;
    // 0x20a02c: 0xc0827c4  jal         func_209F10
    ctx->pc = 0x20A02Cu;
    SET_GPR_U32(ctx, 31, 0x20A034u);
    ctx->pc = 0x209F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209F10u, 0x20A02Cu, 0x20A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A034u;
label_20a034:
    // 0x20a034: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A034u;
    {
        const bool branch_taken_0x20a034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A034u;
        // 0x20a038: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a034) {
            ctx->pc = 0x20A058u;
            goto label_20a058;
        }
    }
    ctx->pc = 0x20A03Cu;
    // 0x20a03c: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x20a03cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x20a040: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x20a040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x20a044: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x20a044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x20a048: 0xc0827ec  jal         func_209FB0
    ctx->pc = 0x20A048u;
    SET_GPR_U32(ctx, 31, 0x20A050u);
    ctx->pc = 0x20A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A048u;
    // 0x20a04c: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FB0u, 0x20A048u, 0x20A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A050u;
label_20a050:
    // 0x20a050: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20A050u;
    {
        const bool branch_taken_0x20a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A050u;
        // 0x20a054: 0x96240002  lhu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a050) {
            ctx->pc = 0x20A06Cu;
            goto label_20a06c;
        }
    }
    ctx->pc = 0x20A058u;
label_20a058:
    // 0x20a058: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x20a058u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x20a05c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x20a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_20a060:
    // 0x20a060: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20a060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x20a064: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x20a064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x20a068: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20a068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_20a06c:
    // 0x20a06c: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x20a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x20a070: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x20a070u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20a074: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x20a074u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x20a078: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x20a078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20a07c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A07Cu;
    {
        const bool branch_taken_0x20a07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A07Cu;
        // 0x20a080: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a07c) {
            ctx->pc = 0x20A094u;
            goto label_20a094;
        }
    }
    ctx->pc = 0x20A084u;
    // 0x20a084: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x20a084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20a088: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A088u;
    {
        const bool branch_taken_0x20a088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A088u;
        // 0x20a08c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a088) {
            ctx->pc = 0x20A094u;
            goto label_20a094;
        }
    }
    ctx->pc = 0x20A090u;
    // 0x20a090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a094:
    // 0x20a094: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x20a094u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x20a098: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x20a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x20a09c: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x20a09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x20a0a0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x20a0a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x20a0a4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x20a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x20a0a8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x20a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x20a0ac: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x20a0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x20a0b0: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x20a0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x20a0b4: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x20a0b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x20a0b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20a0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20a0bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a0c0: 0x14a4002b  bne         $a1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20A0C0u;
    {
        const bool branch_taken_0x20a0c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x20A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0C0u;
        // 0x20a0c4: 0xfe630010  sd          $v1, 0x10($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0c0) {
            ctx->pc = 0x20A170u;
            goto label_20a170;
        }
    }
    ctx->pc = 0x20A0C8u;
    // 0x20a0c8: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x20a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20a0cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a0d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20a0d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20a0d4: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x20A0D4u;
    {
        const bool branch_taken_0x20a0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0D4u;
        // 0x20a0d8: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0d4) {
            ctx->pc = 0x20A144u;
            goto label_20a144;
        }
    }
    ctx->pc = 0x20A0DCu;
    // 0x20a0dc: 0x260309ff  addiu       $v1, $s0, 0x9FF
    ctx->pc = 0x20a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
    // 0x20a0e0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A0E0u;
    {
        const bool branch_taken_0x20a0e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a0e0) {
            ctx->pc = 0x20A0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A0E0u;
            // 0x20a0e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A0E8u;
            goto label_20a0e8;
        }
    }
    ctx->pc = 0x20A0E8u;
label_20a0e8:
    // 0x20a0e8: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x20a0e8u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20a0ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20a0f0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a0f4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x20a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x20a0f8: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x20a0f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20a0fc: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x20a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x20a100: 0x64a5027c  daddiu      $a1, $a1, 0x27C
    ctx->pc = 0x20a100u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
    // 0x20a104: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x20a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x20a108: 0x23b38  dsll        $a3, $v0, 12
    ctx->pc = 0x20a108u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 12);
    // 0x20a10c: 0x1812  mflo        $v1
    ctx->pc = 0x20a10cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x20a110: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x20a110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20a114: 0x72a31018  mult1       $v0, $s5, $v1
    ctx->pc = 0x20a114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20a118: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20a118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20a11c: 0x355f8  dsll        $t2, $v1, 23
    ctx->pc = 0x20a11cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
    // 0x20a120: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20a120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20a124: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x20a124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20a128: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x20a128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x20a12c: 0x10c00032  beqz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x20A12Cu;
    {
        const bool branch_taken_0x20a12c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A12Cu;
        // 0x20a130: 0x30a50fff  andi        $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a12c) {
            ctx->pc = 0x20A1F8u;
            goto label_20a1f8;
        }
    }
    ctx->pc = 0x20A134u;
    // 0x20a134: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x20a134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x20a138: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x20a138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x20a13c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x20A13Cu;
    {
        const bool branch_taken_0x20a13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A13Cu;
        // 0x20a140: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a13c) {
            ctx->pc = 0x20A200u;
            goto label_20a200;
        }
    }
    ctx->pc = 0x20A144u;
label_20a144:
    // 0x20a144: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A144u;
    {
        const bool branch_taken_0x20a144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a144) {
            ctx->pc = 0x20A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A144u;
            // 0x20a148: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A14Cu;
            goto label_20a14c;
        }
    }
    ctx->pc = 0x20A14Cu;
label_20a14c:
    // 0x20a14c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x20a14cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20a150: 0x2647ffff  addiu       $a3, $s2, -0x1
    ctx->pc = 0x20a150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20a154: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20a154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a158: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x20a158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x20a15c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20a160: 0x64a5027c  daddiu      $a1, $a1, 0x27C
    ctx->pc = 0x20a160u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
    // 0x20a164: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x20a164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x20a168: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x20A168u;
    {
        const bool branch_taken_0x20a168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A168u;
        // 0x20a16c: 0x24630019  addiu       $v1, $v1, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a168) {
            ctx->pc = 0x20A240u;
            goto label_20a240;
        }
    }
    ctx->pc = 0x20A170u;
label_20a170:
    // 0x20a170: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a174: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x20A174u;
    {
        const bool branch_taken_0x20a174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A174u;
        // 0x20a178: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a174) {
            ctx->pc = 0x20A284u;
            goto label_20a284;
        }
    }
    ctx->pc = 0x20A17Cu;
    // 0x20a17c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x20a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20a180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a184: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20a184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20a188: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x20A188u;
    {
        const bool branch_taken_0x20a188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A188u;
        // 0x20a18c: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a188) {
            ctx->pc = 0x20A218u;
            goto label_20a218;
        }
    }
    ctx->pc = 0x20A190u;
    // 0x20a190: 0x260309ff  addiu       $v1, $s0, 0x9FF
    ctx->pc = 0x20a190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
    // 0x20a194: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A194u;
    {
        const bool branch_taken_0x20a194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a194) {
            ctx->pc = 0x20A198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A194u;
            // 0x20a198: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A19Cu;
            goto label_20a19c;
        }
    }
    ctx->pc = 0x20A19Cu;
label_20a19c:
    // 0x20a19c: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x20a19cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20a1a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20a1a4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a1a8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x20a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x20a1ac: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x20a1acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20a1b0: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x20a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x20a1b4: 0x64a50290  daddiu      $a1, $a1, 0x290
    ctx->pc = 0x20a1b4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
    // 0x20a1b8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x20a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x20a1bc: 0x23b38  dsll        $a3, $v0, 12
    ctx->pc = 0x20a1bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 12);
    // 0x20a1c0: 0x1812  mflo        $v1
    ctx->pc = 0x20a1c0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x20a1c4: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x20a1c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20a1c8: 0x72a31018  mult1       $v0, $s5, $v1
    ctx->pc = 0x20a1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20a1cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20a1d0: 0x355f8  dsll        $t2, $v1, 23
    ctx->pc = 0x20a1d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
    // 0x20a1d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20a1d8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x20a1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20a1dc: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x20a1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x20a1e0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A1E0u;
    {
        const bool branch_taken_0x20a1e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1E0u;
        // 0x20a1e4: 0x30a50fff  andi        $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1e0) {
            ctx->pc = 0x20A1F8u;
            goto label_20a1f8;
        }
    }
    ctx->pc = 0x20A1E8u;
    // 0x20a1e8: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x20a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x20a1ec: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x20a1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x20a1f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20A1F0u;
    {
        const bool branch_taken_0x20a1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1F0u;
        // 0x20a1f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1f0) {
            ctx->pc = 0x20A200u;
            goto label_20a200;
        }
    }
    ctx->pc = 0x20A1F8u;
label_20a1f8:
    // 0x20a1f8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x20a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20a1fc: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x20a1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_20a200:
    // 0x20a200: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x20a200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x20a204: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x20a204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x20a208: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20a208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20a20c: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x20a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x20a210: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x20A210u;
    {
        const bool branch_taken_0x20a210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A210u;
        // 0x20a214: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a210) {
            ctx->pc = 0x20A308u;
            goto label_20a308;
        }
    }
    ctx->pc = 0x20A218u;
label_20a218:
    // 0x20a218: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A218u;
    {
        const bool branch_taken_0x20a218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a218) {
            ctx->pc = 0x20A21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A218u;
            // 0x20a21c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A220u;
            goto label_20a220;
        }
    }
    ctx->pc = 0x20A220u;
label_20a220:
    // 0x20a220: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x20a220u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20a224: 0x2647ffff  addiu       $a3, $s2, -0x1
    ctx->pc = 0x20a224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20a228: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20a228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a22c: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x20a22cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x20a230: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20a230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20a234: 0x64a50290  daddiu      $a1, $a1, 0x290
    ctx->pc = 0x20a234u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
    // 0x20a238: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x20a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x20a23c: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x20a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
label_20a240:
    // 0x20a240: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x20a240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x20a244: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x20a244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x20a248: 0x1012  mflo        $v0
    ctx->pc = 0x20a248u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20a24c: 0x2a23018  mult        $a2, $s5, $v0
    ctx->pc = 0x20a24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x20a250: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x20a250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20a254: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20a258: 0xc5282d  daddu       $a1, $a2, $a1
    ctx->pc = 0x20a258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x20a25c: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x20a25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x20a260: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x20a260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x20a264: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20a268: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x20a268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x20a26c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20a26cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20a270: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x20a270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x20a274: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x20a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x20a278: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20a27c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x20A27Cu;
    {
        const bool branch_taken_0x20a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A27Cu;
        // 0x20a280: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a27c) {
            ctx->pc = 0x20A308u;
            goto label_20a308;
        }
    }
    ctx->pc = 0x20A284u;
label_20a284:
    // 0x20a284: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20A284u;
    {
        const bool branch_taken_0x20a284 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A284u;
        // 0x20a288: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a284) {
            ctx->pc = 0x20A300u;
            goto label_20a300;
        }
    }
    ctx->pc = 0x20A28Cu;
    // 0x20a28c: 0x240202d0  addiu       $v0, $zero, 0x2D0
    ctx->pc = 0x20a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x20a290: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20a290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a294: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x20a294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20a298: 0x153040  sll         $a2, $s5, 1
    ctx->pc = 0x20a298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x20a29c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x20a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x20a2a0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20a2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a2a8: 0x64c700e8  daddiu      $a3, $a2, 0xE8
    ctx->pc = 0x20a2a8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)232);
    // 0x20a2ac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20a2acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20a2b0: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x20a2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x20a2b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20a2b8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x20a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x20a2bc: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x20a2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x20a2c0: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x20a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20a2c4: 0xa7282d  daddu       $a1, $a1, $a3
    ctx->pc = 0x20a2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 7));
    // 0x20a2c8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x20a2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x20a2cc: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x20a2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x20a2d0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x20a2d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20a2d4: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x20a2d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x20a2d8: 0x24840023  addiu       $a0, $a0, 0x23
    ctx->pc = 0x20a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 35));
    // 0x20a2dc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x20a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x20a2e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x20a2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20a2e4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20a2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x20a2e8: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x20a2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x20a2ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20a2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20a2f0: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x20a2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x20a2f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20a2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20a2f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20A2F8u;
    {
        const bool branch_taken_0x20a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2F8u;
        // 0x20a2fc: 0xfe630018  sd          $v1, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2f8) {
            ctx->pc = 0x20A308u;
            goto label_20a308;
        }
    }
    ctx->pc = 0x20A300u;
label_20a300:
    // 0x20a300: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x20A300u;
    SET_GPR_U32(ctx, 31, 0x20A308u);
    ctx->pc = 0x20A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A300u;
    // 0x20a304: 0x24845c80  addiu       $a0, $a0, 0x5C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x20A300u, 0x20A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A308u;
label_20a308:
    // 0x20a308: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x20a308u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x20a30c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x20a30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20a310: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x20a310u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20a314: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x20a314u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20a318: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x20a318u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20a31c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x20a31cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a320: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20a320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a324: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x20a324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a328: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20a328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a32c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A32Cu;
        // 0x20a330: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A334u;
}
