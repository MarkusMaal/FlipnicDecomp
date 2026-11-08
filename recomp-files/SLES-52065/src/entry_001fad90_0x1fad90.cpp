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

// Function: entry_001fad90
// Address: 0x1fad90 - 0x1fada8
void entry_001fad90_0x1fad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fad90_0x1fad90");
#endif

    ctx->pc = 0x1fad90u;

    // 0x1fad90: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x1fad90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1fad94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fad98: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1FAD98u;
    {
        const bool branch_taken_0x1fad98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD98u;
        // 0x1fad9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad98) {
            ctx->pc = 0x1FAE9Cu;
            return;
        }
    }
    ctx->pc = 0x1FADA0u;
    // 0x1fada0: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1FADA0u;
    {
        const bool branch_taken_0x1fada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADA0u;
        // 0x1fada4: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fada0) {
            ctx->pc = 0x1FAFBCu;
            return;
        }
    }
    ctx->pc = 0x1FADA8u;
}
