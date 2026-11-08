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

// Function: entry_0012d900
// Address: 0x12d900 - 0x12d930
void entry_0012d900_0x12d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d900_0x12d900");
#endif

    ctx->pc = 0x12d900u;

    // 0x12d900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d904: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x12d904u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12d908: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x12d908u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x12d90c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x12d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12d910: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x12d910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x12d914: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x12d914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x12d918: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x12d918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x12d91c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x12d91cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12d920: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x12d920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12d924: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x12d924u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d928: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12D928u;
    {
        const bool branch_taken_0x12d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D928u;
        // 0x12d92c: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d928) {
            ctx->pc = 0x12D960u;
            return;
        }
    }
    ctx->pc = 0x12D930u;
}
