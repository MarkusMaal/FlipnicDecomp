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

// Function: FUN_001dc9b0
// Address: 0x1dc9b0 - 0x1dca08
void FUN_001dc9b0_0x1dc9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dc9b0_0x1dc9b0");
#endif

    switch (ctx->pc) {
        case 0x1dc9c8u: goto label_1dc9c8;
        default: break;
    }

    ctx->pc = 0x1dc9b0u;

    // 0x1dc9b0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dc9b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9b8: 0x24437330  addiu       $v1, $v0, 0x7330
    ctx->pc = 0x1dc9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1dc9bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC9BCu;
    {
        const bool branch_taken_0x1dc9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9BCu;
        // 0x1dc9c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9bc) {
            ctx->pc = 0x1DC9D4u;
            goto label_1dc9d4;
        }
    }
    ctx->pc = 0x1DC9C4u;
    // 0x1dc9c4: 0x0  nop
    ctx->pc = 0x1dc9c4u;
    // NOP
label_1dc9c8:
    // 0x1dc9c8: 0x28a20030  slti        $v0, $a1, 0x30
    ctx->pc = 0x1dc9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dc9cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DC9CCu;
    {
        const bool branch_taken_0x1dc9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9CCu;
        // 0x1dc9d0: 0x246300e8  addiu       $v1, $v1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9cc) {
            ctx->pc = 0x1DCA00u;
            goto label_1dca00;
        }
    }
    ctx->pc = 0x1DC9D4u;
label_1dc9d4:
    // 0x1dc9d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dc9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dc9dc: 0x0  nop
    ctx->pc = 0x1dc9dcu;
    // NOP
    // 0x1dc9e0: 0x0  nop
    ctx->pc = 0x1dc9e0u;
    // NOP
    // 0x1dc9e4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DC9E4u;
    {
        const bool branch_taken_0x1dc9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc9e4) {
            ctx->pc = 0x1DC9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC9E4u;
            // 0x1dc9e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc9c8;
        }
    }
    ctx->pc = 0x1DC9ECu;
    // 0x1dc9ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1dc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dc9f0: 0x0  nop
    ctx->pc = 0x1dc9f0u;
    // NOP
    // 0x1dc9f4: 0x5444fff4  bnel        $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DC9F4u;
    {
        const bool branch_taken_0x1dc9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1dc9f4) {
            ctx->pc = 0x1DC9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC9F4u;
            // 0x1dc9f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc9c8;
        }
    }
    ctx->pc = 0x1DC9FCu;
    // 0x1dc9fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dca00:
    // 0x1dca00: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA00u;
        // 0x1dca04: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCA08u;
}
