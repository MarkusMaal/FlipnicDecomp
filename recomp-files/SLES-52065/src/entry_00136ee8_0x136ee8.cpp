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

// Function: entry_00136ee8
// Address: 0x136ee8 - 0x136f14
void entry_00136ee8_0x136ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136ee8_0x136ee8");
#endif

    switch (ctx->pc) {
        case 0x136efcu: goto label_136efc;
        default: break;
    }

    ctx->pc = 0x136ee8u;

    // 0x136ee8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x136ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x136eec: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x136EECu;
    {
        const bool branch_taken_0x136eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x136EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EECu;
        // 0x136ef0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136eec) {
            ctx->pc = 0x136ECCu;
            return;
        }
    }
    ctx->pc = 0x136EF4u;
    // 0x136ef4: 0xc04eb4c  jal         func_13AD30
    ctx->pc = 0x136EF4u;
    SET_GPR_U32(ctx, 31, 0x136EFCu);
    ctx->pc = 0x136EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EF4u;
    // 0x136ef8: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD30u, 0x136EF4u, 0x136EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EFCu;
label_136efc:
    // 0x136efc: 0xaf808590  sw          $zero, -0x7A70($gp)
    ctx->pc = 0x136efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
    // 0x136f00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x136F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F0Cu;
        // 0x136f10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136F14u;
}
