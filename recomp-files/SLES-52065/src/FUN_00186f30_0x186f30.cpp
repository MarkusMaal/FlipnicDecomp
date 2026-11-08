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

// Function: FUN_00186f30
// Address: 0x186f30 - 0x186f40
void FUN_00186f30_0x186f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186f30_0x186f30");
#endif

    ctx->pc = 0x186f30u;

    // 0x186f30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x186f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f34: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x186f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x186f38: 0x807d2ee  j           func_1F4BB8
    ctx->pc = 0x186F38u;
    ctx->pc = 0x186F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F38u;
    // 0x186f3c: 0x24a595f0  addiu       $a1, $a1, -0x6A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    FUN_001f4bb8_0x1f4bb8(rdram, ctx, runtime); return;
    ctx->pc = 0x186F40u;
}
