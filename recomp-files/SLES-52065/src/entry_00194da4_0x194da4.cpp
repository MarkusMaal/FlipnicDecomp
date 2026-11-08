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

// Function: entry_00194da4
// Address: 0x194da4 - 0x194db0
void entry_00194da4_0x194da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194da4_0x194da4");
#endif

    ctx->pc = 0x194da4u;

    // 0x194da4: 0x0  nop
    ctx->pc = 0x194da4u;
    // NOP
    // 0x194da8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x194DA8u;
    {
        const bool branch_taken_0x194da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DA8u;
        // 0x194dac: 0xac52032c  sw          $s2, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194da8) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194DB0u;
}
