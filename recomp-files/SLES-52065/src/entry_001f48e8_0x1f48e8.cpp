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

// Function: entry_001f48e8
// Address: 0x1f48e8 - 0x1f4910
void entry_001f48e8_0x1f48e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f48e8_0x1f48e8");
#endif

    ctx->pc = 0x1f48e8u;

    // 0x1f48e8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1f48e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f48ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f48f0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f48f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f48f4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f48f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f48f8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f48f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f48fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f48fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4900: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f4900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4904: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f4904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4908: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4908u;
        // 0x1f490c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4910u;
}
