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

// Function: entry_001e4344
// Address: 0x1e4344 - 0x1e4370
void entry_001e4344_0x1e4344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4344_0x1e4344");
#endif

    ctx->pc = 0x1e4344u;

    // 0x1e4344: 0x0  nop
    ctx->pc = 0x1e4344u;
    // NOP
    // 0x1e4348: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e4348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x1e434c: 0xa0430041  sb          $v1, 0x41($v0)
    ctx->pc = 0x1e434cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4350: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e4350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x1e4354: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e4354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e4358: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e4358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e435c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e435cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4364: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e4364u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4368: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4368u;
        // 0x1e436c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4370u;
}
