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

// Function: Write3Values
// Address: 0x1c5530 - 0x1c554c
void Write3Values_0x1c5530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Write3Values_0x1c5530");
#endif

    ctx->pc = 0x1c5530u;

    // 0x1c5530: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c5530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c5534: 0xac25f7e8  sw          $a1, -0x818($at)
    ctx->pc = 0x1c5534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x36F7E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F7E8u, _value); } while (0);
    // 0x1c5538: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c5538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c553c: 0xac24f7f0  sw          $a0, -0x810($at)
    ctx->pc = 0x1c553cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F7F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F7F0u, _value); } while (0);
    // 0x1c5540: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c5540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c5544: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5544u;
        // 0x1c5548: 0xac26f7f8  sw          $a2, -0x808($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965240), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C554Cu;
}
