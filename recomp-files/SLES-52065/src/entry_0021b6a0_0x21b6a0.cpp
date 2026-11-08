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

// Function: entry_0021b6a0
// Address: 0x21b6a0 - 0x21b6b8
void entry_0021b6a0_0x21b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b6a0_0x21b6a0");
#endif

    ctx->pc = 0x21b6a0u;

    // 0x21b6a0: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x21b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x21b6a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B6A4u;
    {
        const bool branch_taken_0x21b6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6A4u;
        // 0x21b6a8: 0x24030083  addiu       $v1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6a4) {
            ctx->pc = 0x21B6B8u;
            return;
        }
    }
    ctx->pc = 0x21B6ACu;
    // 0x21b6ac: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x21b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x21b6b0: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x21b6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x21b6b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21b6b4u;
    runtime->Store32(rdram, ctx, 0xB0001810u, GPR_U32(ctx, 3));
    ctx->pc = 0x21b6b8u;
}
