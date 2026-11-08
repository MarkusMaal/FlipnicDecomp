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

// Function: entry_00207c98
// Address: 0x207c98 - 0x207cb4
void entry_00207c98_0x207c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207c98_0x207c98");
#endif

    ctx->pc = 0x207c98u;

    // 0x207c98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207c9c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x207c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x207ca0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x207ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x207ca4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x207CA4u;
    {
        const bool branch_taken_0x207ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ca4) {
            ctx->pc = 0x207CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207CA4u;
            // 0x207ca8: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207CB8u;
            return;
        }
    }
    ctx->pc = 0x207CACu;
    // 0x207cac: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x207cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x207cb0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x207cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x207cb4u;
}
