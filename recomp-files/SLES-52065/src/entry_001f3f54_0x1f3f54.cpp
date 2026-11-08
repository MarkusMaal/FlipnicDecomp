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

// Function: entry_001f3f54
// Address: 0x1f3f54 - 0x1f3f60
void entry_001f3f54_0x1f3f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3f54_0x1f3f54");
#endif

    ctx->pc = 0x1f3f54u;

    // 0x1f3f54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F3F54u;
    {
        const bool branch_taken_0x1f3f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F54u;
        // 0x1f3f58: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f54) {
            ctx->pc = 0x1F3F88u;
            return;
        }
    }
    ctx->pc = 0x1F3F5Cu;
    // 0x1f3f5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1f3f60u;
}
