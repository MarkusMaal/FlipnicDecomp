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

// Function: entry_001a81c8
// Address: 0x1a81c8 - 0x1a820c
void entry_001a81c8_0x1a81c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a81c8_0x1a81c8");
#endif

    ctx->pc = 0x1a81c8u;

    // 0x1a81c8: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x1a81c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1a81cc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1a81ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a81d0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A81D0u;
    {
        const bool branch_taken_0x1a81d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a81d0) {
            ctx->pc = 0x1A820Cu;
            return;
        }
    }
    ctx->pc = 0x1A81D8u;
    // 0x1a81d8: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1a81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1a81dc: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1a81dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a81e0: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A81E0u;
    {
        const bool branch_taken_0x1a81e0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a81e0) {
            ctx->pc = 0x1A820Cu;
            return;
        }
    }
    ctx->pc = 0x1A81E8u;
    // 0x1a81e8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1a81e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a81ec: 0x0  nop
    ctx->pc = 0x1a81ecu;
    // NOP
    // 0x1a81f0: 0x0  nop
    ctx->pc = 0x1a81f0u;
    // NOP
    // 0x1a81f4: 0x1810  mfhi        $v1
    ctx->pc = 0x1a81f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a81f8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A81F8u;
    {
        const bool branch_taken_0x1a81f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a81f8) {
            ctx->pc = 0x1A820Cu;
            return;
        }
    }
    ctx->pc = 0x1A8200u;
    // 0x1a8200: 0xaf86870c  sw          $a2, -0x78F4($gp)
    ctx->pc = 0x1a8200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 6));
    // 0x1a8204: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8204u;
    {
        const bool branch_taken_0x1a8204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8204u;
        // 0x1a8208: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8204) {
            ctx->pc = 0x1A8224u;
            return;
        }
    }
    ctx->pc = 0x1A820Cu;
}
