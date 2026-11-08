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

// Function: entry_0010df24
// Address: 0x10df24 - 0x10df58
void entry_0010df24_0x10df24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010df24_0x10df24");
#endif

    ctx->pc = 0x10df24u;

    // 0x10df24: 0x0  nop
    ctx->pc = 0x10df24u;
    // NOP
    // 0x10df28: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x10df28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x10df2c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10df2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10df30: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x10DF30u;
    {
        const bool branch_taken_0x10df30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10df30) {
            ctx->pc = 0x10DE68u;
            return;
        }
    }
    ctx->pc = 0x10DF38u;
    // 0x10df38: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x10df38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
    // 0x10df3c: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x10df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x10df40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10df40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10df44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10df44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10df48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10df48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10df4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10df4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10df50: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF50u;
        // 0x10df54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DF58u;
}
