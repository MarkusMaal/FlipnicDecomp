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

// Function: entry_00207dd4
// Address: 0x207dd4 - 0x207de0
void entry_00207dd4_0x207dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207dd4_0x207dd4");
#endif

    ctx->pc = 0x207dd4u;

    // 0x207dd4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x207dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x207dd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207DD8u;
    {
        const bool branch_taken_0x207dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DD8u;
        // 0x207ddc: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207dd8) {
            ctx->pc = 0x207DE8u;
            return;
        }
    }
    ctx->pc = 0x207DE0u;
}
