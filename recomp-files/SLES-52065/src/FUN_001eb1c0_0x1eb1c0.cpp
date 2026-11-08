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

// Function: FUN_001eb1c0
// Address: 0x1eb1c0 - 0x1eb1e4
void FUN_001eb1c0_0x1eb1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eb1c0_0x1eb1c0");
#endif

    ctx->pc = 0x1eb1c0u;

    // 0x1eb1c0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1eb1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1eb1c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1eb1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1eb1c8: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1eb1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1eb1cc: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x1eb1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x1eb1d0: 0x24847810  addiu       $a0, $a0, 0x7810
    ctx->pc = 0x1eb1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30736));
    // 0x1eb1d4: 0x24a578ac  addiu       $a1, $a1, 0x78AC
    ctx->pc = 0x1eb1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30892));
    // 0x1eb1d8: 0x24c6c370  addiu       $a2, $a2, -0x3C90
    ctx->pc = 0x1eb1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951792));
    // 0x1eb1dc: 0x807a54c  j           func_1E9530
    ctx->pc = 0x1EB1DCu;
    ctx->pc = 0x1EB1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB1DCu;
    // 0x1eb1e0: 0x24e7c370  addiu       $a3, $a3, -0x3C90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9530u;
    FUN_001e9530_0x1e9530(rdram, ctx, runtime); return;
    ctx->pc = 0x1EB1E4u;
}
