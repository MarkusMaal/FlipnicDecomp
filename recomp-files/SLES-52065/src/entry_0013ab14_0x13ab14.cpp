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

// Function: entry_0013ab14
// Address: 0x13ab14 - 0x13ab2c
void entry_0013ab14_0x13ab14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ab14_0x13ab14");
#endif

    ctx->pc = 0x13ab14u;

    // 0x13ab14: 0x0  nop
    ctx->pc = 0x13ab14u;
    // NOP
    // 0x13ab18: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x13ab18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13ab1c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13AB1Cu;
    {
        const bool branch_taken_0x13ab1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB1Cu;
        // 0x13ab20: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab1c) {
            ctx->pc = 0x13AAFCu;
            return;
        }
    }
    ctx->pc = 0x13AB24u;
    // 0x13ab24: 0x3e00008  jr          $ra
    ctx->pc = 0x13AB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB24u;
        // 0x13ab28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AB2Cu;
}
