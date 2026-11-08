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

// Function: entry_0019965c
// Address: 0x19965c - 0x1996c0
void entry_0019965c_0x19965c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019965c_0x19965c");
#endif

    switch (ctx->pc) {
        case 0x199664u: goto label_199664;
        case 0x199680u: goto label_199680;
        case 0x199690u: goto label_199690;
        default: break;
    }

    ctx->pc = 0x19965cu;

    // 0x19965c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19965Cu;
    SET_GPR_U32(ctx, 31, 0x199664u);
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19965Cu, 0x199664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199664u;
label_199664:
    // 0x199664: 0x8e820930  lw          $v0, 0x930($s4)
    ctx->pc = 0x199664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2352)));
    // 0x199668: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19966c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19966cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199670: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x199670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199674: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x199674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x199678: 0xc064f7c  jal         func_193DF0
    ctx->pc = 0x199678u;
    SET_GPR_U32(ctx, 31, 0x199680u);
    ctx->pc = 0x19967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199678u;
    // 0x19967c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x199678u, 0x199680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199680u;
label_199680:
    // 0x199680: 0x8e820930  lw          $v0, 0x930($s4)
    ctx->pc = 0x199680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2352)));
    // 0x199684: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x199684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x199688: 0xc064ee0  jal         func_193B80
    ctx->pc = 0x199688u;
    SET_GPR_U32(ctx, 31, 0x199690u);
    ctx->pc = 0x19968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199688u;
    // 0x19968c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x199688u, 0x199690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199690u;
label_199690:
    // 0x199690: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x199690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199694: 0x3c02433b  lui         $v0, 0x433B
    ctx->pc = 0x199694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17211 << 16));
    // 0x199698: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19969c: 0x0  nop
    ctx->pc = 0x19969cu;
    // NOP
    // 0x1996a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1996a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1996a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1996a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1996a8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1996a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1996ac: 0x0  nop
    ctx->pc = 0x1996acu;
    // NOP
    // 0x1996b0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1996B0u;
    {
        const bool branch_taken_0x1996b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996B0u;
        // 0x1996b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1996b0) {
            ctx->pc = 0x1996C0u;
            return;
        }
    }
    ctx->pc = 0x1996B8u;
    // 0x1996b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1996b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1996bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1996bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1996c0u;
}
