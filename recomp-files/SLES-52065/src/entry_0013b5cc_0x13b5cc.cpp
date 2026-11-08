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

// Function: entry_0013b5cc
// Address: 0x13b5cc - 0x13b604
void entry_0013b5cc_0x13b5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b5cc_0x13b5cc");
#endif

    ctx->pc = 0x13b5ccu;

    // 0x13b5cc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B5CCu;
    {
        const bool branch_taken_0x13b5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b5cc) {
            ctx->pc = 0x13B604u;
            return;
        }
    }
    ctx->pc = 0x13B5D4u;
    // 0x13b5d4: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x13b5d4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b5d8: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x13b5d8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13b5dc: 0x78860020  lq          $a2, 0x20($a0)
    ctx->pc = 0x13b5dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13b5e0: 0x78850030  lq          $a1, 0x30($a0)
    ctx->pc = 0x13b5e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13b5e4: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x13b5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x13b5e8: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x13b5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x13b5ec: 0x7c660020  sq          $a2, 0x20($v1)
    ctx->pc = 0x13b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
    // 0x13b5f0: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x13b5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x13b5f4: 0x78860040  lq          $a2, 0x40($a0)
    ctx->pc = 0x13b5f4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13b5f8: 0x78850050  lq          $a1, 0x50($a0)
    ctx->pc = 0x13b5f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x13b5fc: 0x7c660040  sq          $a2, 0x40($v1)
    ctx->pc = 0x13b5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 6));
    // 0x13b600: 0x7c650050  sq          $a1, 0x50($v1)
    ctx->pc = 0x13b600u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 5));
    ctx->pc = 0x13b604u;
}
