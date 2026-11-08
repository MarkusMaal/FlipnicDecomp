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

// Function: entry_0010ab70
// Address: 0x10ab70 - 0x10aba8
void entry_0010ab70_0x10ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ab70_0x10ab70");
#endif

    switch (ctx->pc) {
        case 0x10ab88u: goto label_10ab88;
        default: break;
    }

    ctx->pc = 0x10ab70u;

label_10ab70:
    // 0x10ab70: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10ab74: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x10ab78: 0x8e6601d8  lw          $a2, 0x1D8($s3)
    ctx->pc = 0x10ab78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    // 0x10ab7c: 0x24a5e300  addiu       $a1, $a1, -0x1D00
    ctx->pc = 0x10ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959872));
    // 0x10ab80: 0xc0570b4  jal         func_15C2D0
    ctx->pc = 0x10AB80u;
    SET_GPR_U32(ctx, 31, 0x10AB88u);
    ctx->pc = 0x10AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB80u;
    // 0x10ab84: 0x240804b1  addiu       $t0, $zero, 0x4B1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C2D0u, 0x10AB80u, 0x10AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB88u;
label_10ab88:
    // 0x10ab88: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x10ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x10ab8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10ab8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10ab90: 0xa462230c  sh          $v0, 0x230C($v1)
    ctx->pc = 0x10ab90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8972), (uint16_t)GPR_U32(ctx, 2));
    // 0x10ab94: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x10ab94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x10ab98: 0x8463230c  lh          $v1, 0x230C($v1)
    ctx->pc = 0x10ab98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8972)));
    // 0x10ab9c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x10ab9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x10aba0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x10ABA0u;
    {
        const bool branch_taken_0x10aba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABA0u;
        // 0x10aba4: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aba0) {
            ctx->pc = 0x10AB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ab70;
        }
    }
    ctx->pc = 0x10ABA8u;
}
