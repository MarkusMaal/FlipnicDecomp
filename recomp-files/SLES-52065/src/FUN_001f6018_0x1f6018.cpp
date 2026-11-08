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

// Function: FUN_001f6018
// Address: 0x1f6018 - 0x1f6090
void FUN_001f6018_0x1f6018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6018_0x1f6018");
#endif

    switch (ctx->pc) {
        case 0x1f6058u: goto label_1f6058;
        default: break;
    }

    ctx->pc = 0x1f6018u;

    // 0x1f6018: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f6018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f601c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f6020: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f6020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f6024: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1f6024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f6028: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f6028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f602c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f602cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6030: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f6030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6038: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f6038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f603c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6040: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f6040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f6044: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f6044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f6048: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F6048u;
    {
        const bool branch_taken_0x1f6048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6048u;
        // 0x1f604c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6048) {
            ctx->pc = 0x1F6084u;
            goto label_1f6084;
        }
    }
    ctx->pc = 0x1F6050u;
    // 0x1f6050: 0xc07d7ba  jal         func_1F5EE8
    ctx->pc = 0x1F6050u;
    SET_GPR_U32(ctx, 31, 0x1F6058u);
    ctx->pc = 0x1F6054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6050u;
    // 0x1f6054: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5EE8u, 0x1F6050u, 0x1F6058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6058u;
label_1f6058:
    // 0x1f6058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f605c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1f605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f6060: 0x90820070  lbu         $v0, 0x70($a0)
    ctx->pc = 0x1f6060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1f6064: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6064u;
    {
        const bool branch_taken_0x1f6064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F6068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6064u;
        // 0x1f6068: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6064) {
            ctx->pc = 0x1F6088u;
            goto label_1f6088;
        }
    }
    ctx->pc = 0x1F606Cu;
    // 0x1f606c: 0x90830071  lbu         $v1, 0x71($a0)
    ctx->pc = 0x1f606cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
    // 0x1f6070: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f6070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6074: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6074u;
    {
        const bool branch_taken_0x1f6074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6074) {
            ctx->pc = 0x1F6078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6074u;
            // 0x1f6078: 0x90820070  lbu         $v0, 0x70($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6088u;
            goto label_1f6088;
        }
    }
    ctx->pc = 0x1F607Cu;
    // 0x1f607c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F607Cu;
    {
        const bool branch_taken_0x1f607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F607Cu;
        // 0x1f6080: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f607c) {
            ctx->pc = 0x1F6088u;
            goto label_1f6088;
        }
    }
    ctx->pc = 0x1F6084u;
label_1f6084:
    // 0x1f6084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6088:
    // 0x1f6088: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6088u;
        // 0x1f608c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6090u;
}
