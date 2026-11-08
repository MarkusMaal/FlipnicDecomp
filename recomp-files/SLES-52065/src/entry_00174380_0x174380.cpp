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

// Function: entry_00174380
// Address: 0x174380 - 0x1743bc
void entry_00174380_0x174380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174380_0x174380");
#endif

    ctx->pc = 0x174380u;

    // 0x174380: 0x3c034134  lui         $v1, 0x4134
    ctx->pc = 0x174380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16692 << 16));
    // 0x174384: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x174384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174388: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x174388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17438c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17438cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174390: 0x0  nop
    ctx->pc = 0x174390u;
    // NOP
    // 0x174394: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x174394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x174398: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x174398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x17439c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17439cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1743a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1743a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1743a4: 0x0  nop
    ctx->pc = 0x1743a4u;
    // NOP
    // 0x1743a8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1743a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1743ac: 0x0  nop
    ctx->pc = 0x1743acu;
    // NOP
    // 0x1743b0: 0x0  nop
    ctx->pc = 0x1743b0u;
    // NOP
    // 0x1743b4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1743B4u;
    {
        const bool branch_taken_0x1743b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743b4) {
            ctx->pc = 0x1744B4u;
            return;
        }
    }
    ctx->pc = 0x1743BCu;
}
