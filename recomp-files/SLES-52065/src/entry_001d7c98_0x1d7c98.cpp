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

// Function: entry_001d7c98
// Address: 0x1d7c98 - 0x1d7cb0
void entry_001d7c98_0x1d7c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7c98_0x1d7c98");
#endif

    ctx->pc = 0x1d7c98u;

    // 0x1d7c98: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7c98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7c9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ca4: 0x8074d08  j           func_1D3420
    ctx->pc = 0x1D7CA4u;
    ctx->pc = 0x1D7CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CA4u;
    // 0x1d7ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3420u;
    FUN_001d3420_0x1d3420(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7CACu;
    // 0x1d7cac: 0x0  nop
    ctx->pc = 0x1d7cacu;
    // NOP
    ctx->pc = 0x1d7cb0u;
}
