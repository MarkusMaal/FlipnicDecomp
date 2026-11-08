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

// Function: entry_00168d00
// Address: 0x168d00 - 0x168d18
void entry_00168d00_0x168d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168d00_0x168d00");
#endif

    ctx->pc = 0x168d00u;

    // 0x168d00: 0xae03023c  sw          $v1, 0x23C($s0)
    ctx->pc = 0x168d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
    // 0x168d04: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x168d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x168d08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168d10: 0x3e00008  jr          $ra
    ctx->pc = 0x168D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D10u;
        // 0x168d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168D18u;
}
