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

// Function: entry_001a2440
// Address: 0x1a2440 - 0x1a2468
void entry_001a2440_0x1a2440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2440_0x1a2440");
#endif

    switch (ctx->pc) {
        case 0x1a2448u: goto label_1a2448;
        default: break;
    }

    ctx->pc = 0x1a2440u;

    // 0x1a2440: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1A2440u;
    SET_GPR_U32(ctx, 31, 0x1A2448u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1A2440u, 0x1A2448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2448u;
label_1a2448:
    // 0x1a2448: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1a2448u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1a244c: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1a244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x1a2450: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2450u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2454: 0x0  nop
    ctx->pc = 0x1a2454u;
    // NOP
    // 0x1a2458: 0x0  nop
    ctx->pc = 0x1a2458u;
    // NOP
    // 0x1a245c: 0x2010  mfhi        $a0
    ctx->pc = 0x1a245cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1a2460: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A2460u;
    {
        const bool branch_taken_0x1a2460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2460) {
            ctx->pc = 0x1A24C0u;
            return;
        }
    }
    ctx->pc = 0x1A2468u;
}
