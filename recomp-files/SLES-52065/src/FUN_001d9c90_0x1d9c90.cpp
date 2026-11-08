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

// Function: FUN_001d9c90
// Address: 0x1d9c90 - 0x1d9d38
void FUN_001d9c90_0x1d9c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d9c90_0x1d9c90");
#endif

    switch (ctx->pc) {
        case 0x1d9cc8u: goto label_1d9cc8;
        case 0x1d9ce0u: goto label_1d9ce0;
        case 0x1d9d14u: goto label_1d9d14;
        default: break;
    }

    ctx->pc = 0x1d9c90u;

    // 0x1d9c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9c94: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d9c98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d9c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d9c9c: 0x245466c0  addiu       $s4, $v0, 0x66C0
    ctx->pc = 0x1d9c9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
    // 0x1d9ca0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d9ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d9ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9ca8: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x1d9ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d9cac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9cb0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1d9cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d9cb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9cb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d9cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9cc0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1d9cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9cc4: 0x0  nop
    ctx->pc = 0x1d9cc4u;
    // NOP
label_1d9cc8:
    // 0x1d9cc8: 0x2542021  addu        $a0, $s2, $s4
    ctx->pc = 0x1d9cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1d9ccc: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x1d9cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1d9cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cd4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1d9cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d9cd8: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1D9CD8u;
    SET_GPR_U32(ctx, 31, 0x1D9CE0u);
    ctx->pc = 0x1D9CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CD8u;
    // 0x1d9cdc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1D9CD8u, 0x1D9CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CE0u;
label_1d9ce0:
    // 0x1d9ce0: 0xae00fff0  sw          $zero, -0x10($s0)
    ctx->pc = 0x1d9ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_U32(ctx, 0));
    // 0x1d9ce4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1d9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1d9ce8: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1d9ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x1d9cec: 0xae13fffc  sw          $s3, -0x4($s0)
    ctx->pc = 0x1d9cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 19));
    // 0x1d9cf0: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D9CF0u;
    {
        const bool branch_taken_0x1d9cf0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CF0u;
        // 0x1d9cf4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9cf0) {
            ctx->pc = 0x1D9CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9cc8;
        }
    }
    ctx->pc = 0x1D9CF8u;
    // 0x1d9cf8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1d9cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1d9cfc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1d9cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1d9d00: 0x24a599f0  addiu       $a1, $a1, -0x6610
    ctx->pc = 0x1d9d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941168));
    // 0x1d9d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d9d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d0c: 0xc074bee  jal         func_1D2FB8
    ctx->pc = 0x1D9D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D14u);
    ctx->pc = 0x1D9D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D0Cu;
    // 0x1d9d10: 0xac6270c0  sw          $v0, 0x70C0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 28864), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FB8u, 0x1D9D0Cu, 0x1D9D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D14u;
label_1d9d14:
    // 0x1d9d14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9d24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9d28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d9d28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9d2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d9d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d9d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D30u;
        // 0x1d9d34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D38u;
}
