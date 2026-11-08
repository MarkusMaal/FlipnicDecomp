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

// Function: FUN_001df070
// Address: 0x1df070 - 0x1df088
void FUN_001df070_0x1df070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df070_0x1df070");
#endif

    ctx->pc = 0x1df070u;

    // 0x1df070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df074: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1df074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df07c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df080: 0x8077c22  j           func_1DF088
    ctx->pc = 0x1DF080u;
    ctx->pc = 0x1DF084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF080u;
    // 0x1df084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF088u;
    FUN_001df088_0x1df088(rdram, ctx, runtime); return;
    ctx->pc = 0x1DF088u;
}
