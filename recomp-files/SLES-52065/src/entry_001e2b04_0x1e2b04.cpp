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

// Function: entry_001e2b04
// Address: 0x1e2b04 - 0x1e2b2c
void entry_001e2b04_0x1e2b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2b04_0x1e2b04");
#endif

    ctx->pc = 0x1e2b04u;

    // 0x1e2b04: 0x0  nop
    ctx->pc = 0x1e2b04u;
    // NOP
    // 0x1e2b08: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e2b0c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1e2b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e2b10: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1e2b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1e2b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e2b18: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1e2b1c: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2b1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2b20: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x1e2b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
    // 0x1e2b24: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E2B24u;
    {
        const bool branch_taken_0x1e2b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B24u;
        // 0x1e2b28: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b24) {
            ctx->pc = 0x1E2B84u;
            return;
        }
    }
    ctx->pc = 0x1E2B2Cu;
}
