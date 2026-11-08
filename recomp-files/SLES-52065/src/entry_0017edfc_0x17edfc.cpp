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

// Function: entry_0017edfc
// Address: 0x17edfc - 0x17ee24
void entry_0017edfc_0x17edfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017edfc_0x17edfc");
#endif

    ctx->pc = 0x17edfcu;

    // 0x17edfc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17edfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17ee00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17ee00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ee04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17ee04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ee08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17ee08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ee0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17ee0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ee10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ee10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ee14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ee14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ee18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ee18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ee1c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE1Cu;
        // 0x17ee20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EE24u;
}
