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

// Function: entry_0012bbd8
// Address: 0x12bbd8 - 0x12bbf0
void entry_0012bbd8_0x12bbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bbd8_0x12bbd8");
#endif

    ctx->pc = 0x12bbd8u;

    // 0x12bbd8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x12bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bbdc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12bbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12bbe0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12bbe4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12bbe8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12bbec: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x12bbecu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    ctx->pc = 0x12bbf0u;
}
