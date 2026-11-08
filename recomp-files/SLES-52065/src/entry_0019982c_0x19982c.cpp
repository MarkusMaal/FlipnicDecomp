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

// Function: entry_0019982c
// Address: 0x19982c - 0x199878
void entry_0019982c_0x19982c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019982c_0x19982c");
#endif

    switch (ctx->pc) {
        case 0x19986cu: goto label_19986c;
        default: break;
    }

    ctx->pc = 0x19982cu;

    // 0x19982c: 0x0  nop
    ctx->pc = 0x19982cu;
    // NOP
    // 0x199830: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
    // 0x199834: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x199834u;
    {
        const bool branch_taken_0x199834 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199834u;
        // 0x199838: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199834) {
            ctx->pc = 0x199878u;
            return;
        }
    }
    ctx->pc = 0x19983Cu;
    // 0x19983c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199840: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x199840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x199844: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x199844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x199848: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19984c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19984cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199850: 0x0  nop
    ctx->pc = 0x199850u;
    // NOP
    // 0x199854: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199858: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x199858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19985c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19985cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x199860: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x199860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x199864: 0xc063de0  jal         func_18F780
    ctx->pc = 0x199864u;
    SET_GPR_U32(ctx, 31, 0x19986Cu);
    ctx->pc = 0x199868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199864u;
    // 0x199868: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x199864u, 0x19986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19986Cu;
label_19986c:
    // 0x19986c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19986Cu;
    {
        const bool branch_taken_0x19986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19986c) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x199874u;
    // 0x199874: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199878u;
}
