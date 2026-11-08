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

// Function: FUN_001e9750
// Address: 0x1e9750 - 0x1e98dc
void FUN_001e9750_0x1e9750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9750_0x1e9750");
#endif

    switch (ctx->pc) {
        case 0x1e9778u: goto label_1e9778;
        case 0x1e978cu: goto label_1e978c;
        case 0x1e9798u: goto label_1e9798;
        case 0x1e97acu: goto label_1e97ac;
        case 0x1e97c8u: goto label_1e97c8;
        case 0x1e9820u: goto label_1e9820;
        case 0x1e9830u: goto label_1e9830;
        case 0x1e9840u: goto label_1e9840;
        case 0x1e98c0u: goto label_1e98c0;
        default: break;
    }

    ctx->pc = 0x1e9750u;

    // 0x1e9750: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e9750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e9754: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e9754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e9758: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e975c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e9760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9764: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e9764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e976c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1e976cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e9770: 0xc07aad4  jal         func_1EAB50
    ctx->pc = 0x1E9770u;
    SET_GPR_U32(ctx, 31, 0x1E9778u);
    ctx->pc = 0x1E9774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9770u;
    // 0x1e9774: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAB50u, 0x1E9770u, 0x1E9778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9778u;
label_1e9778:
    // 0x1e9778: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1e9778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1e977c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E977Cu;
    {
        const bool branch_taken_0x1e977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E977Cu;
        // 0x1e9780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e977c) {
            ctx->pc = 0x1E9790u;
            goto label_1e9790;
        }
    }
    ctx->pc = 0x1E9784u;
    // 0x1e9784: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1E9784u;
    SET_GPR_U32(ctx, 31, 0x1E978Cu);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1E9784u, 0x1E978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E978Cu;
label_1e978c:
    // 0x1e978c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e978cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e9790:
    // 0x1e9790: 0xc07aba0  jal         func_1EAE80
    ctx->pc = 0x1E9790u;
    SET_GPR_U32(ctx, 31, 0x1E9798u);
    ctx->pc = 0x1E9794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9790u;
    // 0x1e9794: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE80u, 0x1E9790u, 0x1E9798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9798u;
label_1e9798:
    // 0x1e9798: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e979c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E979Cu;
    {
        const bool branch_taken_0x1e979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E979Cu;
        // 0x1e97a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e979c) {
            ctx->pc = 0x1E97B4u;
            goto label_1e97b4;
        }
    }
    ctx->pc = 0x1E97A4u;
    // 0x1e97a4: 0xc07a790  jal         func_1E9E40
    ctx->pc = 0x1E97A4u;
    SET_GPR_U32(ctx, 31, 0x1E97ACu);
    ctx->pc = 0x1E97A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E97A4u;
    // 0x1e97a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9E40u, 0x1E97A4u, 0x1E97ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E97ACu;
label_1e97ac:
    // 0x1e97ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E97ACu;
    {
        const bool branch_taken_0x1e97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97ACu;
        // 0x1e97b0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97ac) {
            ctx->pc = 0x1E97B8u;
            goto label_1e97b8;
        }
    }
    ctx->pc = 0x1E97B4u;
label_1e97b4:
    // 0x1e97b4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1e97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1e97b8:
    // 0x1e97b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e97b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e97bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e97c0: 0xc07a638  jal         func_1E98E0
    ctx->pc = 0x1E97C0u;
    SET_GPR_U32(ctx, 31, 0x1E97C8u);
    ctx->pc = 0x1E97C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E97C0u;
    // 0x1e97c4: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E98E0u, 0x1E97C0u, 0x1E97C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E97C8u;
label_1e97c8:
    // 0x1e97c8: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x1e97c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e97cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e97ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97d0: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1e97d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1e97d4: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x1e97d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e97d8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1e97d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1e97dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1e97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1e97e0: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x1e97e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e97e4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1e97e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1e97e8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e97e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e97ec: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1e97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e97f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e97f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e97f4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e97f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1e97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e97fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E97FCu;
    {
        const bool branch_taken_0x1e97fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97FCu;
        // 0x1e9800: 0x26040005  addiu       $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97fc) {
            ctx->pc = 0x1E980Cu;
            goto label_1e980c;
        }
    }
    ctx->pc = 0x1E9804u;
    // 0x1e9804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9804u;
    {
        const bool branch_taken_0x1e9804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9804u;
        // 0x1e9808: 0x27b1006c  addiu       $s1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9804) {
            ctx->pc = 0x1E9814u;
            goto label_1e9814;
        }
    }
    ctx->pc = 0x1E980Cu;
label_1e980c:
    // 0x1e980c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e980cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9810: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x1e9810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1e9814:
    // 0x1e9814: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1e9814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1e9818: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1E9818u;
    SET_GPR_U32(ctx, 31, 0x1E9820u);
    ctx->pc = 0x1E981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9818u;
    // 0x1e981c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1E9818u, 0x1E9820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9820u;
label_1e9820:
    // 0x1e9820: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x1e9820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e9824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9828: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1E9828u;
    SET_GPR_U32(ctx, 31, 0x1E9830u);
    ctx->pc = 0x1E982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9828u;
    // 0x1e982c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1E9828u, 0x1E9830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9830u;
label_1e9830:
    // 0x1e9830: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9834: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e9834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9838: 0xc07a7f0  jal         func_1E9FC0
    ctx->pc = 0x1E9838u;
    SET_GPR_U32(ctx, 31, 0x1E9840u);
    ctx->pc = 0x1E983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9838u;
    // 0x1e983c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9FC0u, 0x1E9838u, 0x1E9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9840u;
label_1e9840:
    // 0x1e9840: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e9844: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1e9844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1e9848: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1e9848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1e984c: 0xdfa60078  ld          $a2, 0x78($sp)
    ctx->pc = 0x1e984cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e9850: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1e9850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e9854: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e9854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e9858: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e9858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1e985c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9860: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e9860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1e9864: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1e9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e9868: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e9868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1e986c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e9870: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e9870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9874: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9874u;
    {
        const bool branch_taken_0x1e9874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9874u;
        // 0x1e9878: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9874) {
            ctx->pc = 0x1E9894u;
            goto label_1e9894;
        }
    }
    ctx->pc = 0x1E987Cu;
    // 0x1e987c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e987cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1e9880: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e9880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e9884: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e9884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9888: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e9888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e988c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E988Cu;
    {
        const bool branch_taken_0x1e988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E988Cu;
        // 0x1e9890: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e988c) {
            ctx->pc = 0x1E98A8u;
            goto label_1e98a8;
        }
    }
    ctx->pc = 0x1E9894u;
label_1e9894:
    // 0x1e9894: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e9894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e9898: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1e9898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e989c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e989cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e98a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e98a4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e98a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1e98a8:
    // 0x1e98a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e98ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e98acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98b0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e98b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e98b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e98b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e98b8: 0xc07ab48  jal         func_1EAD20
    ctx->pc = 0x1E98B8u;
    SET_GPR_U32(ctx, 31, 0x1E98C0u);
    ctx->pc = 0x1E98BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E98B8u;
    // 0x1e98bc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD20u, 0x1E98B8u, 0x1E98C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E98C0u;
label_1e98c0:
    // 0x1e98c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e98c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e98c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e98c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e98c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e98c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e98cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e98ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e98d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e98d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e98d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E98D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98D4u;
        // 0x1e98d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E98D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E98DCu;
}
