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

// Function: entry_00202f5c
// Address: 0x202f5c - 0x202f70
void entry_00202f5c_0x202f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202f5c_0x202f5c");
#endif

    ctx->pc = 0x202f5cu;

    // 0x202f5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x202f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202f60: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202F60u;
    {
        const bool branch_taken_0x202f60 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x202F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F60u;
        // 0x202f64: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f60) {
            ctx->pc = 0x202F70u;
            return;
        }
    }
    ctx->pc = 0x202F68u;
    // 0x202f68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202F68u;
    {
        const bool branch_taken_0x202f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F68u;
        // 0x202f6c: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f68) {
            ctx->pc = 0x202F74u;
            return;
        }
    }
    ctx->pc = 0x202F70u;
}
