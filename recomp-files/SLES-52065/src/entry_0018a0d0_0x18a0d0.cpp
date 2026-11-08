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

// Function: entry_0018a0d0
// Address: 0x18a0d0 - 0x18a10c
void entry_0018a0d0_0x18a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a0d0_0x18a0d0");
#endif

    ctx->pc = 0x18a0d0u;

    // 0x18a0d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a0d4: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x18a0d4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18a0d8: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x18a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x18a0dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a0e0: 0x0  nop
    ctx->pc = 0x18a0e0u;
    // NOP
    // 0x18a0e4: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x18a0e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x18a0e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18a0ec: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x18a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x18a0f0: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x18a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x18a0f4: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x18a0f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x18a0f8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x18a0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18a0fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x18a0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18a100: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x18a100u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a104: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18A104u;
    {
        const bool branch_taken_0x18a104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A104u;
        // 0x18a108: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a104) {
            ctx->pc = 0x18A148u;
            return;
        }
    }
    ctx->pc = 0x18A10Cu;
}
