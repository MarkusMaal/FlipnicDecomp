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

// Function: entry_0012f7dc
// Address: 0x12f7dc - 0x12f818
void entry_0012f7dc_0x12f7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f7dc_0x12f7dc");
#endif

    ctx->pc = 0x12f7dcu;

    // 0x12f7dc: 0x0  nop
    ctx->pc = 0x12f7dcu;
    // NOP
    // 0x12f7e0: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x12f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x12f7e4: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x12f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x12f7e8: 0x24633670  addiu       $v1, $v1, 0x3670
    ctx->pc = 0x12f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13936));
    // 0x12f7ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x12f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f7f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12f7f4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x12f7f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12f7f8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x12F7F8u;
    {
        const bool branch_taken_0x12f7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f7f8) {
            ctx->pc = 0x12F7C4u;
            return;
        }
    }
    ctx->pc = 0x12F800u;
    // 0x12f800: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12f804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f810: 0x3e00008  jr          $ra
    ctx->pc = 0x12F810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F810u;
        // 0x12f814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F818u;
}
