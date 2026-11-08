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

// Function: entry_0017e03c
// Address: 0x17e03c - 0x17e06c
void entry_0017e03c_0x17e03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e03c_0x17e03c");
#endif

    ctx->pc = 0x17e03cu;

    // 0x17e03c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17e040: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17e044: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17e044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17e048: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17e048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17e04c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17e050: 0x2463ffc4  addiu       $v1, $v1, -0x3C
    ctx->pc = 0x17e050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
    // 0x17e054: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x17e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x17e058: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17e058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e060: 0x0  nop
    ctx->pc = 0x17e060u;
    // NOP
    // 0x17e064: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x17e064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x17e068: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x17e068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    ctx->pc = 0x17e06cu;
}
