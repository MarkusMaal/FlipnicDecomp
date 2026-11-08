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

// Function: entry_001d7e58
// Address: 0x1d7e58 - 0x1d7e74
void entry_001d7e58_0x1d7e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7e58_0x1d7e58");
#endif

    switch (ctx->pc) {
        case 0x1d7e6cu: goto label_1d7e6c;
        default: break;
    }

    ctx->pc = 0x1d7e58u;

label_1d7e58:
    // 0x1d7e58: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d7e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d7e5c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d7e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7e60: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d7e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d7e64: 0xc077432  jal         func_1DD0C8
    ctx->pc = 0x1D7E64u;
    SET_GPR_U32(ctx, 31, 0x1D7E6Cu);
    ctx->pc = 0x1D7E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E64u;
    // 0x1d7e68: 0x90450002  lbu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0C8u, 0x1D7E64u, 0x1D7E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E6Cu;
label_1d7e6c:
    // 0x1d7e6c: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7E6Cu;
    {
        const bool branch_taken_0x1d7e6c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E6Cu;
        // 0x1d7e70: 0x8e42054c  lw          $v0, 0x54C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e6c) {
            ctx->pc = 0x1D7E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e58;
        }
    }
    ctx->pc = 0x1D7E74u;
}
