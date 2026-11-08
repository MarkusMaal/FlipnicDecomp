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

// Function: entry_001dfe48
// Address: 0x1dfe48 - 0x1dfe7c
void entry_001dfe48_0x1dfe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfe48_0x1dfe48");
#endif

    switch (ctx->pc) {
        case 0x1dfe60u: goto label_1dfe60;
        default: break;
    }

    ctx->pc = 0x1dfe48u;

label_1dfe48:
    // 0x1dfe48: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1dfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1dfe4c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1dfe4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1dfe50: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1dfe50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfe54: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1dfe54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dfe58: 0xc07548a  jal         func_1D5228
    ctx->pc = 0x1DFE58u;
    SET_GPR_U32(ctx, 31, 0x1DFE60u);
    ctx->pc = 0x1DFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE58u;
    // 0x1dfe5c: 0x2343021  addu        $a2, $s1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5228u, 0x1DFE58u, 0x1DFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE60u;
label_1dfe60:
    // 0x1dfe60: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1dfe60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dfe64: 0x8e63b320  lw          $v1, -0x4CE0($s3)
    ctx->pc = 0x1dfe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947616)));
    // 0x1dfe68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1dfe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1dfe6c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x1dfe6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1dfe70: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1dfe70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dfe74: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DFE74u;
    {
        const bool branch_taken_0x1dfe74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE74u;
        // 0x1dfe78: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe74) {
            ctx->pc = 0x1DFE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfe48;
        }
    }
    ctx->pc = 0x1DFE7Cu;
}
