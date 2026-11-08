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

// Function: entry_001771f4
// Address: 0x1771f4 - 0x177200
void entry_001771f4_0x1771f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001771f4_0x1771f4");
#endif

    ctx->pc = 0x1771f4u;

    // 0x1771f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1771f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1771f8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1771F8u;
    {
        const bool branch_taken_0x1771f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771F8u;
        // 0x1771fc: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771f8) {
            ctx->pc = 0x177284u;
            return;
        }
    }
    ctx->pc = 0x177200u;
}
