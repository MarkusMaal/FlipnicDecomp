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

// Function: entry_001b18d8
// Address: 0x1b18d8 - 0x1b18f4
void entry_001b18d8_0x1b18d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b18d8_0x1b18d8");
#endif

    ctx->pc = 0x1b18d8u;

    // 0x1b18d8: 0x131001a  div         $zero, $t1, $s1
    ctx->pc = 0x1b18d8u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b18dc: 0x0  nop
    ctx->pc = 0x1b18dcu;
    // NOP
    // 0x1b18e0: 0x0  nop
    ctx->pc = 0x1b18e0u;
    // NOP
    // 0x1b18e4: 0x2012  mflo        $a0
    ctx->pc = 0x1b18e4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1b18e8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1b18e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b18ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B18ECu;
    {
        const bool branch_taken_0x1b18ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18ECu;
        // 0x1b18f0: 0x1045023  subu        $t2, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18ec) {
            ctx->pc = 0x1B18F8u;
            return;
        }
    }
    ctx->pc = 0x1B18F4u;
}
