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

// Function: FUN_001d8d78
// Address: 0x1d8d78 - 0x1d8d94
void FUN_001d8d78_0x1d8d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8d78_0x1d8d78");
#endif

    ctx->pc = 0x1d8d78u;

    // 0x1d8d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8d7c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d8d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d8d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8d84: 0x24846400  addiu       $a0, $a0, 0x6400
    ctx->pc = 0x1d8d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25600));
    // 0x1d8d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8d8c: 0x807ba5a  j           func_1EE968
    ctx->pc = 0x1D8D8Cu;
    ctx->pc = 0x1D8D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8D8Cu;
    // 0x1d8d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    FUN_001ee968_0x1ee968(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8D94u;
}
