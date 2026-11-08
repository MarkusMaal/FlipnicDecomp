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

// Function: entry_001f25dc
// Address: 0x1f25dc - 0x1f25ec
void entry_001f25dc_0x1f25dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f25dc_0x1f25dc");
#endif

    ctx->pc = 0x1f25dcu;

    // 0x1f25dc: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F25DCu;
    {
        const bool branch_taken_0x1f25dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25DCu;
        // 0x1f25e0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25dc) {
            ctx->pc = 0x1F2590u;
            return;
        }
    }
    ctx->pc = 0x1F25E4u;
    // 0x1f25e4: 0xac40a478  sw          $zero, -0x5B88($v0)
    ctx->pc = 0x1f25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943864), GPR_U32(ctx, 0));
    // 0x1f25e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f25e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f25ecu;
}
