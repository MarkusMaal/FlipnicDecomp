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

// Function: entry_0013dc70
// Address: 0x13dc70 - 0x13dcac
void entry_0013dc70_0x13dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dc70_0x13dc70");
#endif

    ctx->pc = 0x13dc70u;

    // 0x13dc70: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x13dc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13dc74: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x13DC74u;
    {
        const bool branch_taken_0x13dc74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc74) {
            ctx->pc = 0x13DCACu;
            return;
        }
    }
    ctx->pc = 0x13DC7Cu;
    // 0x13dc7c: 0x8c84017c  lw          $a0, 0x17C($a0)
    ctx->pc = 0x13dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13dc80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13dc84: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13DC84u;
    {
        const bool branch_taken_0x13dc84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13dc84) {
            ctx->pc = 0x13DCACu;
            return;
        }
    }
    ctx->pc = 0x13DC8Cu;
    // 0x13dc8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13dc90: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x13dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13dc94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13dc98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13dc98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dc9c: 0x0  nop
    ctx->pc = 0x13dc9cu;
    // NOP
    // 0x13dca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13dca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13dca4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x13dca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x13dca8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x13dca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    ctx->pc = 0x13dcacu;
}
