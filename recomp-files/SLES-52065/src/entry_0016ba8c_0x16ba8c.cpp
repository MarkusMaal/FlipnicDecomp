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

// Function: entry_0016ba8c
// Address: 0x16ba8c - 0x16badc
void entry_0016ba8c_0x16ba8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba8c_0x16ba8c");
#endif

    switch (ctx->pc) {
        case 0x16ba94u: goto label_16ba94;
        default: break;
    }

    ctx->pc = 0x16ba8cu;

    // 0x16ba8c: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x16BA8Cu;
    SET_GPR_U32(ctx, 31, 0x16BA94u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16BA8Cu, 0x16BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA94u;
label_16ba94:
    // 0x16ba94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ba94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ba98: 0x0  nop
    ctx->pc = 0x16ba98u;
    // NOP
    // 0x16ba9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16ba9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16baa0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x16baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x16baa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16baa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16baa8: 0x0  nop
    ctx->pc = 0x16baa8u;
    // NOP
    // 0x16baac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16baacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16bab0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x16bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x16bab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16bab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bab8: 0x0  nop
    ctx->pc = 0x16bab8u;
    // NOP
    // 0x16babc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16babcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16bac0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16bac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16bac4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16bac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16bac8: 0x0  nop
    ctx->pc = 0x16bac8u;
    // NOP
    // 0x16bacc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16bad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16bad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bad4: 0x0  nop
    ctx->pc = 0x16bad4u;
    // NOP
    // 0x16bad8: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x16bad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    ctx->pc = 0x16badcu;
}
