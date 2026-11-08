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

// Function: entry_001e28a4
// Address: 0x1e28a4 - 0x1e28cc
void entry_001e28a4_0x1e28a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e28a4_0x1e28a4");
#endif

    ctx->pc = 0x1e28a4u;

    // 0x1e28a4: 0x0  nop
    ctx->pc = 0x1e28a4u;
    // NOP
    // 0x1e28a8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1e28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e28ac: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1e28acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e28b0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1e28b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1e28b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e28b8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1e28b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1e28bc: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e28bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e28c0: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x1e28c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
    // 0x1e28c4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E28C4u;
    {
        const bool branch_taken_0x1e28c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28C4u;
        // 0x1e28c8: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28c4) {
            ctx->pc = 0x1E292Cu;
            return;
        }
    }
    ctx->pc = 0x1E28CCu;
}
