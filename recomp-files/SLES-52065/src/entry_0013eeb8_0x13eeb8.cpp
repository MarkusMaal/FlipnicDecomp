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

// Function: entry_0013eeb8
// Address: 0x13eeb8 - 0x13eed0
void entry_0013eeb8_0x13eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eeb8_0x13eeb8");
#endif

    ctx->pc = 0x13eeb8u;

    // 0x13eeb8: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x13eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x13eebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13eec0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EEC0u;
    {
        const bool branch_taken_0x13eec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEC0u;
        // 0x13eec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eec0) {
            ctx->pc = 0x13EED0u;
            return;
        }
    }
    ctx->pc = 0x13EEC8u;
    // 0x13eec8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x13EEC8u;
    {
        const bool branch_taken_0x13eec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eec8) {
            ctx->pc = 0x13EF24u;
            return;
        }
    }
    ctx->pc = 0x13EED0u;
}
