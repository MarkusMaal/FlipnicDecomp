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

// Function: FUN_0015d880
// Address: 0x15d880 - 0x15d900
void FUN_0015d880_0x15d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d880_0x15d880");
#endif

    switch (ctx->pc) {
        case 0x15d8d8u: goto label_15d8d8;
        default: break;
    }

    ctx->pc = 0x15d880u;

    // 0x15d880: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x15d880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x15d884: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15d884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15d888: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15d88c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15d890: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x15d890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d894: 0x90e30042  lbu         $v1, 0x42($a3)
    ctx->pc = 0x15d894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 66)));
    // 0x15d898: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x15D898u;
    {
        const bool branch_taken_0x15d898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d898) {
            ctx->pc = 0x15D8F8u;
            goto label_15d8f8;
        }
    }
    ctx->pc = 0x15D8A0u;
    // 0x15d8a0: 0x84e40004  lh          $a0, 0x4($a3)
    ctx->pc = 0x15d8a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15d8a4: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x15d8a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x15d8a8: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15D8A8u;
    {
        const bool branch_taken_0x15d8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d8a8) {
            ctx->pc = 0x15D8F8u;
            goto label_15d8f8;
        }
    }
    ctx->pc = 0x15D8B0u;
    // 0x15d8b0: 0x84e6000a  lh          $a2, 0xA($a3)
    ctx->pc = 0x15d8b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x15d8b4: 0x8ce50030  lw          $a1, 0x30($a3)
    ctx->pc = 0x15d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x15d8b8: 0x84e4000c  lh          $a0, 0xC($a3)
    ctx->pc = 0x15d8b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x15d8bc: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x15d8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x15d8c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d8c4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x15d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15d8c8: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x15d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15d8cc: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x15d8ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15d8d0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D8D0u;
    {
        const bool branch_taken_0x15d8d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d8d0) {
            ctx->pc = 0x15D8F4u;
            goto label_15d8f4;
        }
    }
    ctx->pc = 0x15D8D8u;
label_15d8d8:
    // 0x15d8d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15d8dc: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x15d8dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15d8e0: 0x0  nop
    ctx->pc = 0x15d8e0u;
    // NOP
    // 0x15d8e4: 0x0  nop
    ctx->pc = 0x15d8e4u;
    // NOP
    // 0x15d8e8: 0x0  nop
    ctx->pc = 0x15d8e8u;
    // NOP
    // 0x15d8ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D8ECu;
    {
        const bool branch_taken_0x15d8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d8ec) {
            ctx->pc = 0x15D8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d8d8;
        }
    }
    ctx->pc = 0x15D8F4u;
label_15d8f4:
    // 0x15d8f4: 0x0  nop
    ctx->pc = 0x15d8f4u;
    // NOP
label_15d8f8:
    // 0x15d8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15D8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D900u;
}
