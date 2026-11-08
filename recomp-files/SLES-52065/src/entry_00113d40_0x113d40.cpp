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

// Function: entry_00113d40
// Address: 0x113d40 - 0x113d70
void entry_00113d40_0x113d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113d40_0x113d40");
#endif

    ctx->pc = 0x113d40u;

    // 0x113d40: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x113d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x113d44: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x113d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x113d48: 0x24428348  addiu       $v0, $v0, -0x7CB8
    ctx->pc = 0x113d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935368));
    // 0x113d4c: 0x24638358  addiu       $v1, $v1, -0x7CA8
    ctx->pc = 0x113d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935384));
    // 0x113d50: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x113d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x113d54: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x113d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x113d58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x113d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x113D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D5Cu;
        // 0x113d60: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113D64u;
    // 0x113d64: 0x0  nop
    ctx->pc = 0x113d64u;
    // NOP
    // 0x113d68: 0x0  nop
    ctx->pc = 0x113d68u;
    // NOP
    // 0x113d6c: 0x0  nop
    ctx->pc = 0x113d6cu;
    // NOP
    ctx->pc = 0x113d70u;
}
