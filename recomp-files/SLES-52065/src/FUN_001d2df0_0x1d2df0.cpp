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

// Function: FUN_001d2df0
// Address: 0x1d2df0 - 0x1d2e80
void FUN_001d2df0_0x1d2df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2df0_0x1d2df0");
#endif

    ctx->pc = 0x1d2df0u;

    // 0x1d2df0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1d2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2df4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2df8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d2dfc: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x1d2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
    // 0x1d2e00: 0x908201e0  lbu         $v0, 0x1E0($a0)
    ctx->pc = 0x1d2e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x1d2e04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2E04u;
    {
        const bool branch_taken_0x1d2e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E04u;
        // 0x1d2e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e04) {
            ctx->pc = 0x1D2E14u;
            goto label_1d2e14;
        }
    }
    ctx->pc = 0x1D2E0Cu;
    // 0x1d2e0c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D2E0Cu;
    {
        const bool branch_taken_0x1d2e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2e0c) {
            ctx->pc = 0x1D2E78u;
            goto label_1d2e78;
        }
    }
    ctx->pc = 0x1D2E14u;
label_1d2e14:
    // 0x1d2e14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2e18: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d2e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2e1c: 0x10460011  beq         $v0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2E1Cu;
    {
        const bool branch_taken_0x1d2e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E1Cu;
        // 0x1d2e20: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e1c) {
            ctx->pc = 0x1D2E64u;
            goto label_1d2e64;
        }
    }
    ctx->pc = 0x1D2E24u;
    // 0x1d2e24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2e28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2e2c: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x1d2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d2e30: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D2E30u;
    {
        const bool branch_taken_0x1d2e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2e30) {
            ctx->pc = 0x1D2E64u;
            goto label_1d2e64;
        }
    }
    ctx->pc = 0x1D2E38u;
    // 0x1d2e38: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2e3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d2e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2e48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2e4c: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1d2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x1d2e50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2e54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2e58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2e5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2E5Cu;
    {
        const bool branch_taken_0x1d2e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E5Cu;
        // 0x1d2e60: 0xac660024  sw          $a2, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e5c) {
            ctx->pc = 0x1D2E78u;
            goto label_1d2e78;
        }
    }
    ctx->pc = 0x1D2E64u;
label_1d2e64:
    // 0x1d2e64: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2e6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2e70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2e74: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_1d2e78:
    // 0x1d2e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2E80u;
}
