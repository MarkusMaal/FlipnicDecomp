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

// Function: entry_0018240c
// Address: 0x18240c - 0x182420
void entry_0018240c_0x18240c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018240c_0x18240c");
#endif

    ctx->pc = 0x18240cu;

    // 0x18240c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18240cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182410: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x182414: 0xa0238bb3  sb          $v1, -0x744D($at)
    ctx->pc = 0x182414u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368BB3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368BB3u, _value); } while (0);
    // 0x182418: 0x3e00008  jr          $ra
    ctx->pc = 0x182418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182418u;
        // 0x18241c: 0x24428b70  addiu       $v0, $v0, -0x7490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182420u;
}
