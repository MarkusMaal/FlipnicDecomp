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

// Function: entry_0020519c
// Address: 0x20519c - 0x2051b8
void entry_0020519c_0x20519c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020519c_0x20519c");
#endif

    ctx->pc = 0x20519cu;

    // 0x20519c: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x20519cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x2051a0: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x2051a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2051a4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2051A4u;
    {
        const bool branch_taken_0x2051a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2051A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051A4u;
        // 0x2051a8: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051a4) {
            ctx->pc = 0x20522Cu;
            return;
        }
    }
    ctx->pc = 0x2051ACu;
    // 0x2051ac: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2051acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2051b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2051b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051b4: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x2051b4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    ctx->pc = 0x2051b8u;
}
