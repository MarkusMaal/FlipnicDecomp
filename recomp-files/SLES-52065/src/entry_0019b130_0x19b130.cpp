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

// Function: entry_0019b130
// Address: 0x19b130 - 0x19b18c
void entry_0019b130_0x19b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b130_0x19b130");
#endif

    switch (ctx->pc) {
        case 0x19b150u: goto label_19b150;
        case 0x19b158u: goto label_19b158;
        default: break;
    }

    ctx->pc = 0x19b130u;

    // 0x19b130: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x19b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
    // 0x19b134: 0x26320674  addiu       $s2, $s1, 0x674
    ctx->pc = 0x19b134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1652));
    // 0x19b138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b13c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b140: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x19b140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19b144: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x19b144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x19b148: 0xc064f7c  jal         func_193DF0
    ctx->pc = 0x19B148u;
    SET_GPR_U32(ctx, 31, 0x19B150u);
    ctx->pc = 0x19B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B148u;
    // 0x19b14c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x19B148u, 0x19B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B150u;
label_19b150:
    // 0x19b150: 0xc04bf44  jal         func_12FD10
    ctx->pc = 0x19B150u;
    SET_GPR_U32(ctx, 31, 0x19B158u);
    ctx->pc = 0x19B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B150u;
    // 0x19b154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x19B150u, 0x19B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B158u;
label_19b158:
    // 0x19b158: 0xae220784  sw          $v0, 0x784($s1)
    ctx->pc = 0x19b158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1924), GPR_U32(ctx, 2));
    // 0x19b15c: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    // 0x19b160: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x19b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
    // 0x19b164: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b168: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x19b168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b16c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b16cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19b170: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19b170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19b174: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19b178: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19b178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19b17c: 0x0  nop
    ctx->pc = 0x19b17cu;
    // NOP
    // 0x19b180: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B180u;
    {
        const bool branch_taken_0x19b180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b180) {
            ctx->pc = 0x19B18Cu;
            return;
        }
    }
    ctx->pc = 0x19B188u;
    // 0x19b188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x19b18cu;
}
