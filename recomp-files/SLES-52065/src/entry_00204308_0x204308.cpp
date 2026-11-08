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

// Function: entry_00204308
// Address: 0x204308 - 0x204314
void entry_00204308_0x204308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204308_0x204308");
#endif

    ctx->pc = 0x204308u;

    // 0x204308: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x204308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20430c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20430Cu;
    {
        const bool branch_taken_0x20430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20430Cu;
        // 0x204310: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20430c) {
            ctx->pc = 0x204358u;
            return;
        }
    }
    ctx->pc = 0x204314u;
}
