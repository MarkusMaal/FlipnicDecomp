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

// Function: entry_001139fc
// Address: 0x1139fc - 0x113a40
void entry_001139fc_0x1139fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001139fc_0x1139fc");
#endif

    switch (ctx->pc) {
        case 0x113a14u: goto label_113a14;
        default: break;
    }

    ctx->pc = 0x1139fcu;

label_1139fc:
    // 0x1139fc: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1139fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113a00: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113a04: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58
    ctx->pc = 0x113a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    // 0x113a08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x113a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a0c: 0xc05704c  jal         func_15C130
    ctx->pc = 0x113A0Cu;
    SET_GPR_U32(ctx, 31, 0x113A14u);
    ctx->pc = 0x113A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A0Cu;
    // 0x113a10: 0x24080089  addiu       $t0, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C130u, 0x113A0Cu, 0x113A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A14u;
label_113a14:
    // 0x113a14: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x113a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113a18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x113a1c: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x113a1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x113a20: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x113a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x113a24: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x113a24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x113a28: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x113a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113a2c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x113a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x113a30: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x113a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113a34: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x113a34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x113a38: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x113A38u;
    {
        const bool branch_taken_0x113a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A38u;
        // 0x113a3c: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a38) {
            ctx->pc = 0x1139FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1139fc;
        }
    }
    ctx->pc = 0x113A40u;
}
