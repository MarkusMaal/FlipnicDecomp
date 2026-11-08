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

// Function: entry_0011c7d0
// Address: 0x11c7d0 - 0x11c7e0
void entry_0011c7d0_0x11c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c7d0_0x11c7d0");
#endif

    ctx->pc = 0x11c7d0u;

    // 0x11c7d0: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11c7d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c7d8: 0x1000026b  b           . + 4 + (0x26B << 2)
    ctx->pc = 0x11C7D8u;
    {
        const bool branch_taken_0x11c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7D8u;
        // 0x11c7dc: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7d8) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11C7E0u;
}
