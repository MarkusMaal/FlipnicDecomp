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

// Function: FUN_0015c670
// Address: 0x15c670 - 0x15c698
void FUN_0015c670_0x15c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c670_0x15c670");
#endif

    switch (ctx->pc) {
        case 0x15c684u: goto label_15c684;
        default: break;
    }

    ctx->pc = 0x15c670u;

    // 0x15c670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15c674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15c678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c67c: 0xc040d18  jal         func_103460
    ctx->pc = 0x15C67Cu;
    SET_GPR_U32(ctx, 31, 0x15C684u);
    ctx->pc = 0x15C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C67Cu;
    // 0x15c680: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103460u, 0x15C67Cu, 0x15C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C684u;
label_15c684:
    // 0x15c684: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x15c684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x15c688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15c688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c68c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c690: 0x3e00008  jr          $ra
    ctx->pc = 0x15C690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C690u;
        // 0x15c694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C698u;
}
