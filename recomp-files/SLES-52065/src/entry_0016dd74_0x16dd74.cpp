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

// Function: entry_0016dd74
// Address: 0x16dd74 - 0x16ddd0
void entry_0016dd74_0x16dd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dd74_0x16dd74");
#endif

    ctx->pc = 0x16dd74u;

    // 0x16dd74: 0x8e640210  lw          $a0, 0x210($s3)
    ctx->pc = 0x16dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x16dd78: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16dd7c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16dd80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16dd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dd84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16dd88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16dd8c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x16dd8cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dd90: 0x0  nop
    ctx->pc = 0x16dd90u;
    // NOP
    // 0x16dd94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16dd94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16dd98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16dd9c: 0xa4650082  sh          $a1, 0x82($v1)
    ctx->pc = 0x16dd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 5));
    // 0x16dda0: 0x86630214  lh          $v1, 0x214($s3)
    ctx->pc = 0x16dda0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 532)));
    // 0x16dda4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16dda8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16dda8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ddac: 0x0  nop
    ctx->pc = 0x16ddacu;
    // NOP
    // 0x16ddb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16ddb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16ddb4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x16ddb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x16ddb8: 0x0  nop
    ctx->pc = 0x16ddb8u;
    // NOP
    // 0x16ddbc: 0x0  nop
    ctx->pc = 0x16ddbcu;
    // NOP
    // 0x16ddc0: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DDC0u;
    {
        const bool branch_taken_0x16ddc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ddc0) {
            ctx->pc = 0x16DDD0u;
            return;
        }
    }
    ctx->pc = 0x16DDC8u;
    // 0x16ddc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16ddcc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x16ddccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x16ddd0u;
}
