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

// Function: entry_00179b7c
// Address: 0x179b7c - 0x179b94
void entry_00179b7c_0x179b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179b7c_0x179b7c");
#endif

    ctx->pc = 0x179b7cu;

    // 0x179b7c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x179b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x179b80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x179b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x179b84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x179b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x179b88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x179b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x179b8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x179B8Cu;
    {
        const bool branch_taken_0x179b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B8Cu;
        // 0x179b90: 0x24680060  addiu       $t0, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b8c) {
            ctx->pc = 0x179BE0u;
            return;
        }
    }
    ctx->pc = 0x179B94u;
}
