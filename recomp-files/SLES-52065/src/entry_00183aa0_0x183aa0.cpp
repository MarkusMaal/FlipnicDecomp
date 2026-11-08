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

// Function: entry_00183aa0
// Address: 0x183aa0 - 0x183ad0
void entry_00183aa0_0x183aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183aa0_0x183aa0");
#endif

    switch (ctx->pc) {
        case 0x183ab4u: goto label_183ab4;
        default: break;
    }

    ctx->pc = 0x183aa0u;

    // 0x183aa0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183aa4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x183aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x183aa8: 0x24a58ed0  addiu       $a1, $a1, -0x7130
    ctx->pc = 0x183aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938320));
    // 0x183aac: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x183AACu;
    SET_GPR_U32(ctx, 31, 0x183AB4u);
    ctx->pc = 0x183AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AACu;
    // 0x183ab0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x183AACu, 0x183AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AB4u;
label_183ab4:
    // 0x183ab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183ab8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x183ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x183abc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x183abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x183ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x183AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AC8u;
        // 0x183acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183AD0u;
}
