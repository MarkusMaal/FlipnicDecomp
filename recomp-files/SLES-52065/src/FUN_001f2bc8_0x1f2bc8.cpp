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

// Function: FUN_001f2bc8
// Address: 0x1f2bc8 - 0x1f2c54
void FUN_001f2bc8_0x1f2bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2bc8_0x1f2bc8");
#endif

    switch (ctx->pc) {
        case 0x1f2c04u: goto label_1f2c04;
        case 0x1f2c1cu: goto label_1f2c1c;
        case 0x1f2c30u: goto label_1f2c30;
        default: break;
    }

    ctx->pc = 0x1f2bc8u;

    // 0x1f2bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f2bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f2bcc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f2bd0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1f2bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1f2bd4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f2bd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f2bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f2bdc: 0x2453a3ac  addiu       $s3, $v0, -0x5C54
    ctx->pc = 0x1f2bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943660));
    // 0x1f2be0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f2be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f2be4: 0x2471fda8  addiu       $s1, $v1, -0x258
    ctx->pc = 0x1f2be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966696));
    // 0x1f2be8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f2be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f2bec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f2becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f2bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f2bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f2bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bfc: 0xc07fdd8  jal         func_1FF760
    ctx->pc = 0x1F2BFCu;
    SET_GPR_U32(ctx, 31, 0x1F2C04u);
    ctx->pc = 0x1F2C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BFCu;
    // 0x1f2c00: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF760u, 0x1F2BFCu, 0x1F2C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C04u;
label_1f2c04:
    // 0x1f2c04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2C04u;
    {
        const bool branch_taken_0x1f2c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C04u;
        // 0x1f2c08: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c04) {
            ctx->pc = 0x1F2C34u;
            goto label_1f2c34;
        }
    }
    ctx->pc = 0x1F2C0Cu;
    // 0x1f2c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c10: 0x8e05a484  lw          $a1, -0x5B7C($s0)
    ctx->pc = 0x1f2c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943876)));
    // 0x1f2c14: 0xc07fdd8  jal         func_1FF760
    ctx->pc = 0x1F2C14u;
    SET_GPR_U32(ctx, 31, 0x1F2C1Cu);
    ctx->pc = 0x1F2C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C14u;
    // 0x1f2c18: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF760u, 0x1F2C14u, 0x1F2C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C1Cu;
label_1f2c1c:
    // 0x1f2c1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2C1Cu;
    {
        const bool branch_taken_0x1f2c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C1Cu;
        // 0x1f2c20: 0x8e05a484  lw          $a1, -0x5B7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c1c) {
            ctx->pc = 0x1F2C34u;
            goto label_1f2c34;
        }
    }
    ctx->pc = 0x1F2C24u;
    // 0x1f2c24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c28: 0xc07fdd8  jal         func_1FF760
    ctx->pc = 0x1F2C28u;
    SET_GPR_U32(ctx, 31, 0x1F2C30u);
    ctx->pc = 0x1F2C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C28u;
    // 0x1f2c2c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF760u, 0x1F2C28u, 0x1F2C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C30u;
label_1f2c30:
    // 0x1f2c30: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1f2c30u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f2c34:
    // 0x1f2c34: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1f2c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f2c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2c3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1f2c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2c40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f2c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2c44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f2c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f2c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C4Cu;
        // 0x1f2c50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2C54u;
}
