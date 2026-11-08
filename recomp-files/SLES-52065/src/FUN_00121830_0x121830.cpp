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

// Function: FUN_00121830
// Address: 0x121830 - 0x12183c
void FUN_00121830_0x121830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121830_0x121830");
#endif

    ctx->pc = 0x121830u;

    // 0x121830: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x121830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x121834: 0x8047de0  j           func_11F780
    ctx->pc = 0x121834u;
    ctx->pc = 0x121838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121834u;
    // 0x121838: 0x24840ca4  addiu       $a0, $a0, 0xCA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F780u;
    FUN_0011f780_0x11f780(rdram, ctx, runtime); return;
    ctx->pc = 0x12183Cu;
}
