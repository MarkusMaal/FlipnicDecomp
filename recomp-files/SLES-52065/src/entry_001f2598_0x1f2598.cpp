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

// Function: entry_001f2598
// Address: 0x1f2598 - 0x1f25b4
void entry_001f2598_0x1f2598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2598_0x1f2598");
#endif

    ctx->pc = 0x1f2598u;

label_1f2598:
    // 0x1f2598: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f259c: 0x0  nop
    ctx->pc = 0x1f259cu;
    // NOP
    // 0x1f25a0: 0x0  nop
    ctx->pc = 0x1f25a0u;
    // NOP
    // 0x1f25a4: 0x0  nop
    ctx->pc = 0x1f25a4u;
    // NOP
    // 0x1f25a8: 0x0  nop
    ctx->pc = 0x1f25a8u;
    // NOP
    // 0x1f25ac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F25ACu;
    {
        const bool branch_taken_0x1f25ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f25ac) {
            ctx->pc = 0x1F2598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2598;
        }
    }
    ctx->pc = 0x1F25B4u;
}
