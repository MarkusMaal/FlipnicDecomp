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

// Function: entry_00190bb8
// Address: 0x190bb8 - 0x190bdc
void entry_00190bb8_0x190bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190bb8_0x190bb8");
#endif

    switch (ctx->pc) {
        case 0x190bd0u: goto label_190bd0;
        default: break;
    }

    ctx->pc = 0x190bb8u;

    // 0x190bb8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x190bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190bbc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x190bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190bc0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x190bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x190bc4: 0x24840210  addiu       $a0, $a0, 0x210
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x190bc8: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x190BC8u;
    SET_GPR_U32(ctx, 31, 0x190BD0u);
    ctx->pc = 0x190BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BC8u;
    // 0x190bcc: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x190BC8u, 0x190BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BD0u;
label_190bd0:
    // 0x190bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x190BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BD4u;
        // 0x190bd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190BDCu;
}
