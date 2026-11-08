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

// Function: entry_0016e1a0
// Address: 0x16e1a0 - 0x16e1c0
void entry_0016e1a0_0x16e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e1a0_0x16e1a0");
#endif

    ctx->pc = 0x16e1a0u;

    // 0x16e1a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e1a4: 0xa4820080  sh          $v0, 0x80($a0)
    ctx->pc = 0x16e1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e1a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16e1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x16E1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1ACu;
        // 0x16e1b0: 0xa4800082  sh          $zero, 0x82($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E1B4u;
    // 0x16e1b4: 0x0  nop
    ctx->pc = 0x16e1b4u;
    // NOP
    // 0x16e1b8: 0x0  nop
    ctx->pc = 0x16e1b8u;
    // NOP
    // 0x16e1bc: 0x0  nop
    ctx->pc = 0x16e1bcu;
    // NOP
    ctx->pc = 0x16e1c0u;
}
