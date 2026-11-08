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

// Function: entry_0012d8a4
// Address: 0x12d8a4 - 0x12d8c4
void entry_0012d8a4_0x12d8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d8a4_0x12d8a4");
#endif

    ctx->pc = 0x12d8a4u;

    // 0x12d8a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x12d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x12d8a8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x12d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d8ac: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x12d8acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12d8b0: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x12d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x12d8b4: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x12d8b4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12d8b8: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x12d8b8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x12d8bc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x12d8bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d8c0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x12d8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x12d8c4u;
}
