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

// Function: entry_001d4398
// Address: 0x1d4398 - 0x1d43b8
void entry_001d4398_0x1d4398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4398_0x1d4398");
#endif

    ctx->pc = 0x1d4398u;

    // 0x1d4398: 0xdc8400a0  ld          $a0, 0xA0($a0)
    ctx->pc = 0x1d4398u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1d439c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x1d439cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d43a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d43a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d43a4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1d43a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d43a8: 0x2812  mflo        $a1
    ctx->pc = 0x1d43a8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1d43ac: 0x80782a4  j           func_1E0A90
    ctx->pc = 0x1D43ACu;
    ctx->pc = 0x1D43B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43ACu;
    // 0x1d43b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A90u;
    FUN_001e0a90_0x1e0a90(rdram, ctx, runtime); return;
    ctx->pc = 0x1D43B4u;
    // 0x1d43b4: 0x0  nop
    ctx->pc = 0x1d43b4u;
    // NOP
    ctx->pc = 0x1d43b8u;
}
