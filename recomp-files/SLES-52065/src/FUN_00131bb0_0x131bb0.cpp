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

// Function: FUN_00131bb0
// Address: 0x131bb0 - 0x131bc0
void FUN_00131bb0_0x131bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131bb0_0x131bb0");
#endif

    ctx->pc = 0x131bb0u;

    // 0x131bb0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x131bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x131bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131bb8: 0x807d38e  j           func_1F4E38
    ctx->pc = 0x131BB8u;
    ctx->pc = 0x131BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BB8u;
    // 0x131bbc: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    MemCopy128_0x1f4e38(rdram, ctx, runtime); return;
    ctx->pc = 0x131BC0u;
}
