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

// Function: entry_001aca5c
// Address: 0x1aca5c - 0x1aca98
void entry_001aca5c_0x1aca5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aca5c_0x1aca5c");
#endif

    switch (ctx->pc) {
        case 0x1aca64u: goto label_1aca64;
        default: break;
    }

    ctx->pc = 0x1aca5cu;

    // 0x1aca5c: 0xc06b2cc  jal         func_1ACB30
    ctx->pc = 0x1ACA5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACA64u);
    ctx->pc = 0x1ACB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACB30u, 0x1ACA5Cu, 0x1ACA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA64u;
label_1aca64:
    // 0x1aca64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ACA64u;
    {
        const bool branch_taken_0x1aca64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca64) {
            ctx->pc = 0x1ACA98u;
            return;
        }
    }
    ctx->pc = 0x1ACA6Cu;
    // 0x1aca6c: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x1aca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aca70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1aca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1aca74: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aca78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aca78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aca7c: 0x0  nop
    ctx->pc = 0x1aca7cu;
    // NOP
    // 0x1aca80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aca80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aca84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aca84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aca88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aca88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1aca8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aca8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1aca90: 0x0  nop
    ctx->pc = 0x1aca90u;
    // NOP
    // 0x1aca94: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1aca94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x1aca98u;
}
