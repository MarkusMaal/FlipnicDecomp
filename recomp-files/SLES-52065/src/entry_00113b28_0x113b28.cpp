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

// Function: entry_00113b28
// Address: 0x113b28 - 0x113b6c
void entry_00113b28_0x113b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113b28_0x113b28");
#endif

    switch (ctx->pc) {
        case 0x113b40u: goto label_113b40;
        default: break;
    }

    ctx->pc = 0x113b28u;

label_113b28:
    // 0x113b28: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x113b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113b2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113b30: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58
    ctx->pc = 0x113b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    // 0x113b34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x113b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b38: 0xc05704c  jal         func_15C130
    ctx->pc = 0x113B38u;
    SET_GPR_U32(ctx, 31, 0x113B40u);
    ctx->pc = 0x113B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B38u;
    // 0x113b3c: 0x24080089  addiu       $t0, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x113B38u, 0x113B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B40u;
label_113b40:
    // 0x113b40: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x113b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113b44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x113b48: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x113b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x113b4c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x113b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x113b50: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x113b50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x113b54: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x113b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113b58: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x113b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x113b5c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x113b5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113b60: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x113b60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x113b64: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x113B64u;
    {
        const bool branch_taken_0x113b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B64u;
        // 0x113b68: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b64) {
            ctx->pc = 0x113B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113b28;
        }
    }
    ctx->pc = 0x113B6Cu;
}
