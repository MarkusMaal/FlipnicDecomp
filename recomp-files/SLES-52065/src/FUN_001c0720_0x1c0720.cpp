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

// Function: FUN_001c0720
// Address: 0x1c0720 - 0x1c0b84
void FUN_001c0720_0x1c0720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c0720_0x1c0720");
#endif

    switch (ctx->pc) {
        case 0x1c0770u: goto label_1c0770;
        case 0x1c0798u: goto label_1c0798;
        case 0x1c07b0u: goto label_1c07b0;
        case 0x1c07bcu: goto label_1c07bc;
        case 0x1c07d4u: goto label_1c07d4;
        case 0x1c07e4u: goto label_1c07e4;
        case 0x1c07f0u: goto label_1c07f0;
        case 0x1c0804u: goto label_1c0804;
        case 0x1c081cu: goto label_1c081c;
        case 0x1c0824u: goto label_1c0824;
        case 0x1c0830u: goto label_1c0830;
        case 0x1c0844u: goto label_1c0844;
        case 0x1c084cu: goto label_1c084c;
        case 0x1c0858u: goto label_1c0858;
        case 0x1c086cu: goto label_1c086c;
        case 0x1c0878u: goto label_1c0878;
        case 0x1c088cu: goto label_1c088c;
        case 0x1c08f0u: goto label_1c08f0;
        case 0x1c0908u: goto label_1c0908;
        case 0x1c0910u: goto label_1c0910;
        case 0x1c0920u: goto label_1c0920;
        case 0x1c0934u: goto label_1c0934;
        case 0x1c09c8u: goto label_1c09c8;
        case 0x1c09e8u: goto label_1c09e8;
        case 0x1c09fcu: goto label_1c09fc;
        case 0x1c0a1cu: goto label_1c0a1c;
        case 0x1c0b08u: goto label_1c0b08;
        case 0x1c0b28u: goto label_1c0b28;
        case 0x1c0b40u: goto label_1c0b40;
        case 0x1c0b5cu: goto label_1c0b5c;
        case 0x1c0b64u: goto label_1c0b64;
        default: break;
    }

    ctx->pc = 0x1c0720u;

    // 0x1c0720: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c0720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c0724: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c0724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c0728: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c0728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c072c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1c072cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c0730: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c0730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c0734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0738: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c0738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c073c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c073cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0740: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c0744: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c0744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c074c: 0x266a0060  addiu       $t2, $s3, 0x60
    ctx->pc = 0x1c074cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1c0750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0754: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x1c0754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1c0758: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x1c0758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x1c075c: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1c075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1c0760: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x1c0760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x1c0764: 0x8c880074  lw          $t0, 0x74($a0)
    ctx->pc = 0x1c0764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1c0768: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C0768u;
    SET_GPR_U32(ctx, 31, 0x1C0770u);
    ctx->pc = 0x1C076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0768u;
    // 0x1c076c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C0768u, 0x1C0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0770u;
label_1c0770:
    // 0x1c0770: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1c0770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1c0774: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0778: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c0778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c077c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c077cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c0780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0784: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c0784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0788: 0x266a0068  addiu       $t2, $s3, 0x68
    ctx->pc = 0x1c0788u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    // 0x1c078c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c078cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0790: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C0790u;
    SET_GPR_U32(ctx, 31, 0x1C0798u);
    ctx->pc = 0x1C0794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0790u;
    // 0x1c0794: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C0790u, 0x1C0798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0798u;
label_1c0798:
    // 0x1c0798: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1c0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c079c: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x1c079cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1c07a0: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C07A0u;
    {
        const bool branch_taken_0x1c07a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07A0u;
        // 0x1c07a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c07a0) {
            ctx->pc = 0x1C07BCu;
            goto label_1c07bc;
        }
    }
    ctx->pc = 0x1C07A8u;
    // 0x1c07a8: 0xc07047c  jal         func_1C11F0
    ctx->pc = 0x1C07A8u;
    SET_GPR_U32(ctx, 31, 0x1C07B0u);
    ctx->pc = 0x1C11F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11F0u, 0x1C07A8u, 0x1C07B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07B0u;
label_1c07b0:
    // 0x1c07b0: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1c07b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c07b4: 0xc07045c  jal         func_1C1170
    ctx->pc = 0x1C07B4u;
    SET_GPR_U32(ctx, 31, 0x1C07BCu);
    ctx->pc = 0x1C07B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07B4u;
    // 0x1c07b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1170u, 0x1C07B4u, 0x1C07BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07BCu;
label_1c07bc:
    // 0x1c07bc: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x1c07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c07c0: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x1c07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x1c07c4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C07C4u;
    {
        const bool branch_taken_0x1c07c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07C4u;
        // 0x1c07c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c07c4) {
            ctx->pc = 0x1C0850u;
            goto label_1c0850;
        }
    }
    ctx->pc = 0x1C07CCu;
    // 0x1c07cc: 0xc07037c  jal         func_1C0DF0
    ctx->pc = 0x1C07CCu;
    SET_GPR_U32(ctx, 31, 0x1C07D4u);
    ctx->pc = 0x1C07D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07CCu;
    // 0x1c07d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0DF0u, 0x1C07CCu, 0x1C07D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07D4u;
label_1c07d4:
    // 0x1c07d4: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x1c07d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x1c07d8: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x1c07d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1c07dc: 0xc07047c  jal         func_1C11F0
    ctx->pc = 0x1C07DCu;
    SET_GPR_U32(ctx, 31, 0x1C07E4u);
    ctx->pc = 0x1C07E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07DCu;
    // 0x1c07e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11F0u, 0x1C07DCu, 0x1C07E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07E4u;
label_1c07e4:
    // 0x1c07e4: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1c07e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c07e8: 0xc07045c  jal         func_1C1170
    ctx->pc = 0x1C07E8u;
    SET_GPR_U32(ctx, 31, 0x1C07F0u);
    ctx->pc = 0x1C07ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07E8u;
    // 0x1c07ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1170u, 0x1C07E8u, 0x1C07F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07F0u;
label_1c07f0:
    // 0x1c07f0: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1c07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c07f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c07f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c07fc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C07FCu;
    SET_GPR_U32(ctx, 31, 0x1C0804u);
    ctx->pc = 0x1C0800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07FCu;
    // 0x1c0800: 0xae620064  sw          $v0, 0x64($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C07FCu, 0x1C0804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0804u;
label_1c0804:
    // 0x1c0804: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0804u;
    {
        const bool branch_taken_0x1c0804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0804u;
        // 0x1c0808: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0804) {
            ctx->pc = 0x1C0828u;
            goto label_1c0828;
        }
    }
    ctx->pc = 0x1C080Cu;
    // 0x1c080c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0810: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c0814: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0814u;
    SET_GPR_U32(ctx, 31, 0x1C081Cu);
    ctx->pc = 0x1C0818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0814u;
    // 0x1c0818: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0814u, 0x1C081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C081Cu;
label_1c081c:
    // 0x1c081c: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C081Cu;
    SET_GPR_U32(ctx, 31, 0x1C0824u);
    ctx->pc = 0x1C0820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C081Cu;
    // 0x1c0820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C081Cu, 0x1C0824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0824u;
label_1c0824:
    // 0x1c0824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c0828:
    // 0x1c0828: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C0828u;
    SET_GPR_U32(ctx, 31, 0x1C0830u);
    ctx->pc = 0x1C082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0828u;
    // 0x1c082c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C0828u, 0x1C0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0830u;
label_1c0830:
    // 0x1c0830: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0830u;
    {
        const bool branch_taken_0x1c0830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0830u;
        // 0x1c0834: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0830) {
            ctx->pc = 0x1C084Cu;
            goto label_1c084c;
        }
    }
    ctx->pc = 0x1C0838u;
    // 0x1c0838: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c083c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C083Cu;
    SET_GPR_U32(ctx, 31, 0x1C0844u);
    ctx->pc = 0x1C0840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C083Cu;
    // 0x1c0840: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C083Cu, 0x1C0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0844u;
label_1c0844:
    // 0x1c0844: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C0844u;
    SET_GPR_U32(ctx, 31, 0x1C084Cu);
    ctx->pc = 0x1C0848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0844u;
    // 0x1c0848: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C0844u, 0x1C084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C084Cu;
label_1c084c:
    // 0x1c084c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c084cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c0850:
    // 0x1c0850: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C0850u;
    SET_GPR_U32(ctx, 31, 0x1C0858u);
    ctx->pc = 0x1C0854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0850u;
    // 0x1c0854: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C0850u, 0x1C0858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0858u;
label_1c0858:
    // 0x1c0858: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0858u;
    {
        const bool branch_taken_0x1c0858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0858u;
        // 0x1c085c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0858) {
            ctx->pc = 0x1C0870u;
            goto label_1c0870;
        }
    }
    ctx->pc = 0x1C0860u;
    // 0x1c0860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0864: 0xc07049c  jal         func_1C1270
    ctx->pc = 0x1C0864u;
    SET_GPR_U32(ctx, 31, 0x1C086Cu);
    ctx->pc = 0x1C0868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0864u;
    // 0x1c0868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1270u, 0x1C0864u, 0x1C086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C086Cu;
label_1c086c:
    // 0x1c086c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c086cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c0870:
    // 0x1c0870: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C0870u;
    SET_GPR_U32(ctx, 31, 0x1C0878u);
    ctx->pc = 0x1C0874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0870u;
    // 0x1c0874: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C0870u, 0x1C0878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0878u;
label_1c0878:
    // 0x1c0878: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0878u;
    {
        const bool branch_taken_0x1c0878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0878) {
            ctx->pc = 0x1C088Cu;
            goto label_1c088c;
        }
    }
    ctx->pc = 0x1C0880u;
    // 0x1c0880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0884: 0xc07049c  jal         func_1C1270
    ctx->pc = 0x1C0884u;
    SET_GPR_U32(ctx, 31, 0x1C088Cu);
    ctx->pc = 0x1C0888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0884u;
    // 0x1c0888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1270u, 0x1C0884u, 0x1C088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C088Cu;
label_1c088c:
    // 0x1c088c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c088cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0890: 0x8022f548  lb          $v0, -0xAB8($at)
    ctx->pc = 0x1c0890u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F548u));
    // 0x1c0894: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0894u;
    {
        const bool branch_taken_0x1c0894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0894) {
            ctx->pc = 0x1C08B4u;
            goto label_1c08b4;
        }
    }
    ctx->pc = 0x1C089Cu;
    // 0x1c089c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c089cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c08a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08a4: 0xac23f540  sw          $v1, -0xAC0($at)
    ctx->pc = 0x1c08a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F540u, _value); } while (0);
    // 0x1c08a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c08ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08b0: 0xa022f548  sb          $v0, -0xAB8($at)
    ctx->pc = 0x1c08b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F548u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F548u, _value); } while (0);
label_1c08b4:
    // 0x1c08b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08b8: 0x8022f558  lb          $v0, -0xAA8($at)
    ctx->pc = 0x1c08b8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F558u));
    // 0x1c08bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C08BCu;
    {
        const bool branch_taken_0x1c08bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08BCu;
        // 0x1c08c0: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08bc) {
            ctx->pc = 0x1C08D8u;
            goto label_1c08d8;
        }
    }
    ctx->pc = 0x1C08C4u;
    // 0x1c08c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08c8: 0xac23f550  sw          $v1, -0xAB0($at)
    ctx->pc = 0x1c08c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F550u, _value); } while (0);
    // 0x1c08cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c08d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08d4: 0xa022f558  sb          $v0, -0xAA8($at)
    ctx->pc = 0x1c08d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F558u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F558u, _value); } while (0);
label_1c08d8:
    // 0x1c08d8: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c08d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c08dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c08e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c08e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c08e4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c08e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c08e8: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C08E8u;
    SET_GPR_U32(ctx, 31, 0x1C08F0u);
    ctx->pc = 0x1C08ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C08E8u;
    // 0x1c08ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C08E8u, 0x1C08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C08F0u;
label_1c08f0:
    // 0x1c08f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08f4: 0xc42cf540  lwc1        $f12, -0xAC0($at)
    ctx->pc = 0x1c08f4u;
    { uint32_t bits = FAST_READ32(0x36F540u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c08f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c08f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c08fc: 0xc42df550  lwc1        $f13, -0xAB0($at)
    ctx->pc = 0x1c08fcu;
    { uint32_t bits = FAST_READ32(0x36F550u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0900: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C0900u;
    SET_GPR_U32(ctx, 31, 0x1C0908u);
    ctx->pc = 0x1C0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0900u;
    // 0x1c0904: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C0900u, 0x1C0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0908u;
label_1c0908:
    // 0x1c0908: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1C0908u;
    {
        const bool branch_taken_0x1c0908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0908u;
        // 0x1c090c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0908) {
            ctx->pc = 0x1C0A00u;
            goto label_1c0a00;
        }
    }
    ctx->pc = 0x1C0910u;
label_1c0910:
    // 0x1c0910: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x1c0910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c0914: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c0914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c0918: 0xc073134  jal         func_1CC4D0
    ctx->pc = 0x1C0918u;
    SET_GPR_U32(ctx, 31, 0x1C0920u);
    ctx->pc = 0x1C091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0918u;
    // 0x1c091c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC4D0u, 0x1C0918u, 0x1C0920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0920u;
label_1c0920:
    // 0x1c0920: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c0920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0924: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0928: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c092c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C092Cu;
    SET_GPR_U32(ctx, 31, 0x1C0934u);
    ctx->pc = 0x1C0930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C092Cu;
    // 0x1c0930: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C092Cu, 0x1C0934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0934u;
label_1c0934:
    // 0x1c0934: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0938: 0x8023f568  lb          $v1, -0xA98($at)
    ctx->pc = 0x1c0938u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F568u));
    // 0x1c093c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C093Cu;
    {
        const bool branch_taken_0x1c093c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C093Cu;
        // 0x1c0940: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c093c) {
            ctx->pc = 0x1C0958u;
            goto label_1c0958;
        }
    }
    ctx->pc = 0x1C0944u;
    // 0x1c0944: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0948: 0xac24f560  sw          $a0, -0xAA0($at)
    ctx->pc = 0x1c0948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F560u, _value); } while (0);
    // 0x1c094c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0950: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0954: 0xa023f568  sb          $v1, -0xA98($at)
    ctx->pc = 0x1c0954u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F568u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F568u, _value); } while (0);
label_1c0958:
    // 0x1c0958: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c095c: 0x8023f578  lb          $v1, -0xA88($at)
    ctx->pc = 0x1c095cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F578u));
    // 0x1c0960: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0960u;
    {
        const bool branch_taken_0x1c0960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0960u;
        // 0x1c0964: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0960) {
            ctx->pc = 0x1C097Cu;
            goto label_1c097c;
        }
    }
    ctx->pc = 0x1C0968u;
    // 0x1c0968: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c096c: 0xac24f570  sw          $a0, -0xA90($at)
    ctx->pc = 0x1c096cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F570u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F570u, _value); } while (0);
    // 0x1c0970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0974: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0978: 0xa023f578  sb          $v1, -0xA88($at)
    ctx->pc = 0x1c0978u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F578u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F578u, _value); } while (0);
label_1c097c:
    // 0x1c097c: 0x0  nop
    ctx->pc = 0x1c097cu;
    // NOP
    // 0x1c0980: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0984: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1c0984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0988: 0x8c25f560  lw          $a1, -0xAA0($at)
    ctx->pc = 0x1c0988u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F560u));
    // 0x1c098c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1c098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0990: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c0990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c0994: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x1c0994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0998: 0xc44d0044  lwc1        $f13, 0x44($v0)
    ctx->pc = 0x1c0998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c099c: 0xc44e0048  lwc1        $f14, 0x48($v0)
    ctx->pc = 0x1c099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c09a0: 0xc44f004c  lwc1        $f15, 0x4C($v0)
    ctx->pc = 0x1c09a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c09a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c09a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c09a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c09a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c09ac: 0x8c23f570  lw          $v1, -0xA90($at)
    ctx->pc = 0x1c09acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F570u));
    // 0x1c09b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c09b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c09b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c09b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c09b8: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1c09b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c09bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c09bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c09c0: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C09C0u;
    SET_GPR_U32(ctx, 31, 0x1C09C8u);
    ctx->pc = 0x1C09C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09C0u;
    // 0x1c09c4: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C09C0u, 0x1C09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09C8u;
label_1c09c8:
    // 0x1c09c8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c09c8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c09cc: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c09ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c09d0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1c09d0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c09d4: 0x0  nop
    ctx->pc = 0x1c09d4u;
    // NOP
    // 0x1c09d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c09d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c09dc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c09dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c09e0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C09E0u;
    SET_GPR_U32(ctx, 31, 0x1C09E8u);
    ctx->pc = 0x1C09E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09E0u;
    // 0x1c09e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C09E0u, 0x1C09E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09E8u;
label_1c09e8:
    // 0x1c09e8: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c09e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c09ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c09ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c09f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c09f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09f4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C09F4u;
    SET_GPR_U32(ctx, 31, 0x1C09FCu);
    ctx->pc = 0x1C09F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09F4u;
    // 0x1c09f8: 0x24a517c8  addiu       $a1, $a1, 0x17C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C09F4u, 0x1C09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09FCu;
label_1c09fc:
    // 0x1c09fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c09fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c0a00:
    // 0x1c0a00: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x1c0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1c0a04: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c0a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c0a08: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1C0A08u;
    {
        const bool branch_taken_0x1c0a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A08u;
        // 0x1c0a0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a08) {
            ctx->pc = 0x1C0910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0910;
        }
    }
    ctx->pc = 0x1C0A10u;
    // 0x1c0a10: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c0a14: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0A14u;
    SET_GPR_U32(ctx, 31, 0x1C0A1Cu);
    ctx->pc = 0x1C0A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A14u;
    // 0x1c0a18: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0A14u, 0x1C0A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A1Cu;
label_1c0a1c:
    // 0x1c0a1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a24: 0x8022f588  lb          $v0, -0xA78($at)
    ctx->pc = 0x1c0a24u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F588u));
    // 0x1c0a28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0A28u;
    {
        const bool branch_taken_0x1c0a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a28) {
            ctx->pc = 0x1C0A48u;
            goto label_1c0a48;
        }
    }
    ctx->pc = 0x1C0A30u;
    // 0x1c0a30: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c0a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c0a34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a38: 0xac23f580  sw          $v1, -0xA80($at)
    ctx->pc = 0x1c0a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F580u, _value); } while (0);
    // 0x1c0a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0a40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a44: 0xa022f588  sb          $v0, -0xA78($at)
    ctx->pc = 0x1c0a44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F588u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F588u, _value); } while (0);
label_1c0a48:
    // 0x1c0a48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a4c: 0x8022f598  lb          $v0, -0xA68($at)
    ctx->pc = 0x1c0a4cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F598u));
    // 0x1c0a50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0A50u;
    {
        const bool branch_taken_0x1c0a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a50) {
            ctx->pc = 0x1C0A70u;
            goto label_1c0a70;
        }
    }
    ctx->pc = 0x1C0A58u;
    // 0x1c0a58: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c0a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c0a5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a60: 0xac23f590  sw          $v1, -0xA70($at)
    ctx->pc = 0x1c0a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F590u, _value); } while (0);
    // 0x1c0a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0a68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a6c: 0xa022f598  sb          $v0, -0xA68($at)
    ctx->pc = 0x1c0a6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F598u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F598u, _value); } while (0);
label_1c0a70:
    // 0x1c0a70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a74: 0x8c24f580  lw          $a0, -0xA80($at)
    ctx->pc = 0x1c0a74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F580u));
    // 0x1c0a78: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1c0a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0a7c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c0a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0a80: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a84: 0x8c23f590  lw          $v1, -0xA70($at)
    ctx->pc = 0x1c0a84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F590u));
    // 0x1c0a88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0a88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c0a8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0a90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c0a94: 0x8022f5a8  lb          $v0, -0xA58($at)
    ctx->pc = 0x1c0a94u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F5A8u));
    // 0x1c0a98: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c0a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c0a9c: 0x0  nop
    ctx->pc = 0x1c0a9cu;
    // NOP
    // 0x1c0aa0: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x1c0aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c0aa4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c0aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c0aa8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0AA8u;
    {
        const bool branch_taken_0x1c0aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AA8u;
        // 0x1c0aac: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0aa8) {
            ctx->pc = 0x1C0AC8u;
            goto label_1c0ac8;
        }
    }
    ctx->pc = 0x1C0AB0u;
    // 0x1c0ab0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1c0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1c0ab4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0ab8: 0xac23f5a0  sw          $v1, -0xA60($at)
    ctx->pc = 0x1c0ab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F5A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5A0u, _value); } while (0);
    // 0x1c0abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ac0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0ac4: 0xa022f5a8  sb          $v0, -0xA58($at)
    ctx->pc = 0x1c0ac4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F5A8u, _value); } while (0);
label_1c0ac8:
    // 0x1c0ac8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0acc: 0x8022f5b8  lb          $v0, -0xA48($at)
    ctx->pc = 0x1c0accu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F5B8u));
    // 0x1c0ad0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0AD0u;
    {
        const bool branch_taken_0x1c0ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ad0) {
            ctx->pc = 0x1C0AF0u;
            goto label_1c0af0;
        }
    }
    ctx->pc = 0x1C0AD8u;
    // 0x1c0ad8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c0adc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0ae0: 0xac23f5b0  sw          $v1, -0xA50($at)
    ctx->pc = 0x1c0ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F5B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5B0u, _value); } while (0);
    // 0x1c0ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ae8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0aec: 0xa022f5b8  sb          $v0, -0xA48($at)
    ctx->pc = 0x1c0aecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F5B8u, _value); } while (0);
label_1c0af0:
    // 0x1c0af0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0af4: 0xc42cf5a0  lwc1        $f12, -0xA60($at)
    ctx->pc = 0x1c0af4u;
    { uint32_t bits = FAST_READ32(0x36F5A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0afc: 0xc42df5b0  lwc1        $f13, -0xA50($at)
    ctx->pc = 0x1c0afcu;
    { uint32_t bits = FAST_READ32(0x36F5B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0b00: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C0B00u;
    SET_GPR_U32(ctx, 31, 0x1C0B08u);
    ctx->pc = 0x1C0B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B00u;
    // 0x1c0b04: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C0B00u, 0x1C0B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B08u;
label_1c0b08:
    // 0x1c0b08: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1c0b08u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0b0c: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c0b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c0b10: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1c0b10u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0b14: 0x0  nop
    ctx->pc = 0x1c0b14u;
    // NOP
    // 0x1c0b18: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c0b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c0b1c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c0b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c0b20: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C0B20u;
    SET_GPR_U32(ctx, 31, 0x1C0B28u);
    ctx->pc = 0x1C0B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B20u;
    // 0x1c0b24: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C0B20u, 0x1C0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B28u;
label_1c0b28:
    // 0x1c0b28: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x1c0b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0b2c: 0xc60d0044  lwc1        $f13, 0x44($s0)
    ctx->pc = 0x1c0b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0b30: 0xc60e0048  lwc1        $f14, 0x48($s0)
    ctx->pc = 0x1c0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c0b34: 0xc60f004c  lwc1        $f15, 0x4C($s0)
    ctx->pc = 0x1c0b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c0b38: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C0B38u;
    SET_GPR_U32(ctx, 31, 0x1C0B40u);
    ctx->pc = 0x1C0B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B38u;
    // 0x1c0b3c: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C0B38u, 0x1C0B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B40u;
label_1c0b40:
    // 0x1c0b40: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c0b44: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c0b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c0b48: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c0b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c0b4c: 0x24a517d0  addiu       $a1, $a1, 0x17D0
    ctx->pc = 0x1c0b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6096));
    // 0x1c0b50: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x1c0b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1c0b54: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C0B54u;
    SET_GPR_U32(ctx, 31, 0x1C0B5Cu);
    ctx->pc = 0x1C0B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B54u;
    // 0x1c0b58: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C0B54u, 0x1C0B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B5Cu;
label_1c0b5c:
    // 0x1c0b5c: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C0B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C0B64u);
    ctx->pc = 0x1C0B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B5Cu;
    // 0x1c0b60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C0B5Cu, 0x1C0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B64u;
label_1c0b64:
    // 0x1c0b64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c0b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0b68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c0b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0b6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c0b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B7Cu;
        // 0x1c0b80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0B84u;
}
