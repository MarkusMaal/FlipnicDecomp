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

// Function: entry_00208564
// Address: 0x208564 - 0x208580
void entry_00208564_0x208564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208564_0x208564");
#endif

    ctx->pc = 0x208564u;

    // 0x208564: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x208564u;
    {
        const bool branch_taken_0x208564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208564) {
            ctx->pc = 0x208568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208564u;
            // 0x208568: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208510u;
            return;
        }
    }
    ctx->pc = 0x20856Cu;
    // 0x20856c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x20856cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x208570: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x208570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208574: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208574u;
    {
        const bool branch_taken_0x208574 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x208574) {
            ctx->pc = 0x208578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208574u;
            // 0x208578: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20858Cu;
            return;
        }
    }
    ctx->pc = 0x20857Cu;
    // 0x20857c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x208580u;
}
