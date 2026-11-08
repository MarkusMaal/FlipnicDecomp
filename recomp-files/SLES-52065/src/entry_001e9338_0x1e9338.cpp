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

// Function: entry_001e9338
// Address: 0x1e9338 - 0x1e9368
void entry_001e9338_0x1e9338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9338_0x1e9338");
#endif

    ctx->pc = 0x1e9338u;

label_1e9338:
    // 0x1e9338: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e9338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e933c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1e933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9340: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1e9340u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9344: 0x0  nop
    ctx->pc = 0x1e9344u;
    // NOP
    // 0x1e9348: 0x0  nop
    ctx->pc = 0x1e9348u;
    // NOP
    // 0x1e934c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E934Cu;
    {
        const bool branch_taken_0x1e934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e934c) {
            ctx->pc = 0x1E9338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9338;
        }
    }
    ctx->pc = 0x1E9354u;
    // 0x1e9354: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1e9354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9358: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9358u;
    {
        const bool branch_taken_0x1e9358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9358u;
        // 0x1e935c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9358) {
            ctx->pc = 0x1E9368u;
            return;
        }
    }
    ctx->pc = 0x1E9360u;
    // 0x1e9360: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1E9360u;
    {
        const bool branch_taken_0x1e9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9360u;
        // 0x1e9364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9360) {
            ctx->pc = 0x1E943Cu;
            return;
        }
    }
    ctx->pc = 0x1E9368u;
}
