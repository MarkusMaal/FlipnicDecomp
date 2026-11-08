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

// Function: entry_0013dac0
// Address: 0x13dac0 - 0x13dadc
void entry_0013dac0_0x13dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dac0_0x13dac0");
#endif

    ctx->pc = 0x13dac0u;

    // 0x13dac0: 0x908300d8  lbu         $v1, 0xD8($a0)
    ctx->pc = 0x13dac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x13dac4: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x13dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x13dac8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13dacc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13dad0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13dad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13dad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13dad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13dad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13dadcu;
}
