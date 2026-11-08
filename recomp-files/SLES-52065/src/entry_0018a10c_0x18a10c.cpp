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

// Function: entry_0018a10c
// Address: 0x18a10c - 0x18a148
void entry_0018a10c_0x18a10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a10c_0x18a10c");
#endif

    ctx->pc = 0x18a10cu;

    // 0x18a10c: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x18a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x18a110: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a114: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x18a114u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18a118: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x18a118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x18a11c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a11cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a120: 0x0  nop
    ctx->pc = 0x18a120u;
    // NOP
    // 0x18a124: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x18a124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x18a128: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18a128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18a12c: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x18a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x18a130: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x18a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18a134: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x18a134u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x18a138: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x18a138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18a13c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18a13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18a140: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x18a140u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a144: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x18a144u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x18a148u;
}
