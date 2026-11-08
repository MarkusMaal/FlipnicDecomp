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

// Function: entry_001b1790
// Address: 0x1b1790 - 0x1b17c4
void entry_001b1790_0x1b1790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1790_0x1b1790");
#endif

    ctx->pc = 0x1b1790u;

    // 0x1b1790: 0x667c2  srl         $t4, $a2, 31
    ctx->pc = 0x1b1790u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1b1794: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x1b1794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b1798: 0x0  nop
    ctx->pc = 0x1b1798u;
    // NOP
    // 0x1b179c: 0x0  nop
    ctx->pc = 0x1b179cu;
    // NOP
    // 0x1b17a0: 0x5010  mfhi        $t2
    ctx->pc = 0x1b17a0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x1b17a4: 0xa5043  sra         $t2, $t2, 1
    ctx->pc = 0x1b17a4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 1));
    // 0x1b17a8: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x1b17a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x1b17ac: 0x14b6004  sllv        $t4, $t3, $t2
    ctx->pc = 0x1b17acu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 10) & 0x1F));
    // 0x1b17b0: 0x4c5024  and         $t2, $v0, $t4
    ctx->pc = 0x1b17b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x1b17b4: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B17B4u;
    {
        const bool branch_taken_0x1b17b4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b17b4) {
            ctx->pc = 0x1B17C4u;
            return;
        }
    }
    ctx->pc = 0x1B17BCu;
    // 0x1b17bc: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1b17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1b17c0: 0x20c8025  or          $s0, $s0, $t4
    ctx->pc = 0x1b17c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 12));
    ctx->pc = 0x1b17c4u;
}
