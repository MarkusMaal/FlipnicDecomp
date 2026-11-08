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

// Function: entry_0011fc10
// Address: 0x11fc10 - 0x11fc2c
void entry_0011fc10_0x11fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fc10_0x11fc10");
#endif

    ctx->pc = 0x11fc10u;

    // 0x11fc10: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x11fc14: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x11fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x11fc18: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x11fc1c: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x11fc20: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x11fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x11fc24: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11FC24u;
    {
        const bool branch_taken_0x11fc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC24u;
        // 0x11fc28: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc24) {
            ctx->pc = 0x11FCA4u;
            return;
        }
    }
    ctx->pc = 0x11FC2Cu;
}
