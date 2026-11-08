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

// Function: FUN_001be4b0
// Address: 0x1be4b0 - 0x1be664
void FUN_001be4b0_0x1be4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001be4b0_0x1be4b0");
#endif

    switch (ctx->pc) {
        case 0x1be4f8u: goto label_1be4f8;
        case 0x1be50cu: goto label_1be50c;
        case 0x1be518u: goto label_1be518;
        case 0x1be520u: goto label_1be520;
        case 0x1be528u: goto label_1be528;
        case 0x1be548u: goto label_1be548;
        case 0x1be55cu: goto label_1be55c;
        case 0x1be568u: goto label_1be568;
        case 0x1be570u: goto label_1be570;
        case 0x1be578u: goto label_1be578;
        case 0x1be584u: goto label_1be584;
        case 0x1be5b0u: goto label_1be5b0;
        case 0x1be5c4u: goto label_1be5c4;
        case 0x1be5d0u: goto label_1be5d0;
        case 0x1be5d8u: goto label_1be5d8;
        case 0x1be5e0u: goto label_1be5e0;
        case 0x1be600u: goto label_1be600;
        case 0x1be614u: goto label_1be614;
        case 0x1be620u: goto label_1be620;
        case 0x1be628u: goto label_1be628;
        case 0x1be630u: goto label_1be630;
        case 0x1be63cu: goto label_1be63c;
        case 0x1be648u: goto label_1be648;
        default: break;
    }

    ctx->pc = 0x1be4b0u;

label_1be4b0:
    // 0x1be4b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1be4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1be4b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1be4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1be4b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1be4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1be4bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1be4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1be4c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be4c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be4c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4cc: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1be4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be4d0: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BE4D0u;
    {
        const bool branch_taken_0x1be4d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4D0u;
        // 0x1be4d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4d0) {
            ctx->pc = 0x1BE584u;
            goto label_1be584;
        }
    }
    ctx->pc = 0x1BE4D8u;
    // 0x1be4d8: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1be4d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1be4dc: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE4DCu;
    {
        const bool branch_taken_0x1be4dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be4dc) {
            ctx->pc = 0x1BE528u;
            goto label_1be528;
        }
    }
    ctx->pc = 0x1BE4E4u;
    // 0x1be4e4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be4e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE4E8u;
    {
        const bool branch_taken_0x1be4e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be4e8) {
            ctx->pc = 0x1BE4F8u;
            goto label_1be4f8;
        }
    }
    ctx->pc = 0x1BE4F0u;
    // 0x1be4f0: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE4F0u;
    SET_GPR_U32(ctx, 31, 0x1BE4F8u);
    ctx->pc = 0x1BE4B0u;
    goto label_1be4b0;
    ctx->pc = 0x1BE4F8u;
label_1be4f8:
    // 0x1be4f8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1be4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1be4fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE4FCu;
    {
        const bool branch_taken_0x1be4fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4FCu;
        // 0x1be500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4fc) {
            ctx->pc = 0x1BE510u;
            goto label_1be510;
        }
    }
    ctx->pc = 0x1BE504u;
    // 0x1be504: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE504u;
    SET_GPR_U32(ctx, 31, 0x1BE50Cu);
    ctx->pc = 0x1BE508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE504u;
    // 0x1be508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    goto label_1be4b0;
    ctx->pc = 0x1BE50Cu;
label_1be50c:
    // 0x1be50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be510:
    // 0x1be510: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE510u;
    SET_GPR_U32(ctx, 31, 0x1BE518u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE510u, 0x1BE518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE518u;
label_1be518:
    // 0x1be518: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE518u;
    SET_GPR_U32(ctx, 31, 0x1BE520u);
    ctx->pc = 0x1BE51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE518u;
    // 0x1be51c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE518u, 0x1BE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE520u;
label_1be520:
    // 0x1be520: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE520u;
    SET_GPR_U32(ctx, 31, 0x1BE528u);
    ctx->pc = 0x1BE524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE520u;
    // 0x1be524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE520u, 0x1BE528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE528u;
label_1be528:
    // 0x1be528: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1be528u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1be52c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BE52Cu;
    {
        const bool branch_taken_0x1be52c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE52Cu;
        // 0x1be530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be52c) {
            ctx->pc = 0x1BE57Cu;
            goto label_1be57c;
        }
    }
    ctx->pc = 0x1BE534u;
    // 0x1be534: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be538: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE538u;
    {
        const bool branch_taken_0x1be538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE538u;
        // 0x1be53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be538) {
            ctx->pc = 0x1BE548u;
            goto label_1be548;
        }
    }
    ctx->pc = 0x1BE540u;
    // 0x1be540: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE540u;
    SET_GPR_U32(ctx, 31, 0x1BE548u);
    ctx->pc = 0x1BE4B0u;
    goto label_1be4b0;
    ctx->pc = 0x1BE548u;
label_1be548:
    // 0x1be548: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1be548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1be54c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE54Cu;
    {
        const bool branch_taken_0x1be54c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE54Cu;
        // 0x1be550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be54c) {
            ctx->pc = 0x1BE560u;
            goto label_1be560;
        }
    }
    ctx->pc = 0x1BE554u;
    // 0x1be554: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE554u;
    SET_GPR_U32(ctx, 31, 0x1BE55Cu);
    ctx->pc = 0x1BE558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE554u;
    // 0x1be558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    goto label_1be4b0;
    ctx->pc = 0x1BE55Cu;
label_1be55c:
    // 0x1be55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be560:
    // 0x1be560: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE560u;
    SET_GPR_U32(ctx, 31, 0x1BE568u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE560u, 0x1BE568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE568u;
label_1be568:
    // 0x1be568: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE568u;
    SET_GPR_U32(ctx, 31, 0x1BE570u);
    ctx->pc = 0x1BE56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE568u;
    // 0x1be56c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE568u, 0x1BE570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE570u;
label_1be570:
    // 0x1be570: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE570u;
    SET_GPR_U32(ctx, 31, 0x1BE578u);
    ctx->pc = 0x1BE574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE570u;
    // 0x1be574: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE570u, 0x1BE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE578u;
label_1be578:
    // 0x1be578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be57c:
    // 0x1be57c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE57Cu;
    SET_GPR_U32(ctx, 31, 0x1BE584u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE57Cu, 0x1BE584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE584u;
label_1be584:
    // 0x1be584: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1be588: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BE588u;
    {
        const bool branch_taken_0x1be588 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE588u;
        // 0x1be58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be588) {
            ctx->pc = 0x1BE640u;
            goto label_1be640;
        }
    }
    ctx->pc = 0x1BE590u;
    // 0x1be590: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1be590u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1be594: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE594u;
    {
        const bool branch_taken_0x1be594 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be594) {
            ctx->pc = 0x1BE5E0u;
            goto label_1be5e0;
        }
    }
    ctx->pc = 0x1BE59Cu;
    // 0x1be59c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be5a0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE5A0u;
    {
        const bool branch_taken_0x1be5a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5A0u;
        // 0x1be5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5a0) {
            ctx->pc = 0x1BE5B0u;
            goto label_1be5b0;
        }
    }
    ctx->pc = 0x1BE5A8u;
    // 0x1be5a8: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE5A8u;
    SET_GPR_U32(ctx, 31, 0x1BE5B0u);
    ctx->pc = 0x1BE4B0u;
    goto label_1be4b0;
    ctx->pc = 0x1BE5B0u;
label_1be5b0:
    // 0x1be5b0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1be5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1be5b4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE5B4u;
    {
        const bool branch_taken_0x1be5b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5B4u;
        // 0x1be5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5b4) {
            ctx->pc = 0x1BE5C8u;
            goto label_1be5c8;
        }
    }
    ctx->pc = 0x1BE5BCu;
    // 0x1be5bc: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE5BCu;
    SET_GPR_U32(ctx, 31, 0x1BE5C4u);
    ctx->pc = 0x1BE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5BCu;
    // 0x1be5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    goto label_1be4b0;
    ctx->pc = 0x1BE5C4u;
label_1be5c4:
    // 0x1be5c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be5c8:
    // 0x1be5c8: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE5C8u;
    SET_GPR_U32(ctx, 31, 0x1BE5D0u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE5C8u, 0x1BE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5D0u;
label_1be5d0:
    // 0x1be5d0: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE5D0u;
    SET_GPR_U32(ctx, 31, 0x1BE5D8u);
    ctx->pc = 0x1BE5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5D0u;
    // 0x1be5d4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE5D0u, 0x1BE5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5D8u;
label_1be5d8:
    // 0x1be5d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE5D8u;
    SET_GPR_U32(ctx, 31, 0x1BE5E0u);
    ctx->pc = 0x1BE5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE5D8u;
    // 0x1be5dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE5D8u, 0x1BE5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5E0u;
label_1be5e0:
    // 0x1be5e0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1be5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1be5e4: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BE5E4u;
    {
        const bool branch_taken_0x1be5e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5E4u;
        // 0x1be5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5e4) {
            ctx->pc = 0x1BE634u;
            goto label_1be634;
        }
    }
    ctx->pc = 0x1BE5ECu;
    // 0x1be5ec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1be5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1be5f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE5F0u;
    {
        const bool branch_taken_0x1be5f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5F0u;
        // 0x1be5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5f0) {
            ctx->pc = 0x1BE600u;
            goto label_1be600;
        }
    }
    ctx->pc = 0x1BE5F8u;
    // 0x1be5f8: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE5F8u;
    SET_GPR_U32(ctx, 31, 0x1BE600u);
    ctx->pc = 0x1BE4B0u;
    goto label_1be4b0;
    ctx->pc = 0x1BE600u;
label_1be600:
    // 0x1be600: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1be600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1be604: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE604u;
    {
        const bool branch_taken_0x1be604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE604u;
        // 0x1be608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be604) {
            ctx->pc = 0x1BE618u;
            goto label_1be618;
        }
    }
    ctx->pc = 0x1BE60Cu;
    // 0x1be60c: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE60Cu;
    SET_GPR_U32(ctx, 31, 0x1BE614u);
    ctx->pc = 0x1BE610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE60Cu;
    // 0x1be610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    goto label_1be4b0;
    ctx->pc = 0x1BE614u;
label_1be614:
    // 0x1be614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be618:
    // 0x1be618: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE618u;
    SET_GPR_U32(ctx, 31, 0x1BE620u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE618u, 0x1BE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE620u;
label_1be620:
    // 0x1be620: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE620u;
    SET_GPR_U32(ctx, 31, 0x1BE628u);
    ctx->pc = 0x1BE624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE620u;
    // 0x1be624: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE620u, 0x1BE628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE628u;
label_1be628:
    // 0x1be628: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE628u;
    SET_GPR_U32(ctx, 31, 0x1BE630u);
    ctx->pc = 0x1BE62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE628u;
    // 0x1be62c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE628u, 0x1BE630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE630u;
label_1be630:
    // 0x1be630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be634:
    // 0x1be634: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE634u;
    SET_GPR_U32(ctx, 31, 0x1BE63Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE634u, 0x1BE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE63Cu;
label_1be63c:
    // 0x1be63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be640:
    // 0x1be640: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE640u;
    SET_GPR_U32(ctx, 31, 0x1BE648u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE640u, 0x1BE648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE648u;
label_1be648:
    // 0x1be648: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1be648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be64c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1be64cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1be650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be65c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE65Cu;
        // 0x1be660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE664u;
}
