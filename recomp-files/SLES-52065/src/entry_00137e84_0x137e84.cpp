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

// Function: entry_00137e84
// Address: 0x137e84 - 0x137ea8
void entry_00137e84_0x137e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e84_0x137e84");
#endif

    ctx->pc = 0x137e84u;

    // 0x137e84: 0x0  nop
    ctx->pc = 0x137e84u;
    // NOP
    // 0x137e88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x137e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x137e8c: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x137e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x137e90: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137e94: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137e98: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x137e98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x137e9c: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x137e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x137ea0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x137ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x137ea4: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x137ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    ctx->pc = 0x137ea8u;
}
