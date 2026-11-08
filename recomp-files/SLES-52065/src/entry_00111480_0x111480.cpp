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

// Function: entry_00111480
// Address: 0x111480 - 0x1114a0
void entry_00111480_0x111480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111480_0x111480");
#endif

    ctx->pc = 0x111480u;

    // 0x111480: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x111480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111484: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x111484u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x111488: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x111488u;
    {
        const bool branch_taken_0x111488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x111488) {
            ctx->pc = 0x111414u;
            return;
        }
    }
    ctx->pc = 0x111490u;
    // 0x111490: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111494: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111498: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x111498u;
    {
        const bool branch_taken_0x111498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111498u;
        // 0x11149c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111498) {
            ctx->pc = 0x1119D4u;
            return;
        }
    }
    ctx->pc = 0x1114A0u;
}
