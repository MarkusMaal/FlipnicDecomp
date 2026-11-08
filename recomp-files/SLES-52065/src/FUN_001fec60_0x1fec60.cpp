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

// Function: FUN_001fec60
// Address: 0x1fec60 - 0x1fec70
void FUN_001fec60_0x1fec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fec60_0x1fec60");
#endif

    ctx->pc = 0x1fec60u;

    // 0x1fec60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fec60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec64: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fec64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fec68: 0x807f62a  j           func_1FD8A8
    ctx->pc = 0x1FEC68u;
    ctx->pc = 0x1FEC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC68u;
    // 0x1fec6c: 0x8c44d9ac  lw          $a0, -0x2654($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    FUN_001fd8a8_0x1fd8a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1FEC70u;
}
