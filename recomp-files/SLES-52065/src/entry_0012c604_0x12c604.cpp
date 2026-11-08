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

// Function: entry_0012c604
// Address: 0x12c604 - 0x12c610
void entry_0012c604_0x12c604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c604_0x12c604");
#endif

    ctx->pc = 0x12c604u;

    // 0x12c604: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x12c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c608: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x12C608u;
    {
        const bool branch_taken_0x12c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C608u;
        // 0x12c60c: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c608) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C610u;
}
