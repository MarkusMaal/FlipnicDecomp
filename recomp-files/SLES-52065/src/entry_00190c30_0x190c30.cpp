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

// Function: entry_00190c30
// Address: 0x190c30 - 0x190c84
void entry_00190c30_0x190c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190c30_0x190c30");
#endif

    ctx->pc = 0x190c30u;

label_190c30:
    // 0x190c30: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x190c30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x190c34: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x190c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x190c38: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x190c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x190c3c: 0x0  nop
    ctx->pc = 0x190c3cu;
    // NOP
    // 0x190c40: 0x0  nop
    ctx->pc = 0x190c40u;
    // NOP
    // 0x190c44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x190C44u;
    {
        const bool branch_taken_0x190c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190c44) {
            ctx->pc = 0x190C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190c30;
        }
    }
    ctx->pc = 0x190C4Cu;
    // 0x190c4c: 0xae000660  sw          $zero, 0x660($s0)
    ctx->pc = 0x190c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 0));
    // 0x190c50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x190c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x190c54: 0xae020320  sw          $v0, 0x320($s0)
    ctx->pc = 0x190c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
    // 0x190c58: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x190c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
    // 0x190c5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x190c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c60: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x190c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x190c64: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x190c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x190c68: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x190c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x190c6c: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x190c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
    // 0x190c70: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x190c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x190c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x190C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C7Cu;
        // 0x190c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190C84u;
}
