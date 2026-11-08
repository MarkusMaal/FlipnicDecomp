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

// Function: entry_001878f8
// Address: 0x1878f8 - 0x187918
void entry_001878f8_0x1878f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001878f8_0x1878f8");
#endif

    switch (ctx->pc) {
        case 0x187904u: goto label_187904;
        default: break;
    }

    ctx->pc = 0x1878f8u;

    // 0x1878f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1878f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878fc: 0xc061e50  jal         func_187940
    ctx->pc = 0x1878FCu;
    SET_GPR_U32(ctx, 31, 0x187904u);
    ctx->pc = 0x187900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878FCu;
    // 0x187900: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187940u, 0x1878FCu, 0x187904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187904u;
label_187904:
    // 0x187904: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x187904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x187908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18790c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18790cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187910: 0x3e00008  jr          $ra
    ctx->pc = 0x187910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187910u;
        // 0x187914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187918u;
}
