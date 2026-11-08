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

// Function: entry_0014b140
// Address: 0x14b140 - 0x14b170
void entry_0014b140_0x14b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b140_0x14b140");
#endif

    ctx->pc = 0x14b140u;

    // 0x14b140: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x14b140u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x14b144: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14b144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14b148: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14b148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14b14c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b150: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14b150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b154: 0x2010  mfhi        $a0
    ctx->pc = 0x14b154u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x14b158: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14b158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14b15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b160: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B160u;
    {
        const bool branch_taken_0x14b160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b160) {
            ctx->pc = 0x14B170u;
            return;
        }
    }
    ctx->pc = 0x14B168u;
    // 0x14b168: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x14b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b16c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14b16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x14b170u;
}
