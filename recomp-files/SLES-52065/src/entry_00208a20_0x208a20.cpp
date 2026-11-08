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

// Function: entry_00208a20
// Address: 0x208a20 - 0x208a40
void entry_00208a20_0x208a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208a20_0x208a20");
#endif

    ctx->pc = 0x208a20u;

    // 0x208a20: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x208a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x208a24: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x208A24u;
    {
        const bool branch_taken_0x208a24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x208A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A24u;
        // 0x208a28: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a24) {
            ctx->pc = 0x208A60u;
            return;
        }
    }
    ctx->pc = 0x208A2Cu;
    // 0x208a2c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x208A2Cu;
    {
        const bool branch_taken_0x208a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A2Cu;
        // 0x208a30: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a2c) {
            ctx->pc = 0x208A40u;
            return;
        }
    }
    ctx->pc = 0x208A34u;
    // 0x208a34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x208a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x208a38: 0x3e00008  jr          $ra
    ctx->pc = 0x208A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A38u;
        // 0x208a3c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208A40u;
}
