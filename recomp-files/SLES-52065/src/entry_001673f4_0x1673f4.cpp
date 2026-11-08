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

// Function: entry_001673f4
// Address: 0x1673f4 - 0x16740c
void entry_001673f4_0x1673f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001673f4_0x1673f4");
#endif

    ctx->pc = 0x1673f4u;

    // 0x1673f4: 0xa2030078  sb          $v1, 0x78($s0)
    ctx->pc = 0x1673f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 3));
    // 0x1673f8: 0xa2030079  sb          $v1, 0x79($s0)
    ctx->pc = 0x1673f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x1673fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1673fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167404: 0x3e00008  jr          $ra
    ctx->pc = 0x167404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167404u;
        // 0x167408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16740Cu;
}
