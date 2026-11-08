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

// Function: FUN_00130b00
// Address: 0x130b00 - 0x130b20
void FUN_00130b00_0x130b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130b00_0x130b00");
#endif

    ctx->pc = 0x130b00u;

    // 0x130b00: 0x8f8384b4  lw          $v1, -0x7B4C($gp)
    ctx->pc = 0x130b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935732)));
    // 0x130b04: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x130b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x130b08: 0x24424270  addiu       $v0, $v0, 0x4270
    ctx->pc = 0x130b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17008));
    // 0x130b0c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x130b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x130b10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130b14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x130b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x130b18: 0x3e00008  jr          $ra
    ctx->pc = 0x130B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B18u;
        // 0x130b1c: 0xaf8384b4  sw          $v1, -0x7B4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130B20u;
}
