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

// Function: caseD_c
// Address: 0x1ac840 - 0x1ac894
void caseD_c_0x1ac840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1ac840");
#endif

    switch (ctx->pc) {
        case 0x1ac878u: goto label_1ac878;
        case 0x1ac880u: goto label_1ac880;
        case 0x1ac88cu: goto label_1ac88c;
        default: break;
    }

    ctx->pc = 0x1ac840u;

    // 0x1ac840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac844: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ac844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ac848: 0xae2307c4  sw          $v1, 0x7C4($s1)
    ctx->pc = 0x1ac848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1988), GPR_U32(ctx, 3));
    // 0x1ac84c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ac850: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ac850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac854: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ac858: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ac858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ac85c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac85cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ac860: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ac860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ac864: 0x0  nop
    ctx->pc = 0x1ac864u;
    // NOP
    // 0x1ac868: 0xae2207c8  sw          $v0, 0x7C8($s1)
    ctx->pc = 0x1ac868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1992), GPR_U32(ctx, 2));
    // 0x1ac86c: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1ac86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1ac870: 0xc054660  jal         func_151980
    ctx->pc = 0x1AC870u;
    SET_GPR_U32(ctx, 31, 0x1AC878u);
    ctx->pc = 0x1AC874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC870u;
    // 0x1ac874: 0x262407b0  addiu       $a0, $s1, 0x7B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1AC870u, 0x1AC878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC878u;
label_1ac878:
    // 0x1ac878: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1AC878u;
    SET_GPR_U32(ctx, 31, 0x1AC880u);
    ctx->pc = 0x1AC87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC878u;
    // 0x1ac87c: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AC878u, 0x1AC880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC880u;
label_1ac880:
    // 0x1ac880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac884: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AC884u;
    SET_GPR_U32(ctx, 31, 0x1AC88Cu);
    ctx->pc = 0x1AC888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC884u;
    // 0x1ac888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC884u, 0x1AC88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC88Cu;
label_1ac88c:
    // 0x1ac88c: 0x1000fe47  b           . + 4 + (-0x1B9 << 2)
    ctx->pc = 0x1AC88Cu;
    {
        const bool branch_taken_0x1ac88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC88Cu;
        // 0x1ac890: 0xa22006d8  sb          $zero, 0x6D8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1752), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac88c) {
            ctx->pc = 0x1AC1ACu;
            return;
        }
    }
    ctx->pc = 0x1AC894u;
}
