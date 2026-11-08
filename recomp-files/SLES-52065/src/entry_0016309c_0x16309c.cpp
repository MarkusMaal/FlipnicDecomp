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

// Function: entry_0016309c
// Address: 0x16309c - 0x1630dc
void entry_0016309c_0x16309c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016309c_0x16309c");
#endif

    ctx->pc = 0x16309cu;

    // 0x16309c: 0x0  nop
    ctx->pc = 0x16309cu;
    // NOP
    // 0x1630a0: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x1630a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1630a4: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1630A4u;
    {
        const bool branch_taken_0x1630a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1630a4) {
            ctx->pc = 0x162FB0u;
            return;
        }
    }
    ctx->pc = 0x1630ACu;
    // 0x1630ac: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x1630acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x1630b0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1630b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1630b4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1630b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1630b8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1630b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1630bc: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x1630bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x1630c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1630c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1630c4: 0xac65fffc  sw          $a1, -0x4($v1)
    ctx->pc = 0x1630c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 5));
    // 0x1630c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1630c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1630cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1630ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1630d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1630d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1630d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1630D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1630D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630D4u;
        // 0x1630d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1630D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1630DCu;
}
