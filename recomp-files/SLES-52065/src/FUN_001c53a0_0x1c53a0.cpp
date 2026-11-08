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

// Function: FUN_001c53a0
// Address: 0x1c53a0 - 0x1c53bc
void FUN_001c53a0_0x1c53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c53a0_0x1c53a0");
#endif

    ctx->pc = 0x1c53a0u;

    // 0x1c53a0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1c53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c53a4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1c53a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c53a8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1c53ac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1c53acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1c53b0: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x1c53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x1c53b4: 0x8080702  j           func_201C08
    ctx->pc = 0x1C53B4u;
    ctx->pc = 0x1C53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53B4u;
    // 0x1c53b8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    FUN_00201c08_0x201c08(rdram, ctx, runtime); return;
    ctx->pc = 0x1C53BCu;
}
