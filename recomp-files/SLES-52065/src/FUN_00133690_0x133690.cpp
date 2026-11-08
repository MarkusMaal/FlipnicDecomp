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

// Function: FUN_00133690
// Address: 0x133690 - 0x133698
void FUN_00133690_0x133690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133690_0x133690");
#endif

    ctx->pc = 0x133690u;

    // 0x133690: 0x807d392  j           func_1F4E48
    ctx->pc = 0x133690u;
    ctx->pc = 0x133694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133690u;
    // 0x133694: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    FUN_001f4e48_0x1f4e48(rdram, ctx, runtime); return;
    ctx->pc = 0x133698u;
}
