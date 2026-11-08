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

// Function: entry_001840f8
// Address: 0x1840f8 - 0x184128
void entry_001840f8_0x1840f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001840f8_0x1840f8");
#endif

    switch (ctx->pc) {
        case 0x18410cu: goto label_18410c;
        default: break;
    }

    ctx->pc = 0x1840f8u;

    // 0x1840f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1840f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1840fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1840fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x184100: 0x24a58fa0  addiu       $a1, $a1, -0x7060
    ctx->pc = 0x184100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938528));
    // 0x184104: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x184104u;
    SET_GPR_U32(ctx, 31, 0x18410Cu);
    ctx->pc = 0x184108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184104u;
    // 0x184108: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x184104u, 0x18410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18410Cu;
label_18410c:
    // 0x18410c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184110: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x184110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x184114: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x184114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x184118: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x184118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18411c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18411cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184120: 0x3e00008  jr          $ra
    ctx->pc = 0x184120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184120u;
        // 0x184124: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184128u;
}
