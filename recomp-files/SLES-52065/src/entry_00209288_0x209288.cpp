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

// Function: entry_00209288
// Address: 0x209288 - 0x209290
void entry_00209288_0x209288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209288_0x209288");
#endif

    ctx->pc = 0x209288u;

    // 0x209288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209288u;
    {
        const bool branch_taken_0x209288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209288u;
        // 0x20928c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209288) {
            ctx->pc = 0x209294u;
            return;
        }
    }
    ctx->pc = 0x209290u;
}
