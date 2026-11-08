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

// Function: entry_00205d28
// Address: 0x205d28 - 0x205d58
void entry_00205d28_0x205d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205d28_0x205d28");
#endif

    ctx->pc = 0x205d28u;

    // 0x205d28: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x205d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x205d2c: 0xdfbe0300  ld          $fp, 0x300($sp)
    ctx->pc = 0x205d2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x205d30: 0xdfb702f0  ld          $s7, 0x2F0($sp)
    ctx->pc = 0x205d30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x205d34: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x205d34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x205d38: 0xdfb502d0  ld          $s5, 0x2D0($sp)
    ctx->pc = 0x205d38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x205d3c: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x205d3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x205d40: 0xdfb302b0  ld          $s3, 0x2B0($sp)
    ctx->pc = 0x205d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x205d44: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x205d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x205d48: 0xdfb10290  ld          $s1, 0x290($sp)
    ctx->pc = 0x205d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x205d4c: 0xdfb00280  ld          $s0, 0x280($sp)
    ctx->pc = 0x205d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x205d50: 0x3e00008  jr          $ra
    ctx->pc = 0x205D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D50u;
        // 0x205d54: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205D58u;
}
