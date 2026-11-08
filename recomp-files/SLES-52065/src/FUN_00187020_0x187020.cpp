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

// Function: FUN_00187020
// Address: 0x187020 - 0x187030
void FUN_00187020_0x187020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187020_0x187020");
#endif

    ctx->pc = 0x187020u;

    // 0x187020: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x187020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187024: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x187024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x187028: 0x807d2ee  j           func_1F4BB8
    ctx->pc = 0x187028u;
    ctx->pc = 0x18702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187028u;
    // 0x18702c: 0x24a595b0  addiu       $a1, $a1, -0x6A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    FUN_001f4bb8_0x1f4bb8(rdram, ctx, runtime); return;
    ctx->pc = 0x187030u;
}
