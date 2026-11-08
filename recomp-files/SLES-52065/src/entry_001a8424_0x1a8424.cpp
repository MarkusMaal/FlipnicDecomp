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

// Function: entry_001a8424
// Address: 0x1a8424 - 0x1a8464
void entry_001a8424_0x1a8424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8424_0x1a8424");
#endif

    ctx->pc = 0x1a8424u;

    // 0x1a8424: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x1a8424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1a8428: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1a8428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a842c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A842Cu;
    {
        const bool branch_taken_0x1a842c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a842c) {
            ctx->pc = 0x1A8464u;
            return;
        }
    }
    ctx->pc = 0x1A8434u;
    // 0x1a8434: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1a8434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1a8438: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1a8438u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a843c: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A843Cu;
    {
        const bool branch_taken_0x1a843c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a843c) {
            ctx->pc = 0x1A8464u;
            return;
        }
    }
    ctx->pc = 0x1A8444u;
    // 0x1a8444: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1a8444u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a8448: 0x0  nop
    ctx->pc = 0x1a8448u;
    // NOP
    // 0x1a844c: 0x0  nop
    ctx->pc = 0x1a844cu;
    // NOP
    // 0x1a8450: 0x1810  mfhi        $v1
    ctx->pc = 0x1a8450u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a8454: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8454u;
    {
        const bool branch_taken_0x1a8454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8454) {
            ctx->pc = 0x1A8464u;
            return;
        }
    }
    ctx->pc = 0x1A845Cu;
    // 0x1a845c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A845Cu;
    {
        const bool branch_taken_0x1a845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A845Cu;
        // 0x1a8460: 0xaf86870c  sw          $a2, -0x78F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a845c) {
            ctx->pc = 0x1A8474u;
            return;
        }
    }
    ctx->pc = 0x1A8464u;
}
