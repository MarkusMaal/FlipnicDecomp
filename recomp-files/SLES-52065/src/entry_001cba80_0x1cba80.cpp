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

// Function: entry_001cba80
// Address: 0x1cba80 - 0x1cbaa8
void entry_001cba80_0x1cba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cba80_0x1cba80");
#endif

    ctx->pc = 0x1cba80u;

    // 0x1cba80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cba80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cba84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cba88: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1cba88u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cba8c: 0x0  nop
    ctx->pc = 0x1cba8cu;
    // NOP
    // 0x1cba90: 0x0  nop
    ctx->pc = 0x1cba90u;
    // NOP
    // 0x1cba94: 0x1810  mfhi        $v1
    ctx->pc = 0x1cba94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cba98: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBA98u;
    {
        const bool branch_taken_0x1cba98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA98u;
        // 0x1cba9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba98) {
            ctx->pc = 0x1CBAA8u;
            return;
        }
    }
    ctx->pc = 0x1CBAA0u;
    // 0x1cbaa0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CBAA0u;
    {
        const bool branch_taken_0x1cbaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAA0u;
        // 0x1cbaa4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbaa0) {
            ctx->pc = 0x1CBAD8u;
            return;
        }
    }
    ctx->pc = 0x1CBAA8u;
}
