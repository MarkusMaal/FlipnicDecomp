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

// Function: entry_0016af48
// Address: 0x16af48 - 0x16af5c
void entry_0016af48_0x16af48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016af48_0x16af48");
#endif

    ctx->pc = 0x16af48u;

    // 0x16af48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AF48u;
    {
        const bool branch_taken_0x16af48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16af48) {
            ctx->pc = 0x16AF5Cu;
            return;
        }
    }
    ctx->pc = 0x16AF50u;
    // 0x16af50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16af50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16af54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16AF54u;
    {
        const bool branch_taken_0x16af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF54u;
        // 0x16af58: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af54) {
            ctx->pc = 0x16AF64u;
            return;
        }
    }
    ctx->pc = 0x16AF5Cu;
}
