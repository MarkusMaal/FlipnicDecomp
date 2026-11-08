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

// Function: entry_001ef5f8
// Address: 0x1ef5f8 - 0x1ef61c
void entry_001ef5f8_0x1ef5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef5f8_0x1ef5f8");
#endif

    ctx->pc = 0x1ef5f8u;

label_1ef5f8:
    // 0x1ef5f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ef5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ef5fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ef5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ef600: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ef600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ef604: 0x0  nop
    ctx->pc = 0x1ef604u;
    // NOP
    // 0x1ef608: 0x0  nop
    ctx->pc = 0x1ef608u;
    // NOP
    // 0x1ef60c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EF60Cu;
    {
        const bool branch_taken_0x1ef60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef60c) {
            ctx->pc = 0x1EF5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef5f8;
        }
    }
    ctx->pc = 0x1EF614u;
    // 0x1ef614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF614u;
    {
        const bool branch_taken_0x1ef614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF614u;
        // 0x1ef618: 0x8e84a468  lw          $a0, -0x5B98($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef614) {
            ctx->pc = 0x1EF628u;
            return;
        }
    }
    ctx->pc = 0x1EF61Cu;
}
