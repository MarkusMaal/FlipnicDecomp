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

// Function: entry_0018e26c
// Address: 0x18e26c - 0x18e2a0
void entry_0018e26c_0x18e26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e26c_0x18e26c");
#endif

    switch (ctx->pc) {
        case 0x18e274u: goto label_18e274;
        default: break;
    }

    ctx->pc = 0x18e26cu;

    // 0x18e26c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x18E26Cu;
    SET_GPR_U32(ctx, 31, 0x18E274u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18E26Cu, 0x18E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E274u;
label_18e274:
    // 0x18e274: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x18e274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e278: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x18e278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x18e27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e280: 0x0  nop
    ctx->pc = 0x18e280u;
    // NOP
    // 0x18e284: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18e288: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18e28c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x18e28cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x18e290: 0x0  nop
    ctx->pc = 0x18e290u;
    // NOP
    // 0x18e294: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E294u;
    {
        const bool branch_taken_0x18e294 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E294u;
        // 0x18e298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e294) {
            ctx->pc = 0x18E2A0u;
            return;
        }
    }
    ctx->pc = 0x18E29Cu;
    // 0x18e29c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18e29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x18e2a0u;
}
