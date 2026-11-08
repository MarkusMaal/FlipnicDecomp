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

// Function: entry_001dc4c8
// Address: 0x1dc4c8 - 0x1dc4f8
void entry_001dc4c8_0x1dc4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc4c8_0x1dc4c8");
#endif

    ctx->pc = 0x1dc4c8u;

    // 0x1dc4c8: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x1dc4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1dc4cc: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x1dc4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1dc4d0: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x1dc4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1dc4d4: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x1dc4d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1dc4d8: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x1dc4d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1dc4dc: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x1dc4dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1dc4e0: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x1dc4e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1dc4e4: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x1dc4e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1dc4e8: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x1dc4e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dc4ec: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x1dc4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dc4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4F0u;
        // 0x1dc4f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4F8u;
}
