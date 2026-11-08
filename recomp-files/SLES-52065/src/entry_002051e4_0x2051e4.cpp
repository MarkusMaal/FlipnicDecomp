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

// Function: entry_002051e4
// Address: 0x2051e4 - 0x205208
void entry_002051e4_0x2051e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002051e4_0x2051e4");
#endif

    ctx->pc = 0x2051e4u;

    // 0x2051e4: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2051E4u;
    {
        const bool branch_taken_0x2051e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2051e4) {
            ctx->pc = 0x2051E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2051E4u;
            // 0x2051e8: 0xa7001a  div         $zero, $a1, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2051B8u;
            return;
        }
    }
    ctx->pc = 0x2051ECu;
    // 0x2051ec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2051ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2051f0: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x2051f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2051f4: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x2051f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2051f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2051F8u;
    {
        const bool branch_taken_0x2051f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051F8u;
        // 0x2051fc: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051f8) {
            ctx->pc = 0x205244u;
            return;
        }
    }
    ctx->pc = 0x205200u;
    // 0x205200: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x205200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205204: 0x0  nop
    ctx->pc = 0x205204u;
    // NOP
    ctx->pc = 0x205208u;
}
