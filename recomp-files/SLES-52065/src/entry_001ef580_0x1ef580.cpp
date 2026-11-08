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

// Function: entry_001ef580
// Address: 0x1ef580 - 0x1ef59c
void entry_001ef580_0x1ef580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef580_0x1ef580");
#endif

    ctx->pc = 0x1ef580u;

label_1ef580:
    // 0x1ef580: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef584: 0x0  nop
    ctx->pc = 0x1ef584u;
    // NOP
    // 0x1ef588: 0x0  nop
    ctx->pc = 0x1ef588u;
    // NOP
    // 0x1ef58c: 0x0  nop
    ctx->pc = 0x1ef58cu;
    // NOP
    // 0x1ef590: 0x0  nop
    ctx->pc = 0x1ef590u;
    // NOP
    // 0x1ef594: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EF594u;
    {
        const bool branch_taken_0x1ef594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef594) {
            ctx->pc = 0x1EF580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef580;
        }
    }
    ctx->pc = 0x1EF59Cu;
}
