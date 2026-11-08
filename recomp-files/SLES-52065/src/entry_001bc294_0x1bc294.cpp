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

// Function: entry_001bc294
// Address: 0x1bc294 - 0x1bc2b8
void entry_001bc294_0x1bc294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc294_0x1bc294");
#endif

    ctx->pc = 0x1bc294u;

    // 0x1bc294: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bc294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1bc298: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bc298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bc29c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc2a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc2a4: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1bc2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1bc2a8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC2A8u;
    {
        const bool branch_taken_0x1bc2a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2A8u;
        // 0x1bc2ac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2a8) {
            ctx->pc = 0x1BC2B8u;
            return;
        }
    }
    ctx->pc = 0x1BC2B0u;
    // 0x1bc2b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC2B0u;
    {
        const bool branch_taken_0x1bc2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2B0u;
        // 0x1bc2b4: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2b0) {
            ctx->pc = 0x1BC2BCu;
            return;
        }
    }
    ctx->pc = 0x1BC2B8u;
}
