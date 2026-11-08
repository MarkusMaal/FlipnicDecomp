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

// Function: FUN_001fbe80
// Address: 0x1fbe80 - 0x1fbea8
void FUN_001fbe80_0x1fbe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fbe80_0x1fbe80");
#endif

    switch (ctx->pc) {
        case 0x1fbe94u: goto label_1fbe94;
        default: break;
    }

    ctx->pc = 0x1fbe80u;

    // 0x1fbe80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fbe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fbe84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbe84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fbe8c: 0xc080cf4  jal         func_2033D0
    ctx->pc = 0x1FBE8Cu;
    SET_GPR_U32(ctx, 31, 0x1FBE94u);
    ctx->pc = 0x1FBE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE8Cu;
    // 0x1fbe90: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2033D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2033D0u, 0x1FBE8Cu, 0x1FBE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE94u;
label_1fbe94:
    // 0x1fbe94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbe98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fbe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fbe9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fbe9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fbea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEA0u;
        // 0x1fbea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBEA8u;
}
