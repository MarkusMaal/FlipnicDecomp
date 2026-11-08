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

// Function: FUN_00139d30
// Address: 0x139d30 - 0x139dc8
void FUN_00139d30_0x139d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00139d30_0x139d30");
#endif

    switch (ctx->pc) {
        case 0x139d5cu: goto label_139d5c;
        case 0x139d6cu: goto label_139d6c;
        case 0x139db4u: goto label_139db4;
        default: break;
    }

    ctx->pc = 0x139d30u;

    // 0x139d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139d40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x139d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x139d44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x139d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d48: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x139d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x139d4c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x139D4Cu;
    {
        const bool branch_taken_0x139d4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D4Cu;
        // 0x139d50: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d4c) {
            ctx->pc = 0x139DA4u;
            goto label_139da4;
        }
    }
    ctx->pc = 0x139D54u;
    // 0x139d54: 0xc04d808  jal         func_136020
    ctx->pc = 0x139D54u;
    SET_GPR_U32(ctx, 31, 0x139D5Cu);
    ctx->pc = 0x139D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D54u;
    // 0x139d58: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136020u, 0x139D54u, 0x139D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D5Cu;
label_139d5c:
    // 0x139d5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x139d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x139D64u;
    {
        const bool branch_taken_0x139d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D64u;
        // 0x139d68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d64) {
            ctx->pc = 0x139D8Cu;
            goto label_139d8c;
        }
    }
    ctx->pc = 0x139D6Cu;
label_139d6c:
    // 0x139d6c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x139d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x139d70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x139d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139d74: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x139d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x139d78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x139d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139d7c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x139d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x139d80: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x139d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x139d84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x139d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x139d88: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x139d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_139d8c:
    // 0x139d8c: 0x0  nop
    ctx->pc = 0x139d8cu;
    // NOP
    // 0x139d90: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x139d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x139d94: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x139d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x139d98: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x139d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x139d9c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x139D9Cu;
    {
        const bool branch_taken_0x139d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139d9c) {
            ctx->pc = 0x139D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139d6c;
        }
    }
    ctx->pc = 0x139DA4u;
label_139da4:
    // 0x139da4: 0x0  nop
    ctx->pc = 0x139da4u;
    // NOP
    // 0x139da8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x139da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x139dac: 0xc04e774  jal         func_139DD0
    ctx->pc = 0x139DACu;
    SET_GPR_U32(ctx, 31, 0x139DB4u);
    ctx->pc = 0x139DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DACu;
    // 0x139db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139DD0u, 0x139DACu, 0x139DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DB4u;
label_139db4:
    // 0x139db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x139DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DC0u;
        // 0x139dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139DC8u;
}
