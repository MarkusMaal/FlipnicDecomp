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

// Function: entry_00194b40
// Address: 0x194b40 - 0x194b48
void entry_00194b40_0x194b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194b40_0x194b40");
#endif

    ctx->pc = 0x194b40u;

    // 0x194b40: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x194B40u;
    {
        const bool branch_taken_0x194b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B40u;
        // 0x194b44: 0xae510320  sw          $s1, 0x320($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b40) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194B48u;
}
