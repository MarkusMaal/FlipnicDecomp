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

// Function: entry_001b7fd8
// Address: 0x1b7fd8 - 0x1b8000
void entry_001b7fd8_0x1b7fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7fd8_0x1b7fd8");
#endif

    ctx->pc = 0x1b7fd8u;

    // 0x1b7fd8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7FD8u;
    {
        const bool branch_taken_0x1b7fd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b7fd8) {
            ctx->pc = 0x1B8000u;
            return;
        }
    }
    ctx->pc = 0x1B7FE0u;
    // 0x1b7fe0: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x1b7fe0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b7fe4: 0x0  nop
    ctx->pc = 0x1b7fe4u;
    // NOP
    // 0x1b7fe8: 0x0  nop
    ctx->pc = 0x1b7fe8u;
    // NOP
    // 0x1b7fec: 0x1010  mfhi        $v0
    ctx->pc = 0x1b7fecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b7ff0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7FF0u;
    {
        const bool branch_taken_0x1b7ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ff0) {
            ctx->pc = 0x1B8000u;
            return;
        }
    }
    ctx->pc = 0x1B7FF8u;
    // 0x1b7ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7FF8u;
    {
        const bool branch_taken_0x1b7ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FF8u;
        // 0x1b7ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ff8) {
            ctx->pc = 0x1B8004u;
            return;
        }
    }
    ctx->pc = 0x1B8000u;
}
