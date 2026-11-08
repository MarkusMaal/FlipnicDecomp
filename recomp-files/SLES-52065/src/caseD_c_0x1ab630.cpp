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
// Address: 0x1ab630 - 0x1ab684
void caseD_c_0x1ab630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1ab630");
#endif

    switch (ctx->pc) {
        case 0x1ab668u: goto label_1ab668;
        case 0x1ab670u: goto label_1ab670;
        case 0x1ab67cu: goto label_1ab67c;
        default: break;
    }

    ctx->pc = 0x1ab630u;

    // 0x1ab630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab634: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ab634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1ab638: 0xae8307c4  sw          $v1, 0x7C4($s4)
    ctx->pc = 0x1ab638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1988), GPR_U32(ctx, 3));
    // 0x1ab63c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ab640: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ab640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ab648: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab64c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab64cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ab650: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ab650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ab654: 0x0  nop
    ctx->pc = 0x1ab654u;
    // NOP
    // 0x1ab658: 0xae8207c8  sw          $v0, 0x7C8($s4)
    ctx->pc = 0x1ab658u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1992), GPR_U32(ctx, 2));
    // 0x1ab65c: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1ab65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1ab660: 0xc054660  jal         func_151980
    ctx->pc = 0x1AB660u;
    SET_GPR_U32(ctx, 31, 0x1AB668u);
    ctx->pc = 0x1AB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB660u;
    // 0x1ab664: 0x268407b0  addiu       $a0, $s4, 0x7B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1AB660u, 0x1AB668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB668u;
label_1ab668:
    // 0x1ab668: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1AB668u;
    SET_GPR_U32(ctx, 31, 0x1AB670u);
    ctx->pc = 0x1AB66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB668u;
    // 0x1ab66c: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AB668u, 0x1AB670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB670u;
label_1ab670:
    // 0x1ab670: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab674: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AB674u;
    SET_GPR_U32(ctx, 31, 0x1AB67Cu);
    ctx->pc = 0x1AB678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB674u;
    // 0x1ab678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB674u, 0x1AB67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB67Cu;
label_1ab67c:
    // 0x1ab67c: 0x1000fe47  b           . + 4 + (-0x1B9 << 2)
    ctx->pc = 0x1AB67Cu;
    {
        const bool branch_taken_0x1ab67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB67Cu;
        // 0x1ab680: 0xa28006d8  sb          $zero, 0x6D8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1752), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab67c) {
            ctx->pc = 0x1AAF9Cu;
            return;
        }
    }
    ctx->pc = 0x1AB684u;
}
