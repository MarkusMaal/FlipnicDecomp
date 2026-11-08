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

// Function: FUN_001d6228
// Address: 0x1d6228 - 0x1d623c
void FUN_001d6228_0x1d6228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d6228_0x1d6228");
#endif

    ctx->pc = 0x1d6228u;

    // 0x1d6228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d622c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6234: 0x807789e  j           func_1DE278
    ctx->pc = 0x1D6234u;
    ctx->pc = 0x1D6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6234u;
    // 0x1d6238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE278u;
    FUN_001de278_0x1de278(rdram, ctx, runtime); return;
    ctx->pc = 0x1D623Cu;
}
