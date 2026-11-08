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

// Function: entry_001e9298
// Address: 0x1e9298 - 0x1e92b8
void entry_001e9298_0x1e9298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9298_0x1e9298");
#endif

    ctx->pc = 0x1e9298u;

    // 0x1e9298: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e9298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e929c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e929cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e92a0: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x1e92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e92a4: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e92a8: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E92A8u;
    {
        const bool branch_taken_0x1e92a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92A8u;
        // 0x1e92ac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92a8) {
            ctx->pc = 0x1E92B8u;
            return;
        }
    }
    ctx->pc = 0x1E92B0u;
    // 0x1e92b0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1E92B0u;
    {
        const bool branch_taken_0x1e92b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92B0u;
        // 0x1e92b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e92b0) {
            ctx->pc = 0x1E943Cu;
            return;
        }
    }
    ctx->pc = 0x1E92B8u;
}
