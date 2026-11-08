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

// Function: entry_00208c84
// Address: 0x208c84 - 0x208cac
void entry_00208c84_0x208c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208c84_0x208c84");
#endif

    ctx->pc = 0x208c84u;

    // 0x208c84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208c88: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x208C88u;
    {
        const bool branch_taken_0x208c88 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x208C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C88u;
        // 0x208c8c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c88) {
            ctx->pc = 0x208CACu;
            return;
        }
    }
    ctx->pc = 0x208C90u;
    // 0x208c90: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x208c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x208c94: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x208c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x208c98: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x208c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x208c9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x208c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x208ca0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208ca4: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x208ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x208ca8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x208ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x208cacu;
}
