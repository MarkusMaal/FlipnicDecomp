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

// Function: entry_00176a1c
// Address: 0x176a1c - 0x176a24
void entry_00176a1c_0x176a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176a1c_0x176a1c");
#endif

    ctx->pc = 0x176a1cu;

    // 0x176a1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x176A1Cu;
    {
        const bool branch_taken_0x176a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A1Cu;
        // 0x176a20: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a1c) {
            ctx->pc = 0x176A48u;
            return;
        }
    }
    ctx->pc = 0x176A24u;
}
