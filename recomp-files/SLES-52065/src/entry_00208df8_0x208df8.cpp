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

// Function: entry_00208df8
// Address: 0x208df8 - 0x208e04
void entry_00208df8_0x208df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208df8_0x208df8");
#endif

    ctx->pc = 0x208df8u;

    // 0x208df8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x208df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x208dfc: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x208DFCu;
    {
        const bool branch_taken_0x208dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DFCu;
        // 0x208e00: 0x24442c18  addiu       $a0, $v0, 0x2C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208dfc) {
            ctx->pc = 0x208F54u;
            return;
        }
    }
    ctx->pc = 0x208E04u;
}
