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

// Function: entry_001697ac
// Address: 0x1697ac - 0x1697bc
void entry_001697ac_0x1697ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001697ac_0x1697ac");
#endif

    ctx->pc = 0x1697acu;

    // 0x1697ac: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1697ACu;
    {
        const bool branch_taken_0x1697ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697ACu;
        // 0x1697b0: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697ac) {
            ctx->pc = 0x1697BCu;
            return;
        }
    }
    ctx->pc = 0x1697B4u;
    // 0x1697b4: 0x90232ebf  lbu         $v1, 0x2EBF($at)
    ctx->pc = 0x1697b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11967)));
    // 0x1697b8: 0x0  nop
    ctx->pc = 0x1697b8u;
    // NOP
    ctx->pc = 0x1697bcu;
}
