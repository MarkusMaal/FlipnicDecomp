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

// Function: FUN_0017ef90
// Address: 0x17ef90 - 0x17ef9c
void FUN_0017ef90_0x17ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ef90_0x17ef90");
#endif

    ctx->pc = 0x17ef90u;

    // 0x17ef90: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17ef94: 0x805fbec  j           func_17EFB0
    ctx->pc = 0x17EF94u;
    ctx->pc = 0x17EF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF94u;
    // 0x17ef98: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EFB0u;
    FUN_0017efb0_0x17efb0(rdram, ctx, runtime); return;
    ctx->pc = 0x17EF9Cu;
}
