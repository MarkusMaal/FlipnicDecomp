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

// Function: entry_001fef84
// Address: 0x1fef84 - 0x1fef94
void entry_001fef84_0x1fef84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fef84_0x1fef84");
#endif

    ctx->pc = 0x1fef84u;

    // 0x1fef84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEF84u;
    {
        const bool branch_taken_0x1fef84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF84u;
        // 0x1fef88: 0x111182  srl         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef84) {
            ctx->pc = 0x1FEF94u;
            return;
        }
    }
    ctx->pc = 0x1FEF8Cu;
    // 0x1fef8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FEF8Cu;
    {
        const bool branch_taken_0x1fef8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF8Cu;
        // 0x1fef90: 0x244b0038  addiu       $t3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef8c) {
            ctx->pc = 0x1FEFE0u;
            return;
        }
    }
    ctx->pc = 0x1FEF94u;
}
