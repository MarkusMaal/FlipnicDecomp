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

// Function: entry_00177c2c
// Address: 0x177c2c - 0x177c4c
void entry_00177c2c_0x177c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177c2c_0x177c2c");
#endif

    ctx->pc = 0x177c2cu;

    // 0x177c2c: 0x0  nop
    ctx->pc = 0x177c2cu;
    // NOP
    // 0x177c30: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x177c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x177c34: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x177c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177c38: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x177c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x177c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177c40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x177c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x177c44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x177c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177c48: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x177c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    ctx->pc = 0x177c4cu;
}
