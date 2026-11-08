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

// Function: FUN_00131b60
// Address: 0x131b60 - 0x131b70
void FUN_00131b60_0x131b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131b60_0x131b60");
#endif

    ctx->pc = 0x131b60u;

    // 0x131b60: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x131b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x131b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b68: 0x807d392  j           func_1F4E48
    ctx->pc = 0x131B68u;
    ctx->pc = 0x131B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B68u;
    // 0x131b6c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    FUN_001f4e48_0x1f4e48(rdram, ctx, runtime); return;
    ctx->pc = 0x131B70u;
}
