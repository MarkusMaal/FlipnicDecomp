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

// Function: entry_00177fec
// Address: 0x177fec - 0x178004
void entry_00177fec_0x177fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177fec_0x177fec");
#endif

    ctx->pc = 0x177fecu;

    // 0x177fec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x177fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x177ff0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x177ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x177ff4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x177ff4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177ff8: 0x0  nop
    ctx->pc = 0x177ff8u;
    // NOP
    // 0x177ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x177ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x178000: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x178000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x178004u;
}
