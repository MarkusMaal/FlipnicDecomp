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

// Function: entry_0020116c
// Address: 0x20116c - 0x201174
void entry_0020116c_0x20116c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020116c_0x20116c");
#endif

    ctx->pc = 0x20116cu;

    // 0x20116c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20116Cu;
    {
        const bool branch_taken_0x20116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20116Cu;
        // 0x201170: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20116c) {
            ctx->pc = 0x2011ACu;
            return;
        }
    }
    ctx->pc = 0x201174u;
}
