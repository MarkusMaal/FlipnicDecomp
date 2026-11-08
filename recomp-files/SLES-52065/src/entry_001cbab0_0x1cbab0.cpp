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

// Function: entry_001cbab0
// Address: 0x1cbab0 - 0x1cbad8
void entry_001cbab0_0x1cbab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbab0_0x1cbab0");
#endif

    ctx->pc = 0x1cbab0u;

    // 0x1cbab0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cbab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cbab4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cbab8: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1cbab8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cbabc: 0x0  nop
    ctx->pc = 0x1cbabcu;
    // NOP
    // 0x1cbac0: 0x0  nop
    ctx->pc = 0x1cbac0u;
    // NOP
    // 0x1cbac4: 0x1810  mfhi        $v1
    ctx->pc = 0x1cbac4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cbac8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBAC8u;
    {
        const bool branch_taken_0x1cbac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAC8u;
        // 0x1cbacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbac8) {
            ctx->pc = 0x1CBAD8u;
            return;
        }
    }
    ctx->pc = 0x1CBAD0u;
    // 0x1cbad0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1CBAD0u;
    {
        const bool branch_taken_0x1cbad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAD0u;
        // 0x1cbad4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbad0) {
            ctx->pc = 0x1CBAD8u;
            return;
        }
    }
    ctx->pc = 0x1CBAD8u;
}
