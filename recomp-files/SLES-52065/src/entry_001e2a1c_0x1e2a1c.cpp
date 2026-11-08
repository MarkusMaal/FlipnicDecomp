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

// Function: entry_001e2a1c
// Address: 0x1e2a1c - 0x1e2a3c
void entry_001e2a1c_0x1e2a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2a1c_0x1e2a1c");
#endif

    ctx->pc = 0x1e2a1cu;

    // 0x1e2a1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e2a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e2a20: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2a20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2a24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e2a24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e2a28: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e2a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e2a2c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2A2Cu;
    {
        const bool branch_taken_0x1e2a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A2Cu;
        // 0x1e2a30: 0xffa30048  sd          $v1, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a2c) {
            ctx->pc = 0x1E2A3Cu;
            return;
        }
    }
    ctx->pc = 0x1E2A34u;
    // 0x1e2a34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2A34u;
    {
        const bool branch_taken_0x1e2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A34u;
        // 0x1e2a38: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a34) {
            ctx->pc = 0x1E2A40u;
            return;
        }
    }
    ctx->pc = 0x1E2A3Cu;
}
