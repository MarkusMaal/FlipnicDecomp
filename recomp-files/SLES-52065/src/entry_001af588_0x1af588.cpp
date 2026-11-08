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

// Function: entry_001af588
// Address: 0x1af588 - 0x1af5a0
void entry_001af588_0x1af588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af588_0x1af588");
#endif

    ctx->pc = 0x1af588u;

    // 0x1af588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1af588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1af58c: 0x920328fa  lbu         $v1, 0x28FA($s0)
    ctx->pc = 0x1af58cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10490)));
    // 0x1af590: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF590u;
    {
        const bool branch_taken_0x1af590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af590) {
            ctx->pc = 0x1AF5A0u;
            return;
        }
    }
    ctx->pc = 0x1AF598u;
    // 0x1af598: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF598u;
    {
        const bool branch_taken_0x1af598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF598u;
        // 0x1af59c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af598) {
            ctx->pc = 0x1AF5A4u;
            return;
        }
    }
    ctx->pc = 0x1AF5A0u;
}
