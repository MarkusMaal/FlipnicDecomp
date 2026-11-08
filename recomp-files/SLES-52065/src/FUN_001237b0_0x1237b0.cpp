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

// Function: FUN_001237b0
// Address: 0x1237b0 - 0x1239c8
void FUN_001237b0_0x1237b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001237b0_0x1237b0");
#endif

    switch (ctx->pc) {
        case 0x1237d4u: goto label_1237d4;
        case 0x123860u: goto label_123860;
        case 0x1238acu: goto label_1238ac;
        case 0x123928u: goto label_123928;
        case 0x123974u: goto label_123974;
        default: break;
    }

    ctx->pc = 0x1237b0u;

    // 0x1237b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1237b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1237b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1237b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1237b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1237b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1237bc: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x1237bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x1237c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1237c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237c4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1237c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1237c8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1237c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1237cc: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1237CCu;
    {
        const bool branch_taken_0x1237cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237CCu;
        // 0x1237d0: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237cc) {
            ctx->pc = 0x123974u;
            goto label_123974;
        }
    }
    ctx->pc = 0x1237D4u;
label_1237d4:
    // 0x1237d4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1237d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1237d8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1237d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1237dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1237dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1237e0: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1237e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1237e4: 0x14870033  bne         $a0, $a3, . + 4 + (0x33 << 2)
    ctx->pc = 0x1237E4u;
    {
        const bool branch_taken_0x1237e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x1237e4) {
            ctx->pc = 0x1238B4u;
            goto label_1238b4;
        }
    }
    ctx->pc = 0x1237ECu;
    // 0x1237ec: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x1237ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1237f0: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1237F0u;
    {
        const bool branch_taken_0x1237f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1237f0) {
            ctx->pc = 0x123848u;
            goto label_123848;
        }
    }
    ctx->pc = 0x1237F8u;
    // 0x1237f8: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1237f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1237fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1237fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123800: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x123800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x123804: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x123804u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x123808: 0x14c5000f  bne         $a2, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x123808u;
    {
        const bool branch_taken_0x123808 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x123808) {
            ctx->pc = 0x123848u;
            goto label_123848;
        }
    }
    ctx->pc = 0x123810u;
    // 0x123810: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x123810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123814: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x123814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x123818: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x123818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x12381c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x12381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x123820: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x123820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123824: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x123824u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x123828: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x123828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12382c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x12382cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123830: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x123830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123834: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x123834u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123838: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x123838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12383c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x12383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x123840: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x123840u;
    {
        const bool branch_taken_0x123840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123840u;
        // 0x123844: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123840) {
            ctx->pc = 0x123974u;
            goto label_123974;
        }
    }
    ctx->pc = 0x123848u;
label_123848:
    // 0x123848: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x123848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12384c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12384Cu;
    {
        const bool branch_taken_0x12384c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x12384c) {
            ctx->pc = 0x123860u;
            goto label_123860;
        }
    }
    ctx->pc = 0x123854u;
    // 0x123854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x123854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123858: 0xc048e74  jal         func_1239D0
    ctx->pc = 0x123858u;
    SET_GPR_U32(ctx, 31, 0x123860u);
    ctx->pc = 0x12385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123858u;
    // 0x12385c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x123858u, 0x123860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123860u;
label_123860:
    // 0x123860: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123864: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x123864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123868: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x123868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x12386c: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x12386cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123870: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123874: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123878: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x12387c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123880: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123884: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x123884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x123888: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12388c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123890: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x123894: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x123898: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12389c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1238a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1238a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1238a4: 0xc048e98  jal         func_123A60
    ctx->pc = 0x1238A4u;
    SET_GPR_U32(ctx, 31, 0x1238ACu);
    ctx->pc = 0x1238A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1238A4u;
    // 0x1238a8: 0x432024  and         $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A60u, 0x1238A4u, 0x1238ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238ACu;
label_1238ac:
    // 0x1238ac: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1238ACu;
    {
        const bool branch_taken_0x1238ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1238ac) {
            ctx->pc = 0x123974u;
            goto label_123974;
        }
    }
    ctx->pc = 0x1238B4u;
label_1238b4:
    // 0x1238b4: 0x0  nop
    ctx->pc = 0x1238b4u;
    // NOP
    // 0x1238b8: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1238B8u;
    {
        const bool branch_taken_0x1238b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1238b8) {
            ctx->pc = 0x123910u;
            goto label_123910;
        }
    }
    ctx->pc = 0x1238C0u;
    // 0x1238c0: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1238c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1238c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1238c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1238c8: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x1238c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1238cc: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x1238ccu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1238d0: 0x14c5000f  bne         $a2, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1238D0u;
    {
        const bool branch_taken_0x1238d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1238d0) {
            ctx->pc = 0x123910u;
            goto label_123910;
        }
    }
    ctx->pc = 0x1238D8u;
    // 0x1238d8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1238d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1238dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1238dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1238e0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1238e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1238e4: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1238e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1238e8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1238e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1238ec: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1238ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1238f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1238f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1238f4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1238f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1238f8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1238f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1238fc: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x1238fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123900: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x123900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123904: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x123904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x123908: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x123908u;
    {
        const bool branch_taken_0x123908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123908u;
        // 0x12390c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123908) {
            ctx->pc = 0x123974u;
            goto label_123974;
        }
    }
    ctx->pc = 0x123910u;
label_123910:
    // 0x123910: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x123910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123914: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123914u;
    {
        const bool branch_taken_0x123914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x123914) {
            ctx->pc = 0x123928u;
            goto label_123928;
        }
    }
    ctx->pc = 0x12391Cu;
    // 0x12391c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12391cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123920: 0xc048e98  jal         func_123A60
    ctx->pc = 0x123920u;
    SET_GPR_U32(ctx, 31, 0x123928u);
    ctx->pc = 0x123924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123920u;
    // 0x123924: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A60u, 0x123920u, 0x123928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123928u;
label_123928:
    // 0x123928: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12392c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x12392cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123930: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x123930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x123934: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x123934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123938: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12393c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123940: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x123944: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123948: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12394c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x12394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x123950: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x123950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123954: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123958: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12395c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12395cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x123960: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123964: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123968: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x123968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12396c: 0xc048e74  jal         func_1239D0
    ctx->pc = 0x12396Cu;
    SET_GPR_U32(ctx, 31, 0x123974u);
    ctx->pc = 0x123970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12396Cu;
    // 0x123970: 0x432024  and         $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x12396Cu, 0x123974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123974u;
label_123974:
    // 0x123974: 0x0  nop
    ctx->pc = 0x123974u;
    // NOP
    // 0x123978: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x123978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x12397c: 0x1206000a  beq         $s0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x12397Cu;
    {
        const bool branch_taken_0x12397c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x12397c) {
            ctx->pc = 0x1239A8u;
            goto label_1239a8;
        }
    }
    ctx->pc = 0x123984u;
    // 0x123984: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x123984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123988: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x123988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12398c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12398cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123990: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x123990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x123994: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x123994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123998: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x123998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x12399c: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x12399cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1239a0: 0x10a3ff8c  beq         $a1, $v1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x1239A0u;
    {
        const bool branch_taken_0x1239a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1239a0) {
            ctx->pc = 0x1237D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1237d4;
        }
    }
    ctx->pc = 0x1239A8u;
label_1239a8:
    // 0x1239a8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1239a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1239ac: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1239acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1239b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1239b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1239b4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1239b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1239b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1239b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1239bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1239bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1239c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1239C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1239C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239C0u;
        // 0x1239c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1239C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1239C8u;
}
