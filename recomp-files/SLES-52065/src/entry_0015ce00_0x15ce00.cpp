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

// Function: entry_0015ce00
// Address: 0x15ce00 - 0x15ce2c
void entry_0015ce00_0x15ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ce00_0x15ce00");
#endif

    switch (ctx->pc) {
        case 0x15ce10u: goto label_15ce10;
        default: break;
    }

    ctx->pc = 0x15ce00u;

label_15ce00:
    // 0x15ce00: 0x2b71021  addu        $v0, $s5, $s7
    ctx->pc = 0x15ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x15ce04: 0x8c562cd8  lw          $s6, 0x2CD8($v0)
    ctx->pc = 0x15ce04u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15ce08: 0xc056258  jal         func_158960
    ctx->pc = 0x15CE08u;
    SET_GPR_U32(ctx, 31, 0x15CE10u);
    ctx->pc = 0x15CE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE08u;
    // 0x15ce0c: 0x26c40010  addiu       $a0, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158960u, 0x15CE08u, 0x15CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE10u;
label_15ce10:
    // 0x15ce10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ce14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15ce14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15ce18: 0xa2c301d1  sb          $v1, 0x1D1($s6)
    ctx->pc = 0x15ce18u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 465), (uint8_t)GPR_U32(ctx, 3));
    // 0x15ce1c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x15ce1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x15ce20: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x15ce20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x15ce24: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x15CE24u;
    {
        const bool branch_taken_0x15ce24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE24u;
        // 0x15ce28: 0xaec001fc  sw          $zero, 0x1FC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce24) {
            ctx->pc = 0x15CE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ce00;
        }
    }
    ctx->pc = 0x15CE2Cu;
}
