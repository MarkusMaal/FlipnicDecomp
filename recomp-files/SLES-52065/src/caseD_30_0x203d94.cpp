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

// Function: caseD_30
// Address: 0x203d94 - 0x203da0
void caseD_30_0x203d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_30_0x203d94");
#endif

    ctx->pc = 0x203d94u;

    // 0x203d94: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x203d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203d98: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x203D98u;
    {
        const bool branch_taken_0x203d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D98u;
        // 0x203d9c: 0x37de0080  ori         $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d98) {
            ctx->pc = 0x203C68u;
            return;
        }
    }
    ctx->pc = 0x203DA0u;
}
