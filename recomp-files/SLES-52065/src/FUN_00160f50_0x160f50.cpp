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

// Function: FUN_00160f50
// Address: 0x160f50 - 0x160fc0
void FUN_00160f50_0x160f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160f50_0x160f50");
#endif

    switch (ctx->pc) {
        case 0x160f80u: goto label_160f80;
        default: break;
    }

    ctx->pc = 0x160f50u;

    // 0x160f50: 0x8c8a001c  lw          $t2, 0x1C($a0)
    ctx->pc = 0x160f50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x160f54: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x160f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x160f58: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x160f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x160f5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x160f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x160f60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x160f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x160f64: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x160f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x160f68: 0x84680002  lh          $t0, 0x2($v1)
    ctx->pc = 0x160f68u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x160f6c: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x160f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x160f70: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x160f70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160f74: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x160F74u;
    {
        const bool branch_taken_0x160f74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F74u;
        // 0x160f78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f74) {
            ctx->pc = 0x160FB8u;
            goto label_160fb8;
        }
    }
    ctx->pc = 0x160F7Cu;
    // 0x160f7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160f7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160f80:
    // 0x160f80: 0x1495821  addu        $t3, $t2, $t1
    ctx->pc = 0x160f80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x160f84: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x160f84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x160f88: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x160F88u;
    {
        const bool branch_taken_0x160f88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x160f88) {
            ctx->pc = 0x160FA4u;
            goto label_160fa4;
        }
    }
    ctx->pc = 0x160F90u;
    // 0x160f90: 0x85630002  lh          $v1, 0x2($t3)
    ctx->pc = 0x160f90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x160f94: 0x15030003  bne         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160F94u;
    {
        const bool branch_taken_0x160f94 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x160f94) {
            ctx->pc = 0x160FA4u;
            goto label_160fa4;
        }
    }
    ctx->pc = 0x160F9Cu;
    // 0x160f9c: 0x85620006  lh          $v0, 0x6($t3)
    ctx->pc = 0x160f9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x160fa0: 0xa5660006  sh          $a2, 0x6($t3)
    ctx->pc = 0x160fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 6));
label_160fa4:
    // 0x160fa4: 0x0  nop
    ctx->pc = 0x160fa4u;
    // NOP
    // 0x160fa8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x160fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x160fac: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x160facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x160fb0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x160FB0u;
    {
        const bool branch_taken_0x160fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FB0u;
        // 0x160fb4: 0x25290050  addiu       $t1, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fb0) {
            ctx->pc = 0x160F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160f80;
        }
    }
    ctx->pc = 0x160FB8u;
label_160fb8:
    // 0x160fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x160FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160FC0u;
}
