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

// Function: entry_0019c494
// Address: 0x19c494 - 0x19c4c0
void entry_0019c494_0x19c494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c494_0x19c494");
#endif

    switch (ctx->pc) {
        case 0x19c4b8u: goto label_19c4b8;
        default: break;
    }

    ctx->pc = 0x19c494u;

    // 0x19c494: 0x8e22090c  lw          $v0, 0x90C($s1)
    ctx->pc = 0x19c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2316)));
    // 0x19c498: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19c498u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19c49c: 0x0  nop
    ctx->pc = 0x19c49cu;
    // NOP
    // 0x19c4a0: 0x0  nop
    ctx->pc = 0x19c4a0u;
    // NOP
    // 0x19c4a4: 0x1010  mfhi        $v0
    ctx->pc = 0x19c4a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19c4a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C4A8u;
    {
        const bool branch_taken_0x19c4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c4a8) {
            ctx->pc = 0x19C4C4u;
            return;
        }
    }
    ctx->pc = 0x19C4B0u;
    // 0x19c4b0: 0xc067178  jal         func_19C5E0
    ctx->pc = 0x19C4B0u;
    SET_GPR_U32(ctx, 31, 0x19C4B8u);
    ctx->pc = 0x19C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4B0u;
    // 0x19c4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C5E0u, 0x19C4B0u, 0x19C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4B8u;
label_19c4b8:
    // 0x19c4b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C4B8u;
    {
        const bool branch_taken_0x19c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4b8) {
            ctx->pc = 0x19C4C4u;
            return;
        }
    }
    ctx->pc = 0x19C4C0u;
}
