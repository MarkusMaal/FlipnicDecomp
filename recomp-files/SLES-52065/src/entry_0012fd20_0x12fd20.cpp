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

// Function: entry_0012fd20
// Address: 0x12fd20 - 0x12fd44
void entry_0012fd20_0x12fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fd20_0x12fd20");
#endif

    ctx->pc = 0x12fd20u;

    // 0x12fd20: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x12fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12fd24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fd28: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12FD28u;
    {
        const bool branch_taken_0x12fd28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x12FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD28u;
        // 0x12fd2c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd28) {
            ctx->pc = 0x12FD44u;
            return;
        }
    }
    ctx->pc = 0x12FD30u;
    // 0x12fd30: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x12fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12fd34: 0x24423e74  addiu       $v0, $v0, 0x3E74
    ctx->pc = 0x12fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15988));
    // 0x12fd38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12fd3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12FD3Cu;
    {
        const bool branch_taken_0x12fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD3Cu;
        // 0x12fd40: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd3c) {
            ctx->pc = 0x12FD58u;
            return;
        }
    }
    ctx->pc = 0x12FD44u;
}
