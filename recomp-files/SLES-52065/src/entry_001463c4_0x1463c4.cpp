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

// Function: entry_001463c4
// Address: 0x1463c4 - 0x14640c
void entry_001463c4_0x1463c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001463c4_0x1463c4");
#endif

    ctx->pc = 0x1463c4u;

    // 0x1463c4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1463c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1463c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1463c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1463cc: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x1463ccu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1463d0: 0x0  nop
    ctx->pc = 0x1463d0u;
    // NOP
    // 0x1463d4: 0x0  nop
    ctx->pc = 0x1463d4u;
    // NOP
    // 0x1463d8: 0x1812  mflo        $v1
    ctx->pc = 0x1463d8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1463dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1463dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1463e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1463e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1463e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1463e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1463e8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1463e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1463ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1463ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1463f0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1463f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1463f4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1463f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1463f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1463f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1463fc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1463fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x146400: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146400u;
    {
        const bool branch_taken_0x146400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146400) {
            ctx->pc = 0x14640Cu;
            return;
        }
    }
    ctx->pc = 0x146408u;
    // 0x146408: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x146408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x14640cu;
}
