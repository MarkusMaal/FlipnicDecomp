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

// Function: FUN_0010cfb0
// Address: 0x10cfb0 - 0x10cfbc
void FUN_0010cfb0_0x10cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010cfb0_0x10cfb0");
#endif

    ctx->pc = 0x10cfb0u;

    // 0x10cfb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cfb4: 0x8042570  j           func_1095C0
    ctx->pc = 0x10CFB4u;
    ctx->pc = 0x10CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFB4u;
    // 0x10cfb8: 0xa08501d3  sb          $a1, 0x1D3($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 467), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    FUN_001095c0_0x1095c0(rdram, ctx, runtime); return;
    ctx->pc = 0x10CFBCu;
}
