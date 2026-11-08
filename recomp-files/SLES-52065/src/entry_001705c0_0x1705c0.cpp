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

// Function: entry_001705c0
// Address: 0x1705c0 - 0x1705cc
void entry_001705c0_0x1705c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001705c0_0x1705c0");
#endif

    ctx->pc = 0x1705c0u;

    // 0x1705c0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1705C0u;
    {
        const bool branch_taken_0x1705c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1705C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705C0u;
        // 0x1705c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705c0) {
            ctx->pc = 0x1705CCu;
            return;
        }
    }
    ctx->pc = 0x1705C8u;
    // 0x1705c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1705c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1705ccu;
}
