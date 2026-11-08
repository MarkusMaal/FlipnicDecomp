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

// Function: entry_0018e2f8
// Address: 0x18e2f8 - 0x18e338
void entry_0018e2f8_0x18e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e2f8_0x18e2f8");
#endif

    switch (ctx->pc) {
        case 0x18e30cu: goto label_18e30c;
        default: break;
    }

    ctx->pc = 0x18e2f8u;

    // 0x18e2f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18e2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e300: 0xae222720  sw          $v0, 0x2720($s1)
    ctx->pc = 0x18e300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10016), GPR_U32(ctx, 2));
    // 0x18e304: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18E304u;
    SET_GPR_U32(ctx, 31, 0x18E30Cu);
    ctx->pc = 0x18E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E304u;
    // 0x18e308: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E304u, 0x18E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E30Cu;
label_18e30c:
    // 0x18e30c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x18e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e310: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x18e310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x18e314: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e318: 0x0  nop
    ctx->pc = 0x18e318u;
    // NOP
    // 0x18e31c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18e320: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e320u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18e324: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x18e324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x18e328: 0x0  nop
    ctx->pc = 0x18e328u;
    // NOP
    // 0x18e32c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E32Cu;
    {
        const bool branch_taken_0x18e32c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E32Cu;
        // 0x18e330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e32c) {
            ctx->pc = 0x18E338u;
            return;
        }
    }
    ctx->pc = 0x18E334u;
    // 0x18e334: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18e334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x18e338u;
}
