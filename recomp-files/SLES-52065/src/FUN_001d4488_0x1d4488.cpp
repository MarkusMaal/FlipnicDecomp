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

// Function: FUN_001d4488
// Address: 0x1d4488 - 0x1d44ac
void FUN_001d4488_0x1d4488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4488_0x1d4488");
#endif

    ctx->pc = 0x1d4488u;

    // 0x1d4488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d448c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4490: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d4490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d4494: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1d4494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d4498: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d4498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d449c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d449cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d44a0: 0xdc8400a0  ld          $a0, 0xA0($a0)
    ctx->pc = 0x1d44a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1d44a4: 0x80782a4  j           func_1E0A90
    ctx->pc = 0x1D44A4u;
    ctx->pc = 0x1D44A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D44A4u;
    // 0x1d44a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A90u;
    FUN_001e0a90_0x1e0a90(rdram, ctx, runtime); return;
    ctx->pc = 0x1D44ACu;
}
