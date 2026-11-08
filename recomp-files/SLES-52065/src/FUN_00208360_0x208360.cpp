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

// Function: FUN_00208360
// Address: 0x208360 - 0x2084c8
void FUN_00208360_0x208360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208360_0x208360");
#endif

    switch (ctx->pc) {
        case 0x208380u: goto label_208380;
        case 0x208390u: goto label_208390;
        case 0x208460u: goto label_208460;
        case 0x2084b8u: goto label_2084b8;
        default: break;
    }

    ctx->pc = 0x208360u;

    // 0x208360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x208360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x208364: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x208364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x208368: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x208368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x20836c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20836cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x208370: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x208370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x208374: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x208374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x208378: 0xc081f46  jal         func_207D18
    ctx->pc = 0x208378u;
    SET_GPR_U32(ctx, 31, 0x208380u);
    ctx->pc = 0x20837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208378u;
    // 0x20837c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x208378u, 0x208380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208380u;
label_208380:
    // 0x208380: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x208380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x208384: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x208384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x208388: 0xc081f46  jal         func_207D18
    ctx->pc = 0x208388u;
    SET_GPR_U32(ctx, 31, 0x208390u);
    ctx->pc = 0x20838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208388u;
    // 0x20838c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x208388u, 0x208390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208390u;
label_208390:
    // 0x208390: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x208390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208394: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x208394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x208398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208398u;
    {
        const bool branch_taken_0x208398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208398u;
        // 0x20839c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208398) {
            ctx->pc = 0x2083A8u;
            goto label_2083a8;
        }
    }
    ctx->pc = 0x2083A0u;
    // 0x2083a0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2083A0u;
    {
        const bool branch_taken_0x2083a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083A0u;
        // 0x2083a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083a0) {
            ctx->pc = 0x2084B0u;
            goto label_2084b0;
        }
    }
    ctx->pc = 0x2083A8u;
label_2083a8:
    // 0x2083a8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2083a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2083ac: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2083acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2083b0: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2083B0u;
    {
        const bool branch_taken_0x2083b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2083B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083B0u;
        // 0x2083b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083b0) {
            ctx->pc = 0x2084B0u;
            goto label_2084b0;
        }
    }
    ctx->pc = 0x2083B8u;
    // 0x2083b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2083b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2083bc: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x2083bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x2083c0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2083c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2083c4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2083c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2083c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2083C8u;
    {
        const bool branch_taken_0x2083c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083C8u;
        // 0x2083cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083c8) {
            ctx->pc = 0x2083DCu;
            goto label_2083dc;
        }
    }
    ctx->pc = 0x2083D0u;
    // 0x2083d0: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x2083d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x2083d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2083D4u;
    {
        const bool branch_taken_0x2083d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2083D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083D4u;
        // 0x2083d8: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083d4) {
            ctx->pc = 0x2083F0u;
            goto label_2083f0;
        }
    }
    ctx->pc = 0x2083DCu;
label_2083dc:
    // 0x2083dc: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x2083DCu;
    {
        const bool branch_taken_0x2083dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x2083E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083DCu;
        // 0x2083e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083dc) {
            ctx->pc = 0x2084B0u;
            goto label_2084b0;
        }
    }
    ctx->pc = 0x2083E4u;
    // 0x2083e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2083e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2083e8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2083E8u;
    {
        const bool branch_taken_0x2083e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083E8u;
        // 0x2083ec: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083e8) {
            ctx->pc = 0x2084B0u;
            goto label_2084b0;
        }
    }
    ctx->pc = 0x2083F0u;
label_2083f0:
    // 0x2083f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2083F0u;
    {
        const bool branch_taken_0x2083f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2083F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083F0u;
        // 0x2083f4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083f0) {
            ctx->pc = 0x208408u;
            goto label_208408;
        }
    }
    ctx->pc = 0x2083F8u;
    // 0x2083f8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2083f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x2083fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2083fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208400: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x208400u;
    {
        const bool branch_taken_0x208400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208400u;
        // 0x208404: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208400) {
            ctx->pc = 0x2084B0u;
            goto label_2084b0;
        }
    }
    ctx->pc = 0x208408u;
label_208408:
    // 0x208408: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208408u;
    {
        const bool branch_taken_0x208408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208408u;
        // 0x20840c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208408) {
            ctx->pc = 0x208420u;
            goto label_208420;
        }
    }
    ctx->pc = 0x208410u;
    // 0x208410: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x208410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x208414: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x208414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208418: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x208418u;
    {
        const bool branch_taken_0x208418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208418u;
        // 0x20841c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208418) {
            ctx->pc = 0x2084B0u;
            goto label_2084b0;
        }
    }
    ctx->pc = 0x208420u;
label_208420:
    // 0x208420: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x208420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x208424: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x208424u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208428: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x208428u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20842c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x20842cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208430: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x208430u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x208434: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x208434u;
    {
        const bool branch_taken_0x208434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x208438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208434u;
        // 0x208438: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208434) {
            ctx->pc = 0x20844Cu;
            goto label_20844c;
        }
    }
    ctx->pc = 0x20843Cu;
    // 0x20843c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x208440: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x208440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x208444: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x208444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x208448: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x208448u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_20844c:
    // 0x20844c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x20844cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x208450: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x208450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x208454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208454u;
    {
        const bool branch_taken_0x208454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208454u;
        // 0x208458: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208454) {
            ctx->pc = 0x208464u;
            goto label_208464;
        }
    }
    ctx->pc = 0x20845Cu;
    // 0x20845c: 0x0  nop
    ctx->pc = 0x20845cu;
    // NOP
label_208460:
    // 0x208460: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x208460u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_208464:
    // 0x208464: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x208464u;
    {
        const bool branch_taken_0x208464 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x208464) {
            ctx->pc = 0x208468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208464u;
            // 0x208468: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x208478u;
            goto label_208478;
        }
    }
    ctx->pc = 0x20846Cu;
    // 0x20846c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x20846cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x208470: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x208470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x208474: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x208474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_208478:
    // 0x208478: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x208478u;
    {
        const bool branch_taken_0x208478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208478u;
        // 0x20847c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208478) {
            ctx->pc = 0x208460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208460;
        }
    }
    ctx->pc = 0x208480u;
    // 0x208480: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x208480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x208484: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x208484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x208488: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208488u;
    {
        const bool branch_taken_0x208488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208488) {
            ctx->pc = 0x20848Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208488u;
            // 0x20848c: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2084ACu;
            goto label_2084ac;
        }
    }
    ctx->pc = 0x208490u;
    // 0x208490: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x208490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x208494: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208494u;
    {
        const bool branch_taken_0x208494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208494u;
        // 0x208498: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208494) {
            ctx->pc = 0x2084A4u;
            goto label_2084a4;
        }
    }
    ctx->pc = 0x20849Cu;
    // 0x20849c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20849Cu;
    {
        const bool branch_taken_0x20849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20849Cu;
        // 0x2084a0: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20849c) {
            ctx->pc = 0x2084A8u;
            goto label_2084a8;
        }
    }
    ctx->pc = 0x2084A4u;
label_2084a4:
    // 0x2084a4: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x2084a4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_2084a8:
    // 0x2084a8: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x2084a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_2084ac:
    // 0x2084ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2084acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2084b0:
    // 0x2084b0: 0xc081efa  jal         func_207BE8
    ctx->pc = 0x2084B0u;
    SET_GPR_U32(ctx, 31, 0x2084B8u);
    ctx->pc = 0x207BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE8u, 0x2084B0u, 0x2084B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084B8u;
label_2084b8:
    // 0x2084b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2084b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2084bc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2084bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2084c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2084C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2084C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084C0u;
        // 0x2084c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2084C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2084C8u;
}
