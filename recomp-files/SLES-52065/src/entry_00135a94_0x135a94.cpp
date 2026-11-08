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

// Function: entry_00135a94
// Address: 0x135a94 - 0x135ac0
void entry_00135a94_0x135a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135a94_0x135a94");
#endif

    ctx->pc = 0x135a94u;

    // 0x135a94: 0x0  nop
    ctx->pc = 0x135a94u;
    // NOP
    // 0x135a98: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x135a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135a9c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x135a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x135aa0: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x135AA0u;
    {
        const bool branch_taken_0x135aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x135aa0) {
            ctx->pc = 0x135A40u;
            return;
        }
    }
    ctx->pc = 0x135AA8u;
    // 0x135aa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135aac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135ab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x135AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AB8u;
        // 0x135abc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135AC0u;
}
