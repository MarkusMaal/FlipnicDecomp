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

// Function: entry_0020b318
// Address: 0x20b318 - 0x20b33c
void entry_0020b318_0x20b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b318_0x20b318");
#endif

    ctx->pc = 0x20b318u;

label_20b318:
    // 0x20b318: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b31c: 0x0  nop
    ctx->pc = 0x20b31cu;
    // NOP
    // 0x20b320: 0x0  nop
    ctx->pc = 0x20b320u;
    // NOP
    // 0x20b324: 0x0  nop
    ctx->pc = 0x20b324u;
    // NOP
    // 0x20b328: 0x0  nop
    ctx->pc = 0x20b328u;
    // NOP
    // 0x20b32c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B32Cu;
    {
        const bool branch_taken_0x20b32c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b32c) {
            ctx->pc = 0x20B318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b318;
        }
    }
    ctx->pc = 0x20B334u;
    // 0x20b334: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20B334u;
    {
        const bool branch_taken_0x20b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B334u;
        // 0x20b338: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b334) {
            ctx->pc = 0x20B34Cu;
            return;
        }
    }
    ctx->pc = 0x20B33Cu;
}
