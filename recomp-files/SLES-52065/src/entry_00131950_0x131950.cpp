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

// Function: entry_00131950
// Address: 0x131950 - 0x131960
void entry_00131950_0x131950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131950_0x131950");
#endif

    ctx->pc = 0x131950u;

    // 0x131950: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x131950u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x131954: 0x3e00008  jr          $ra
    ctx->pc = 0x131954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131954u;
        // 0x131958: 0xa0830055  sb          $v1, 0x55($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13195Cu;
    // 0x13195c: 0x0  nop
    ctx->pc = 0x13195cu;
    // NOP
    ctx->pc = 0x131960u;
}
