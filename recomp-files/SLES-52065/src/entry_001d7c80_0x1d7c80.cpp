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

// Function: entry_001d7c80
// Address: 0x1d7c80 - 0x1d7c98
void entry_001d7c80_0x1d7c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7c80_0x1d7c80");
#endif

    ctx->pc = 0x1d7c80u;

    // 0x1d7c80: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x1d7c80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7c84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7c8c: 0x8074cf0  j           func_1D33C0
    ctx->pc = 0x1D7C8Cu;
    ctx->pc = 0x1D7C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C8Cu;
    // 0x1d7c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33C0u;
    FUN_001d33c0_0x1d33c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7C94u;
    // 0x1d7c94: 0x0  nop
    ctx->pc = 0x1d7c94u;
    // NOP
    ctx->pc = 0x1d7c98u;
}
