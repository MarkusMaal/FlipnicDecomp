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

// Function: entry_001601dc
// Address: 0x1601dc - 0x1601f4
void entry_001601dc_0x1601dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001601dc_0x1601dc");
#endif

    ctx->pc = 0x1601dcu;

    // 0x1601dc: 0x0  nop
    ctx->pc = 0x1601dcu;
    // NOP
    // 0x1601e0: 0x2922000a  slti        $v0, $t1, 0xA
    ctx->pc = 0x1601e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1601e4: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1601E4u;
    {
        const bool branch_taken_0x1601e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1601E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601E4u;
        // 0x1601e8: 0x91100  sll         $v0, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601e4) {
            ctx->pc = 0x16015Cu;
            return;
        }
    }
    ctx->pc = 0x1601ECu;
    // 0x1601ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1601ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1601F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601ECu;
        // 0x1601f0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1601ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1601F4u;
}
