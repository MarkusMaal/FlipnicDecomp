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

// Function: write_value_to_ram
// Address: 0x1cb950 - 0x1cb95c
void write_value_to_ram_0x1cb950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("write_value_to_ram_0x1cb950");
#endif

    ctx->pc = 0x1cb950u;

    // 0x1cb950: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cb950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cb954: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB954u;
        // 0x1cb958: 0xac24f940  sw          $a0, -0x6C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965568), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB95Cu;
}
