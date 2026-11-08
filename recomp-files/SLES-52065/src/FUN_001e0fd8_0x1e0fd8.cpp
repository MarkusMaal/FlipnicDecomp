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

// Function: FUN_001e0fd8
// Address: 0x1e0fd8 - 0x1e1084
void FUN_001e0fd8_0x1e0fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0fd8_0x1e0fd8");
#endif

    switch (ctx->pc) {
        case 0x1e1014u: goto label_1e1014;
        default: break;
    }

    ctx->pc = 0x1e0fd8u;

    // 0x1e0fd8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e0fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fdc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0fe0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e0fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0fec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0ff8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0ffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1000: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1e1000u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1e1004: 0x2610b340  addiu       $s0, $s0, -0x4CC0
    ctx->pc = 0x1e1004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947648));
    // 0x1e1008: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e1008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e100c: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1E100Cu;
    SET_GPR_U32(ctx, 31, 0x1E1014u);
    ctx->pc = 0x1E1010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E100Cu;
    // 0x1e1010: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1E100Cu, 0x1E1014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1014u;
label_1e1014:
    // 0x1e1014: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E1014u;
    {
        const bool branch_taken_0x1e1014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1014) {
            ctx->pc = 0x1E1018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1014u;
            // 0x1e1018: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1074u;
            goto label_1e1074;
        }
    }
    ctx->pc = 0x1E101Cu;
    // 0x1e101c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e1020: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E1020u;
    {
        const bool branch_taken_0x1e1020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1020u;
        // 0x1e1024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1020) {
            ctx->pc = 0x1E1070u;
            goto label_1e1070;
        }
    }
    ctx->pc = 0x1E1028u;
    // 0x1e1028: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x1e1028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e102c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E102Cu;
    {
        const bool branch_taken_0x1e102c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E102Cu;
        // 0x1e1030: 0x30c30001  andi        $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e102c) {
            ctx->pc = 0x1E1070u;
            goto label_1e1070;
        }
    }
    ctx->pc = 0x1E1034u;
    // 0x1e1034: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E1034u;
    {
        const bool branch_taken_0x1e1034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1034u;
        // 0x1e1038: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1034) {
            ctx->pc = 0x1E1074u;
            goto label_1e1074;
        }
    }
    ctx->pc = 0x1E103Cu;
    // 0x1e103c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1e103cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e1040: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x1e1040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e1044: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1E1044u;
    {
        const bool branch_taken_0x1e1044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1044) {
            ctx->pc = 0x1E1048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1044u;
            // 0x1e1048: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1078u;
            goto label_1e1078;
        }
    }
    ctx->pc = 0x1E104Cu;
    // 0x1e104c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1e104cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1050: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1e1050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e1054: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e1054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e1058: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1e1058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1e105c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1e105cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1060: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1060u;
    {
        const bool branch_taken_0x1e1060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1060u;
        // 0x1e1064: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1060) {
            ctx->pc = 0x1E1078u;
            goto label_1e1078;
        }
    }
    ctx->pc = 0x1E1068u;
    // 0x1e1068: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1e1068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e106c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1e106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1e1070:
    // 0x1e1070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1074:
    // 0x1e1074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e1078:
    // 0x1e1078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e107c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E107Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E107Cu;
        // 0x1e1080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E107Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1084u;
}
