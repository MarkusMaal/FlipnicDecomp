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

// Function: FUN_001f0fc0
// Address: 0x1f0fc0 - 0x1f1088
void FUN_001f0fc0_0x1f0fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0fc0_0x1f0fc0");
#endif

    switch (ctx->pc) {
        case 0x1f0fe0u: goto label_1f0fe0;
        case 0x1f0ff8u: goto label_1f0ff8;
        case 0x1f1000u: goto label_1f1000;
        case 0x1f1008u: goto label_1f1008;
        case 0x1f1024u: goto label_1f1024;
        case 0x1f1038u: goto label_1f1038;
        case 0x1f104cu: goto label_1f104c;
        case 0x1f106cu: goto label_1f106c;
        default: break;
    }

    ctx->pc = 0x1f0fc0u;

    // 0x1f0fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f0fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f0fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0fc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0fcc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f0fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f0fd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f0fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f0fd4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1f0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f0fd8: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F0FD8u;
    SET_GPR_U32(ctx, 31, 0x1F0FE0u);
    ctx->pc = 0x1F0FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FD8u;
    // 0x1f0fdc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F0FD8u, 0x1F0FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0FE0u;
label_1f0fe0:
    // 0x1f0fe0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f0fe4: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1f0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f0fe8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0FE8u;
    {
        const bool branch_taken_0x1f0fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0fe8) {
            ctx->pc = 0x1F0FF8u;
            goto label_1f0ff8;
        }
    }
    ctx->pc = 0x1F0FF0u;
    // 0x1f0ff0: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F0FF0u;
    SET_GPR_U32(ctx, 31, 0x1F0FF8u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F0FF0u, 0x1F0FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0FF8u;
label_1f0ff8:
    // 0x1f0ff8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0FF8u;
    SET_GPR_U32(ctx, 31, 0x1F1000u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0FF8u, 0x1F1000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1000u;
label_1f1000:
    // 0x1f1000: 0xc07bbbe  jal         func_1EEEF8
    ctx->pc = 0x1F1000u;
    SET_GPR_U32(ctx, 31, 0x1F1008u);
    ctx->pc = 0x1EEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEEF8u, 0x1F1000u, 0x1F1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1008u;
label_1f1008:
    // 0x1f1008: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f1008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f100c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F100Cu;
    {
        const bool branch_taken_0x1f100c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F100Cu;
        // 0x1f1010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f100c) {
            ctx->pc = 0x1F101Cu;
            goto label_1f101c;
        }
    }
    ctx->pc = 0x1F1014u;
    // 0x1f1014: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F1014u;
    {
        const bool branch_taken_0x1f1014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1014u;
        // 0x1f1018: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1014) {
            ctx->pc = 0x1F1070u;
            goto label_1f1070;
        }
    }
    ctx->pc = 0x1F101Cu;
label_1f101c:
    // 0x1f101c: 0xc07c21e  jal         func_1F0878
    ctx->pc = 0x1F101Cu;
    SET_GPR_U32(ctx, 31, 0x1F1024u);
    ctx->pc = 0x1F1020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F101Cu;
    // 0x1f1020: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0878u, 0x1F101Cu, 0x1F1024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1024u;
label_1f1024:
    // 0x1f1024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1028: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1028u;
    {
        const bool branch_taken_0x1f1028 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1F102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1028u;
        // 0x1f102c: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1028) {
            ctx->pc = 0x1F1044u;
            goto label_1f1044;
        }
    }
    ctx->pc = 0x1F1030u;
    // 0x1f1030: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1030u;
    SET_GPR_U32(ctx, 31, 0x1F1038u);
    ctx->pc = 0x1F1034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1030u;
    // 0x1f1034: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1030u, 0x1F1038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1038u;
label_1f1038:
    // 0x1f1038: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1f1038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1f103c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F103Cu;
    {
        const bool branch_taken_0x1f103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F103Cu;
        // 0x1f1040: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f103c) {
            ctx->pc = 0x1F1064u;
            goto label_1f1064;
        }
    }
    ctx->pc = 0x1F1044u;
label_1f1044:
    // 0x1f1044: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1044u;
    SET_GPR_U32(ctx, 31, 0x1F104Cu);
    ctx->pc = 0x1F1048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1044u;
    // 0x1f1048: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1044u, 0x1F104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F104Cu;
label_1f104c:
    // 0x1f104c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f1050: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f1050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f1054: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x1f1054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
    // 0x1f1058: 0x8e04a468  lw          $a0, -0x5B98($s0)
    ctx->pc = 0x1f1058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    // 0x1f105c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x1f105cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1f1060: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_1f1064:
    // 0x1f1064: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F1064u;
    SET_GPR_U32(ctx, 31, 0x1F106Cu);
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F1064u, 0x1F106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F106Cu;
label_1f106c:
    // 0x1f106c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f106cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1070:
    // 0x1f1070: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f1070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1074: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f1074u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1078: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f1078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f107c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f107cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1080: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1080u;
        // 0x1f1084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1088u;
}
