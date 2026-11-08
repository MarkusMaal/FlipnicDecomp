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

// Function: entry_001e4ee4
// Address: 0x1e4ee4 - 0x1e4f08
void entry_001e4ee4_0x1e4ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4ee4_0x1e4ee4");
#endif

    ctx->pc = 0x1e4ee4u;

    // 0x1e4ee4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e4ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e4ee8: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e4ee8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x1e4eec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e4eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e4ef0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e4ef4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1e4ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1e4ef8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4EF8u;
    {
        const bool branch_taken_0x1e4ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EF8u;
        // 0x1e4efc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ef8) {
            ctx->pc = 0x1E4F08u;
            return;
        }
    }
    ctx->pc = 0x1E4F00u;
    // 0x1e4f00: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e4f04: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x1e4f04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1e4f08u;
}
