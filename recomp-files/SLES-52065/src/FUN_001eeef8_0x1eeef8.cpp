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

// Function: FUN_001eeef8
// Address: 0x1eeef8 - 0x1eef80
void FUN_001eeef8_0x1eeef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eeef8_0x1eeef8");
#endif

    switch (ctx->pc) {
        case 0x1eef10u: goto label_1eef10;
        case 0x1eef18u: goto label_1eef18;
        case 0x1eef38u: goto label_1eef38;
        case 0x1eef4cu: goto label_1eef4c;
        case 0x1eef68u: goto label_1eef68;
        default: break;
    }

    ctx->pc = 0x1eeef8u;

    // 0x1eeef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eeef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eeefc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1eeefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1eef00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eef04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eef08: 0xc07bba6  jal         func_1EEE98
    ctx->pc = 0x1EEF08u;
    SET_GPR_U32(ctx, 31, 0x1EEF10u);
    ctx->pc = 0x1EEF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF08u;
    // 0x1eef0c: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEE98u, 0x1EEF08u, 0x1EEF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF10u;
label_1eef10:
    // 0x1eef10: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EEF10u;
    SET_GPR_U32(ctx, 31, 0x1EEF18u);
    ctx->pc = 0x1EEF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF10u;
    // 0x1eef14: 0x8e24a468  lw          $a0, -0x5B98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EEF10u, 0x1EEF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF18u;
label_1eef18:
    // 0x1eef18: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1eef18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1eef1c: 0x2470f700  addiu       $s0, $v1, -0x900
    ctx->pc = 0x1eef1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
    // 0x1eef20: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x1eef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x1eef24: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1eef24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1eef28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEF28u;
    {
        const bool branch_taken_0x1eef28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF28u;
        // 0x1eef2c: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef28) {
            ctx->pc = 0x1EEF60u;
            goto label_1eef60;
        }
    }
    ctx->pc = 0x1EEF30u;
    // 0x1eef30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1eef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eef34: 0x0  nop
    ctx->pc = 0x1eef34u;
    // NOP
label_1eef38:
    // 0x1eef38: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEF38u;
    {
        const bool branch_taken_0x1eef38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef38) {
            ctx->pc = 0x1EEF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF38u;
            // 0x1eef3c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEF54u;
            goto label_1eef54;
        }
    }
    ctx->pc = 0x1EEF40u;
    // 0x1eef40: 0x8e24a468  lw          $a0, -0x5B98($s1)
    ctx->pc = 0x1eef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943848)));
    // 0x1eef44: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EEF44u;
    SET_GPR_U32(ctx, 31, 0x1EEF4Cu);
    ctx->pc = 0x1EEF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF44u;
    // 0x1eef48: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EEF44u, 0x1EEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF4Cu;
label_1eef4c:
    // 0x1eef4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEF4Cu;
    {
        const bool branch_taken_0x1eef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF4Cu;
        // 0x1eef50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef4c) {
            ctx->pc = 0x1EEF6Cu;
            goto label_1eef6c;
        }
    }
    ctx->pc = 0x1EEF54u;
label_1eef54:
    // 0x1eef54: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1eef54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1eef58: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EEF58u;
    {
        const bool branch_taken_0x1eef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef58) {
            ctx->pc = 0x1EEF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF58u;
            // 0x1eef5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eef38;
        }
    }
    ctx->pc = 0x1EEF60u;
label_1eef60:
    // 0x1eef60: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EEF60u;
    SET_GPR_U32(ctx, 31, 0x1EEF68u);
    ctx->pc = 0x1EEF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF60u;
    // 0x1eef64: 0x8e24a468  lw          $a0, -0x5B98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EEF60u, 0x1EEF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF68u;
label_1eef68:
    // 0x1eef68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eef68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eef6c:
    // 0x1eef6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eef6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eef70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1eef70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eef74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eef74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eef78: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF78u;
        // 0x1eef7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEF80u;
}
