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

// Function: entry_00187e40
// Address: 0x187e40 - 0x187e48
void entry_00187e40_0x187e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e40_0x187e40");
#endif

    ctx->pc = 0x187e40u;

    // 0x187e40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x187E40u;
    {
        const bool branch_taken_0x187e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E40u;
        // 0x187e44: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e40) {
            ctx->pc = 0x187E58u;
            return;
        }
    }
    ctx->pc = 0x187E48u;
}
