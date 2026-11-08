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

// Function: entry_0019bed4
// Address: 0x19bed4 - 0x19bf10
void entry_0019bed4_0x19bed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bed4_0x19bed4");
#endif

    switch (ctx->pc) {
        case 0x19bf08u: goto label_19bf08;
        default: break;
    }

    ctx->pc = 0x19bed4u;

    // 0x19bed4: 0xae220924  sw          $v0, 0x924($s1)
    ctx->pc = 0x19bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2340), GPR_U32(ctx, 2));
    // 0x19bed8: 0x26240aa0  addiu       $a0, $s1, 0xAA0
    ctx->pc = 0x19bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
    // 0x19bedc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x19bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19bee0: 0xae220918  sw          $v0, 0x918($s1)
    ctx->pc = 0x19bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2328), GPR_U32(ctx, 2));
    // 0x19bee4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bee8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x19beec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19beecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19bef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19bef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19bef4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x19bef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x19bef8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19befc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19befcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19bf00: 0xc0699e0  jal         func_1A6780
    ctx->pc = 0x19BF00u;
    SET_GPR_U32(ctx, 31, 0x19BF08u);
    ctx->pc = 0x19BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF00u;
    // 0x19bf04: 0xae22092c  sw          $v0, 0x92C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6780u, 0x19BF00u, 0x19BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF08u;
label_19bf08:
    // 0x19bf08: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19BF08u;
    {
        const bool branch_taken_0x19bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bf08) {
            ctx->pc = 0x19BF98u;
            return;
        }
    }
    ctx->pc = 0x19BF10u;
}
