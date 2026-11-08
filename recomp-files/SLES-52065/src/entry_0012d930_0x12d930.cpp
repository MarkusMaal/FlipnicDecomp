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

// Function: entry_0012d930
// Address: 0x12d930 - 0x12d960
void entry_0012d930_0x12d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d930_0x12d930");
#endif

    ctx->pc = 0x12d930u;

    // 0x12d930: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x12d930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x12d934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d938: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x12d938u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x12d93c: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x12d93cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x12d940: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x12d940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12d944: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x12d944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x12d948: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x12d948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d94c: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x12d94cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x12d950: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x12d950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12d954: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x12d954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12d958: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x12d958u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d95c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x12d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x12d960u;
}
