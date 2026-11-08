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

// Function: entry_0015a830
// Address: 0x15a830 - 0x15a838
void entry_0015a830_0x15a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a830_0x15a830");
#endif

    ctx->pc = 0x15a830u;

    // 0x15a830: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x15A830u;
    {
        const bool branch_taken_0x15a830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A830u;
        // 0x15a834: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a830) {
            ctx->pc = 0x15A968u;
            return;
        }
    }
    ctx->pc = 0x15A838u;
}
