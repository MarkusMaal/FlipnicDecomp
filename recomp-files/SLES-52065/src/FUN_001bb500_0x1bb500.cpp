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

// Function: FUN_001bb500
// Address: 0x1bb500 - 0x1bb714
void FUN_001bb500_0x1bb500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bb500_0x1bb500");
#endif

    switch (ctx->pc) {
        case 0x1bb548u: goto label_1bb548;
        case 0x1bb55cu: goto label_1bb55c;
        case 0x1bb568u: goto label_1bb568;
        case 0x1bb574u: goto label_1bb574;
        case 0x1bb57cu: goto label_1bb57c;
        case 0x1bb584u: goto label_1bb584;
        case 0x1bb5a4u: goto label_1bb5a4;
        case 0x1bb5b8u: goto label_1bb5b8;
        case 0x1bb5c4u: goto label_1bb5c4;
        case 0x1bb5d0u: goto label_1bb5d0;
        case 0x1bb5d8u: goto label_1bb5d8;
        case 0x1bb5e0u: goto label_1bb5e0;
        case 0x1bb5f4u: goto label_1bb5f4;
        case 0x1bb5fcu: goto label_1bb5fc;
        case 0x1bb628u: goto label_1bb628;
        case 0x1bb63cu: goto label_1bb63c;
        case 0x1bb648u: goto label_1bb648;
        case 0x1bb654u: goto label_1bb654;
        case 0x1bb65cu: goto label_1bb65c;
        case 0x1bb664u: goto label_1bb664;
        case 0x1bb684u: goto label_1bb684;
        case 0x1bb698u: goto label_1bb698;
        case 0x1bb6a4u: goto label_1bb6a4;
        case 0x1bb6b0u: goto label_1bb6b0;
        case 0x1bb6b8u: goto label_1bb6b8;
        case 0x1bb6c0u: goto label_1bb6c0;
        case 0x1bb6d4u: goto label_1bb6d4;
        case 0x1bb6dcu: goto label_1bb6dc;
        case 0x1bb6f0u: goto label_1bb6f0;
        case 0x1bb6f8u: goto label_1bb6f8;
        default: break;
    }

    ctx->pc = 0x1bb500u;

label_1bb500:
    // 0x1bb500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bb500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bb504: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bb504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bb508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bb50c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bb510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb514: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bb518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb51c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1bb51cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bb520: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x1BB520u;
    {
        const bool branch_taken_0x1bb520 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB520u;
        // 0x1bb524: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb520) {
            ctx->pc = 0x1BB5FCu;
            goto label_1bb5fc;
        }
    }
    ctx->pc = 0x1BB528u;
    // 0x1bb528: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1bb528u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb52c: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BB52Cu;
    {
        const bool branch_taken_0x1bb52c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb52c) {
            ctx->pc = 0x1BB584u;
            goto label_1bb584;
        }
    }
    ctx->pc = 0x1BB534u;
    // 0x1bb534: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb538: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB538u;
    {
        const bool branch_taken_0x1bb538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb538) {
            ctx->pc = 0x1BB548u;
            goto label_1bb548;
        }
    }
    ctx->pc = 0x1BB540u;
    // 0x1bb540: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB540u;
    SET_GPR_U32(ctx, 31, 0x1BB548u);
    ctx->pc = 0x1BB500u;
    goto label_1bb500;
    ctx->pc = 0x1BB548u;
label_1bb548:
    // 0x1bb548: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb54c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB54Cu;
    {
        const bool branch_taken_0x1bb54c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB54Cu;
        // 0x1bb550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb54c) {
            ctx->pc = 0x1BB560u;
            goto label_1bb560;
        }
    }
    ctx->pc = 0x1BB554u;
    // 0x1bb554: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB554u;
    SET_GPR_U32(ctx, 31, 0x1BB55Cu);
    ctx->pc = 0x1BB558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB554u;
    // 0x1bb558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB500u;
    goto label_1bb500;
    ctx->pc = 0x1BB55Cu;
label_1bb55c:
    // 0x1bb55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb560:
    // 0x1bb560: 0xc06edcc  jal         func_1BB730
    ctx->pc = 0x1BB560u;
    SET_GPR_U32(ctx, 31, 0x1BB568u);
    ctx->pc = 0x1BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB730u, 0x1BB560u, 0x1BB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB568u;
label_1bb568:
    // 0x1bb568: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1bb568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1bb56c: 0xc06e1bc  jal         func_1B86F0
    ctx->pc = 0x1BB56Cu;
    SET_GPR_U32(ctx, 31, 0x1BB574u);
    ctx->pc = 0x1BB570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB56Cu;
    // 0x1bb570: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B86F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B86F0u, 0x1BB56Cu, 0x1BB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB574u;
label_1bb574:
    // 0x1bb574: 0xc06edc8  jal         func_1BB720
    ctx->pc = 0x1BB574u;
    SET_GPR_U32(ctx, 31, 0x1BB57Cu);
    ctx->pc = 0x1BB578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB574u;
    // 0x1bb578: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB720u, 0x1BB574u, 0x1BB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB57Cu;
label_1bb57c:
    // 0x1bb57c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB57Cu;
    SET_GPR_U32(ctx, 31, 0x1BB584u);
    ctx->pc = 0x1BB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB57Cu;
    // 0x1bb580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB57Cu, 0x1BB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB584u;
label_1bb584:
    // 0x1bb584: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1bb584u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bb588: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BB588u;
    {
        const bool branch_taken_0x1bb588 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB588u;
        // 0x1bb58c: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb588) {
            ctx->pc = 0x1BB5E4u;
            goto label_1bb5e4;
        }
    }
    ctx->pc = 0x1BB590u;
    // 0x1bb590: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb594: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB594u;
    {
        const bool branch_taken_0x1bb594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB594u;
        // 0x1bb598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb594) {
            ctx->pc = 0x1BB5A4u;
            goto label_1bb5a4;
        }
    }
    ctx->pc = 0x1BB59Cu;
    // 0x1bb59c: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB59Cu;
    SET_GPR_U32(ctx, 31, 0x1BB5A4u);
    ctx->pc = 0x1BB500u;
    goto label_1bb500;
    ctx->pc = 0x1BB5A4u;
label_1bb5a4:
    // 0x1bb5a4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb5a8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB5A8u;
    {
        const bool branch_taken_0x1bb5a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5A8u;
        // 0x1bb5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5a8) {
            ctx->pc = 0x1BB5BCu;
            goto label_1bb5bc;
        }
    }
    ctx->pc = 0x1BB5B0u;
    // 0x1bb5b0: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB5B0u;
    SET_GPR_U32(ctx, 31, 0x1BB5B8u);
    ctx->pc = 0x1BB5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5B0u;
    // 0x1bb5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB500u;
    goto label_1bb500;
    ctx->pc = 0x1BB5B8u;
label_1bb5b8:
    // 0x1bb5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb5bc:
    // 0x1bb5bc: 0xc06edcc  jal         func_1BB730
    ctx->pc = 0x1BB5BCu;
    SET_GPR_U32(ctx, 31, 0x1BB5C4u);
    ctx->pc = 0x1BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB730u, 0x1BB5BCu, 0x1BB5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5C4u;
label_1bb5c4:
    // 0x1bb5c4: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1bb5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1bb5c8: 0xc06e1bc  jal         func_1B86F0
    ctx->pc = 0x1BB5C8u;
    SET_GPR_U32(ctx, 31, 0x1BB5D0u);
    ctx->pc = 0x1BB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5C8u;
    // 0x1bb5cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B86F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B86F0u, 0x1BB5C8u, 0x1BB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5D0u;
label_1bb5d0:
    // 0x1bb5d0: 0xc06edc8  jal         func_1BB720
    ctx->pc = 0x1BB5D0u;
    SET_GPR_U32(ctx, 31, 0x1BB5D8u);
    ctx->pc = 0x1BB5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5D0u;
    // 0x1bb5d4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB720u, 0x1BB5D0u, 0x1BB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5D8u;
label_1bb5d8:
    // 0x1bb5d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB5D8u;
    SET_GPR_U32(ctx, 31, 0x1BB5E0u);
    ctx->pc = 0x1BB5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5D8u;
    // 0x1bb5dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB5D8u, 0x1BB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5E0u;
label_1bb5e0:
    // 0x1bb5e0: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x1bb5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1bb5e4:
    // 0x1bb5e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB5E4u;
    {
        const bool branch_taken_0x1bb5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5E4u;
        // 0x1bb5e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5e4) {
            ctx->pc = 0x1BB5F4u;
            goto label_1bb5f4;
        }
    }
    ctx->pc = 0x1BB5ECu;
    // 0x1bb5ec: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BB5ECu;
    SET_GPR_U32(ctx, 31, 0x1BB5F4u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BB5ECu, 0x1BB5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5F4u;
label_1bb5f4:
    // 0x1bb5f4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB5F4u;
    SET_GPR_U32(ctx, 31, 0x1BB5FCu);
    ctx->pc = 0x1BB5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB5F4u;
    // 0x1bb5f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB5F4u, 0x1BB5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5FCu;
label_1bb5fc:
    // 0x1bb5fc: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1bb5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bb600: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BB600u;
    {
        const bool branch_taken_0x1bb600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB600u;
        // 0x1bb604: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb600) {
            ctx->pc = 0x1BB6E0u;
            goto label_1bb6e0;
        }
    }
    ctx->pc = 0x1BB608u;
    // 0x1bb608: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1bb608u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb60c: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BB60Cu;
    {
        const bool branch_taken_0x1bb60c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb60c) {
            ctx->pc = 0x1BB664u;
            goto label_1bb664;
        }
    }
    ctx->pc = 0x1BB614u;
    // 0x1bb614: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb618: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB618u;
    {
        const bool branch_taken_0x1bb618 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB618u;
        // 0x1bb61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb618) {
            ctx->pc = 0x1BB628u;
            goto label_1bb628;
        }
    }
    ctx->pc = 0x1BB620u;
    // 0x1bb620: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB620u;
    SET_GPR_U32(ctx, 31, 0x1BB628u);
    ctx->pc = 0x1BB500u;
    goto label_1bb500;
    ctx->pc = 0x1BB628u;
label_1bb628:
    // 0x1bb628: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb62c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB62Cu;
    {
        const bool branch_taken_0x1bb62c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB62Cu;
        // 0x1bb630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb62c) {
            ctx->pc = 0x1BB640u;
            goto label_1bb640;
        }
    }
    ctx->pc = 0x1BB634u;
    // 0x1bb634: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB634u;
    SET_GPR_U32(ctx, 31, 0x1BB63Cu);
    ctx->pc = 0x1BB638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB634u;
    // 0x1bb638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB500u;
    goto label_1bb500;
    ctx->pc = 0x1BB63Cu;
label_1bb63c:
    // 0x1bb63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb640:
    // 0x1bb640: 0xc06edcc  jal         func_1BB730
    ctx->pc = 0x1BB640u;
    SET_GPR_U32(ctx, 31, 0x1BB648u);
    ctx->pc = 0x1BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB730u, 0x1BB640u, 0x1BB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB648u;
label_1bb648:
    // 0x1bb648: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1bb648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1bb64c: 0xc06e1bc  jal         func_1B86F0
    ctx->pc = 0x1BB64Cu;
    SET_GPR_U32(ctx, 31, 0x1BB654u);
    ctx->pc = 0x1BB650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB64Cu;
    // 0x1bb650: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B86F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B86F0u, 0x1BB64Cu, 0x1BB654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB654u;
label_1bb654:
    // 0x1bb654: 0xc06edc8  jal         func_1BB720
    ctx->pc = 0x1BB654u;
    SET_GPR_U32(ctx, 31, 0x1BB65Cu);
    ctx->pc = 0x1BB658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB654u;
    // 0x1bb658: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB720u, 0x1BB654u, 0x1BB65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB65Cu;
label_1bb65c:
    // 0x1bb65c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB65Cu;
    SET_GPR_U32(ctx, 31, 0x1BB664u);
    ctx->pc = 0x1BB660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB65Cu;
    // 0x1bb660: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB65Cu, 0x1BB664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB664u;
label_1bb664:
    // 0x1bb664: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1bb664u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bb668: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BB668u;
    {
        const bool branch_taken_0x1bb668 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB668u;
        // 0x1bb66c: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb668) {
            ctx->pc = 0x1BB6C4u;
            goto label_1bb6c4;
        }
    }
    ctx->pc = 0x1BB670u;
    // 0x1bb670: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb674: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB674u;
    {
        const bool branch_taken_0x1bb674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB674u;
        // 0x1bb678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb674) {
            ctx->pc = 0x1BB684u;
            goto label_1bb684;
        }
    }
    ctx->pc = 0x1BB67Cu;
    // 0x1bb67c: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB67Cu;
    SET_GPR_U32(ctx, 31, 0x1BB684u);
    ctx->pc = 0x1BB500u;
    goto label_1bb500;
    ctx->pc = 0x1BB684u;
label_1bb684:
    // 0x1bb684: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bb684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb688: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB688u;
    {
        const bool branch_taken_0x1bb688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB688u;
        // 0x1bb68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb688) {
            ctx->pc = 0x1BB69Cu;
            goto label_1bb69c;
        }
    }
    ctx->pc = 0x1BB690u;
    // 0x1bb690: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1BB690u;
    SET_GPR_U32(ctx, 31, 0x1BB698u);
    ctx->pc = 0x1BB694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB690u;
    // 0x1bb694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB500u;
    goto label_1bb500;
    ctx->pc = 0x1BB698u;
label_1bb698:
    // 0x1bb698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb69c:
    // 0x1bb69c: 0xc06edcc  jal         func_1BB730
    ctx->pc = 0x1BB69Cu;
    SET_GPR_U32(ctx, 31, 0x1BB6A4u);
    ctx->pc = 0x1BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB730u, 0x1BB69Cu, 0x1BB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6A4u;
label_1bb6a4:
    // 0x1bb6a4: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1bb6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1bb6a8: 0xc06e1bc  jal         func_1B86F0
    ctx->pc = 0x1BB6A8u;
    SET_GPR_U32(ctx, 31, 0x1BB6B0u);
    ctx->pc = 0x1BB6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6A8u;
    // 0x1bb6ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B86F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B86F0u, 0x1BB6A8u, 0x1BB6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6B0u;
label_1bb6b0:
    // 0x1bb6b0: 0xc06edc8  jal         func_1BB720
    ctx->pc = 0x1BB6B0u;
    SET_GPR_U32(ctx, 31, 0x1BB6B8u);
    ctx->pc = 0x1BB6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6B0u;
    // 0x1bb6b4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB720u, 0x1BB6B0u, 0x1BB6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6B8u;
label_1bb6b8:
    // 0x1bb6b8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB6B8u;
    SET_GPR_U32(ctx, 31, 0x1BB6C0u);
    ctx->pc = 0x1BB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6B8u;
    // 0x1bb6bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB6B8u, 0x1BB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6C0u;
label_1bb6c0:
    // 0x1bb6c0: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x1bb6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1bb6c4:
    // 0x1bb6c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB6C4u;
    {
        const bool branch_taken_0x1bb6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6C4u;
        // 0x1bb6c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6c4) {
            ctx->pc = 0x1BB6D4u;
            goto label_1bb6d4;
        }
    }
    ctx->pc = 0x1BB6CCu;
    // 0x1bb6cc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BB6CCu;
    SET_GPR_U32(ctx, 31, 0x1BB6D4u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BB6CCu, 0x1BB6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6D4u;
label_1bb6d4:
    // 0x1bb6d4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB6D4u;
    SET_GPR_U32(ctx, 31, 0x1BB6DCu);
    ctx->pc = 0x1BB6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6D4u;
    // 0x1bb6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB6D4u, 0x1BB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6DCu;
label_1bb6dc:
    // 0x1bb6dc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1bb6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1bb6e0:
    // 0x1bb6e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB6E0u;
    {
        const bool branch_taken_0x1bb6e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6E0u;
        // 0x1bb6e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6e0) {
            ctx->pc = 0x1BB6F0u;
            goto label_1bb6f0;
        }
    }
    ctx->pc = 0x1BB6E8u;
    // 0x1bb6e8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BB6E8u;
    SET_GPR_U32(ctx, 31, 0x1BB6F0u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BB6E8u, 0x1BB6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6F0u;
label_1bb6f0:
    // 0x1bb6f0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB6F0u;
    SET_GPR_U32(ctx, 31, 0x1BB6F8u);
    ctx->pc = 0x1BB6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6F0u;
    // 0x1bb6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB6F0u, 0x1BB6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6F8u;
label_1bb6f8:
    // 0x1bb6f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bb6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb6fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb70c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB70Cu;
        // 0x1bb710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB714u;
}
