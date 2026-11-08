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

// Function: entry_001d7c60
// Address: 0x1d7c60 - 0x1d7c70
void entry_001d7c60_0x1d7c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7c60_0x1d7c60");
#endif

    ctx->pc = 0x1d7c60u;

    // 0x1d7c60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d7c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7c68: 0x8074c9e  j           func_1D3278
    ctx->pc = 0x1D7C68u;
    ctx->pc = 0x1D7C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C68u;
    // 0x1d7c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3278u;
    FUN_001d3278_0x1d3278(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7C70u;
}
