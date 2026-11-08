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

// Function: entry_00194d80
// Address: 0x194d80 - 0x194d88
void entry_00194d80_0x194d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194d80_0x194d80");
#endif

    ctx->pc = 0x194d80u;

    // 0x194d80: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x194D80u;
    {
        const bool branch_taken_0x194d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D80u;
        // 0x194d84: 0xac51032c  sw          $s1, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d80) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194D88u;
}
