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

// Function: FUN_001876b0
// Address: 0x1876b0 - 0x187864
void FUN_001876b0_0x1876b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001876b0_0x1876b0");
#endif

    switch (ctx->pc) {
        case 0x1876f8u: goto label_1876f8;
        case 0x18770cu: goto label_18770c;
        case 0x187718u: goto label_187718;
        case 0x187720u: goto label_187720;
        case 0x187728u: goto label_187728;
        case 0x187748u: goto label_187748;
        case 0x18775cu: goto label_18775c;
        case 0x187768u: goto label_187768;
        case 0x187770u: goto label_187770;
        case 0x187778u: goto label_187778;
        case 0x187784u: goto label_187784;
        case 0x1877b0u: goto label_1877b0;
        case 0x1877c4u: goto label_1877c4;
        case 0x1877d0u: goto label_1877d0;
        case 0x1877d8u: goto label_1877d8;
        case 0x1877e0u: goto label_1877e0;
        case 0x187800u: goto label_187800;
        case 0x187814u: goto label_187814;
        case 0x187820u: goto label_187820;
        case 0x187828u: goto label_187828;
        case 0x187830u: goto label_187830;
        case 0x18783cu: goto label_18783c;
        case 0x187848u: goto label_187848;
        default: break;
    }

    ctx->pc = 0x1876b0u;

label_1876b0:
    // 0x1876b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1876b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1876b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1876b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1876b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1876b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1876bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1876bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1876c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1876c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1876c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1876c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1876c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1876c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876cc: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1876ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1876d0: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x1876D0u;
    {
        const bool branch_taken_0x1876d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876D0u;
        // 0x1876d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876d0) {
            ctx->pc = 0x187784u;
            goto label_187784;
        }
    }
    ctx->pc = 0x1876D8u;
    // 0x1876d8: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1876d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1876dc: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1876DCu;
    {
        const bool branch_taken_0x1876dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876dc) {
            ctx->pc = 0x187728u;
            goto label_187728;
        }
    }
    ctx->pc = 0x1876E4u;
    // 0x1876e4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1876e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1876e8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1876E8u;
    {
        const bool branch_taken_0x1876e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876e8) {
            ctx->pc = 0x1876F8u;
            goto label_1876f8;
        }
    }
    ctx->pc = 0x1876F0u;
    // 0x1876f0: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x1876F0u;
    SET_GPR_U32(ctx, 31, 0x1876F8u);
    ctx->pc = 0x1876B0u;
    goto label_1876b0;
    ctx->pc = 0x1876F8u;
label_1876f8:
    // 0x1876f8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1876fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1876FCu;
    {
        const bool branch_taken_0x1876fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x187700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876FCu;
        // 0x187700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876fc) {
            ctx->pc = 0x187710u;
            goto label_187710;
        }
    }
    ctx->pc = 0x187704u;
    // 0x187704: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x187704u;
    SET_GPR_U32(ctx, 31, 0x18770Cu);
    ctx->pc = 0x187708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187704u;
    // 0x187708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876B0u;
    goto label_1876b0;
    ctx->pc = 0x18770Cu;
label_18770c:
    // 0x18770c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187710:
    // 0x187710: 0xc061e20  jal         func_187880
    ctx->pc = 0x187710u;
    SET_GPR_U32(ctx, 31, 0x187718u);
    ctx->pc = 0x187880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187880u, 0x187710u, 0x187718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187718u;
label_187718:
    // 0x187718: 0xc061e1c  jal         func_187870
    ctx->pc = 0x187718u;
    SET_GPR_U32(ctx, 31, 0x187720u);
    ctx->pc = 0x18771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187718u;
    // 0x18771c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187870u, 0x187718u, 0x187720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187720u;
label_187720:
    // 0x187720: 0xc0401a4  jal         func_100690
    ctx->pc = 0x187720u;
    SET_GPR_U32(ctx, 31, 0x187728u);
    ctx->pc = 0x187724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187720u;
    // 0x187724: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x187720u, 0x187728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187728u;
label_187728:
    // 0x187728: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x187728u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18772c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x18772Cu;
    {
        const bool branch_taken_0x18772c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x187730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18772Cu;
        // 0x187730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18772c) {
            ctx->pc = 0x18777Cu;
            goto label_18777c;
        }
    }
    ctx->pc = 0x187734u;
    // 0x187734: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x187734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x187738: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187738u;
    {
        const bool branch_taken_0x187738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187738u;
        // 0x18773c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187738) {
            ctx->pc = 0x187748u;
            goto label_187748;
        }
    }
    ctx->pc = 0x187740u;
    // 0x187740: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x187740u;
    SET_GPR_U32(ctx, 31, 0x187748u);
    ctx->pc = 0x1876B0u;
    goto label_1876b0;
    ctx->pc = 0x187748u;
label_187748:
    // 0x187748: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18774c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18774Cu;
    {
        const bool branch_taken_0x18774c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x187750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18774Cu;
        // 0x187750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18774c) {
            ctx->pc = 0x187760u;
            goto label_187760;
        }
    }
    ctx->pc = 0x187754u;
    // 0x187754: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x187754u;
    SET_GPR_U32(ctx, 31, 0x18775Cu);
    ctx->pc = 0x187758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187754u;
    // 0x187758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876B0u;
    goto label_1876b0;
    ctx->pc = 0x18775Cu;
label_18775c:
    // 0x18775c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18775cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187760:
    // 0x187760: 0xc061e20  jal         func_187880
    ctx->pc = 0x187760u;
    SET_GPR_U32(ctx, 31, 0x187768u);
    ctx->pc = 0x187880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187880u, 0x187760u, 0x187768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187768u;
label_187768:
    // 0x187768: 0xc061e1c  jal         func_187870
    ctx->pc = 0x187768u;
    SET_GPR_U32(ctx, 31, 0x187770u);
    ctx->pc = 0x18776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187768u;
    // 0x18776c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187870u, 0x187768u, 0x187770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187770u;
label_187770:
    // 0x187770: 0xc0401a4  jal         func_100690
    ctx->pc = 0x187770u;
    SET_GPR_U32(ctx, 31, 0x187778u);
    ctx->pc = 0x187774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187770u;
    // 0x187774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x187770u, 0x187778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187778u;
label_187778:
    // 0x187778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x187778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18777c:
    // 0x18777c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x18777Cu;
    SET_GPR_U32(ctx, 31, 0x187784u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x18777Cu, 0x187784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187784u;
label_187784:
    // 0x187784: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x187784u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x187788: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x187788u;
    {
        const bool branch_taken_0x187788 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187788u;
        // 0x18778c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187788) {
            ctx->pc = 0x187840u;
            goto label_187840;
        }
    }
    ctx->pc = 0x187790u;
    // 0x187790: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x187790u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187794: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x187794u;
    {
        const bool branch_taken_0x187794 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x187794) {
            ctx->pc = 0x1877E0u;
            goto label_1877e0;
        }
    }
    ctx->pc = 0x18779Cu;
    // 0x18779c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x18779cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1877a0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1877A0u;
    {
        const bool branch_taken_0x1877a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877A0u;
        // 0x1877a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877a0) {
            ctx->pc = 0x1877B0u;
            goto label_1877b0;
        }
    }
    ctx->pc = 0x1877A8u;
    // 0x1877a8: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x1877A8u;
    SET_GPR_U32(ctx, 31, 0x1877B0u);
    ctx->pc = 0x1876B0u;
    goto label_1876b0;
    ctx->pc = 0x1877B0u;
label_1877b0:
    // 0x1877b0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1877b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1877b4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1877B4u;
    {
        const bool branch_taken_0x1877b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877B4u;
        // 0x1877b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877b4) {
            ctx->pc = 0x1877C8u;
            goto label_1877c8;
        }
    }
    ctx->pc = 0x1877BCu;
    // 0x1877bc: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x1877BCu;
    SET_GPR_U32(ctx, 31, 0x1877C4u);
    ctx->pc = 0x1877C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877BCu;
    // 0x1877c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876B0u;
    goto label_1876b0;
    ctx->pc = 0x1877C4u;
label_1877c4:
    // 0x1877c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1877c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1877c8:
    // 0x1877c8: 0xc061e20  jal         func_187880
    ctx->pc = 0x1877C8u;
    SET_GPR_U32(ctx, 31, 0x1877D0u);
    ctx->pc = 0x187880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187880u, 0x1877C8u, 0x1877D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877D0u;
label_1877d0:
    // 0x1877d0: 0xc061e1c  jal         func_187870
    ctx->pc = 0x1877D0u;
    SET_GPR_U32(ctx, 31, 0x1877D8u);
    ctx->pc = 0x1877D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877D0u;
    // 0x1877d4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187870u, 0x1877D0u, 0x1877D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877D8u;
label_1877d8:
    // 0x1877d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1877D8u;
    SET_GPR_U32(ctx, 31, 0x1877E0u);
    ctx->pc = 0x1877DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877D8u;
    // 0x1877dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1877D8u, 0x1877E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877E0u;
label_1877e0:
    // 0x1877e0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1877e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1877e4: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1877E4u;
    {
        const bool branch_taken_0x1877e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877E4u;
        // 0x1877e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877e4) {
            ctx->pc = 0x187834u;
            goto label_187834;
        }
    }
    ctx->pc = 0x1877ECu;
    // 0x1877ec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1877ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1877f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1877F0u;
    {
        const bool branch_taken_0x1877f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877F0u;
        // 0x1877f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877f0) {
            ctx->pc = 0x187800u;
            goto label_187800;
        }
    }
    ctx->pc = 0x1877F8u;
    // 0x1877f8: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x1877F8u;
    SET_GPR_U32(ctx, 31, 0x187800u);
    ctx->pc = 0x1876B0u;
    goto label_1876b0;
    ctx->pc = 0x187800u;
label_187800:
    // 0x187800: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x187800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x187804: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187804u;
    {
        const bool branch_taken_0x187804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x187808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187804u;
        // 0x187808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187804) {
            ctx->pc = 0x187818u;
            goto label_187818;
        }
    }
    ctx->pc = 0x18780Cu;
    // 0x18780c: 0xc061dac  jal         func_1876B0
    ctx->pc = 0x18780Cu;
    SET_GPR_U32(ctx, 31, 0x187814u);
    ctx->pc = 0x187810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18780Cu;
    // 0x187810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876B0u;
    goto label_1876b0;
    ctx->pc = 0x187814u;
label_187814:
    // 0x187814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187818:
    // 0x187818: 0xc061e20  jal         func_187880
    ctx->pc = 0x187818u;
    SET_GPR_U32(ctx, 31, 0x187820u);
    ctx->pc = 0x187880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187880u, 0x187818u, 0x187820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187820u;
label_187820:
    // 0x187820: 0xc061e1c  jal         func_187870
    ctx->pc = 0x187820u;
    SET_GPR_U32(ctx, 31, 0x187828u);
    ctx->pc = 0x187824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187820u;
    // 0x187824: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187870u, 0x187820u, 0x187828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187828u;
label_187828:
    // 0x187828: 0xc0401a4  jal         func_100690
    ctx->pc = 0x187828u;
    SET_GPR_U32(ctx, 31, 0x187830u);
    ctx->pc = 0x18782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187828u;
    // 0x18782c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x187828u, 0x187830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187830u;
label_187830:
    // 0x187830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x187830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187834:
    // 0x187834: 0xc0401a4  jal         func_100690
    ctx->pc = 0x187834u;
    SET_GPR_U32(ctx, 31, 0x18783Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x187834u, 0x18783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18783Cu;
label_18783c:
    // 0x18783c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18783cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187840:
    // 0x187840: 0xc0401a4  jal         func_100690
    ctx->pc = 0x187840u;
    SET_GPR_U32(ctx, 31, 0x187848u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x187840u, 0x187848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187848u;
label_187848:
    // 0x187848: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x187848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18784c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18784cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187850: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18785c: 0x3e00008  jr          $ra
    ctx->pc = 0x18785Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18785Cu;
        // 0x187860: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18785Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187864u;
}
