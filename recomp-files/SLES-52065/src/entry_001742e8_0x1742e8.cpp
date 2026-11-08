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

// Function: entry_001742e8
// Address: 0x1742e8 - 0x174318
void entry_001742e8_0x1742e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001742e8_0x1742e8");
#endif

    ctx->pc = 0x1742e8u;

    // 0x1742e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1742e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1742ec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1742ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1742f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1742f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1742f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1742f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1742f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1742f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1742fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1742fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x174304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174308: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x174308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    // 0x17430c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x17430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174310: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x174310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x174314: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x174314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->pc = 0x174318u;
}
