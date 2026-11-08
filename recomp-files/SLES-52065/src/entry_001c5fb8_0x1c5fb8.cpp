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

// Function: entry_001c5fb8
// Address: 0x1c5fb8 - 0x1c5fdc
void entry_001c5fb8_0x1c5fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5fb8_0x1c5fb8");
#endif

    ctx->pc = 0x1c5fb8u;

    // 0x1c5fb8: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x1c5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1c5fbc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5FBCu;
    {
        const bool branch_taken_0x1c5fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FBCu;
        // 0x1c5fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fbc) {
            ctx->pc = 0x1C5FDCu;
            return;
        }
    }
    ctx->pc = 0x1C5FC4u;
    // 0x1c5fc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5fc8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c5fcc: 0xa243006d  sb          $v1, 0x6D($s2)
    ctx->pc = 0x1c5fccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 109), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c5fd0: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x1c5fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x1c5fd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5FD4u;
    {
        const bool branch_taken_0x1c5fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FD4u;
        // 0x1c5fd8: 0xae430074  sw          $v1, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fd4) {
            ctx->pc = 0x1C5FE8u;
            return;
        }
    }
    ctx->pc = 0x1C5FDCu;
}
