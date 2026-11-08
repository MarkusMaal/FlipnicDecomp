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

// Function: entry_002093dc
// Address: 0x2093dc - 0x2093e8
void entry_002093dc_0x2093dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002093dc_0x2093dc");
#endif

    ctx->pc = 0x2093dcu;

    // 0x2093dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2093dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2093e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2093E0u;
    {
        const bool branch_taken_0x2093e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093E0u;
        // 0x2093e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093e0) {
            ctx->pc = 0x20940Cu;
            return;
        }
    }
    ctx->pc = 0x2093E8u;
}
