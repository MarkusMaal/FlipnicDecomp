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

// Function: FUN_00180040
// Address: 0x180040 - 0x180050
void FUN_00180040_0x180040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180040_0x180040");
#endif

    ctx->pc = 0x180040u;

    // 0x180040: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x180040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x180044: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x180044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x180048: 0x804a098  j           func_128260
    ctx->pc = 0x180048u;
    ctx->pc = 0x18004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180048u;
    // 0x18004c: 0x248487c0  addiu       $a0, $a0, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128260u;
    FUN_00128260_0x128260(rdram, ctx, runtime); return;
    ctx->pc = 0x180050u;
}
