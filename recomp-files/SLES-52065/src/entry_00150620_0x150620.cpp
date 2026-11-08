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

// Function: entry_00150620
// Address: 0x150620 - 0x150654
void entry_00150620_0x150620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150620_0x150620");
#endif

    ctx->pc = 0x150620u;

    // 0x150620: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x150620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150624: 0x0  nop
    ctx->pc = 0x150624u;
    // NOP
    // 0x150628: 0x0  nop
    ctx->pc = 0x150628u;
    // NOP
    // 0x15062c: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x15062Cu;
    {
        const bool branch_taken_0x15062c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15062c) {
            ctx->pc = 0x15061Cu;
            return;
        }
    }
    ctx->pc = 0x150634u;
    // 0x150634: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x150634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x150638: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x150638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15063c: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x15063cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x150640: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x150640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x150644: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x150644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15064c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15064Cu;
    {
        const bool branch_taken_0x15064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15064c) {
            ctx->pc = 0x150658u;
            return;
        }
    }
    ctx->pc = 0x150654u;
}
