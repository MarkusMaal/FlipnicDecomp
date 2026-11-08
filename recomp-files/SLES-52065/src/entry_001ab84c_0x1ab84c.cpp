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

// Function: entry_001ab84c
// Address: 0x1ab84c - 0x1ab888
void entry_001ab84c_0x1ab84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab84c_0x1ab84c");
#endif

    switch (ctx->pc) {
        case 0x1ab854u: goto label_1ab854;
        default: break;
    }

    ctx->pc = 0x1ab84cu;

    // 0x1ab84c: 0xc06ae5c  jal         func_1AB970
    ctx->pc = 0x1AB84Cu;
    SET_GPR_U32(ctx, 31, 0x1AB854u);
    ctx->pc = 0x1AB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB970u, 0x1AB84Cu, 0x1AB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB854u;
label_1ab854:
    // 0x1ab854: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB854u;
    {
        const bool branch_taken_0x1ab854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab854) {
            ctx->pc = 0x1AB888u;
            return;
        }
    }
    ctx->pc = 0x1AB85Cu;
    // 0x1ab85c: 0xa200001c  sb          $zero, 0x1C($s0)
    ctx->pc = 0x1ab85cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab860: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ab860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ab864: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ab864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab868: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ab86c: 0x0  nop
    ctx->pc = 0x1ab86cu;
    // NOP
    // 0x1ab870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ab874: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab878: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab878u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ab87c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ab87cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ab880: 0x0  nop
    ctx->pc = 0x1ab880u;
    // NOP
    // 0x1ab884: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ab884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x1ab888u;
}
