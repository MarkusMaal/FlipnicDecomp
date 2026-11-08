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

// Function: entry_001a37d4
// Address: 0x1a37d4 - 0x1a37f0
void entry_001a37d4_0x1a37d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a37d4_0x1a37d4");
#endif

    ctx->pc = 0x1a37d4u;

    // 0x1a37d4: 0x0  nop
    ctx->pc = 0x1a37d4u;
    // NOP
    // 0x1a37d8: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1a37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1a37dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1a37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a37e0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A37E0u;
    {
        const bool branch_taken_0x1a37e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37E0u;
        // 0x1a37e4: 0xae230670  sw          $v1, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37e0) {
            ctx->pc = 0x1A37F0u;
            return;
        }
    }
    ctx->pc = 0x1A37E8u;
    // 0x1a37e8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1A37E8u;
    {
        const bool branch_taken_0x1a37e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37E8u;
        // 0x1a37ec: 0xae200674  sw          $zero, 0x674($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37e8) {
            ctx->pc = 0x1A3950u;
            return;
        }
    }
    ctx->pc = 0x1A37F0u;
}
