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

// Function: entry_0019bf10
// Address: 0x19bf10 - 0x19bf58
void entry_0019bf10_0x19bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bf10_0x19bf10");
#endif

    switch (ctx->pc) {
        case 0x19bf50u: goto label_19bf50;
        default: break;
    }

    ctx->pc = 0x19bf10u;

    // 0x19bf10: 0xae230924  sw          $v1, 0x924($s1)
    ctx->pc = 0x19bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2340), GPR_U32(ctx, 3));
    // 0x19bf14: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x19bf18: 0xae220918  sw          $v0, 0x918($s1)
    ctx->pc = 0x19bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2328), GPR_U32(ctx, 2));
    // 0x19bf1c: 0x26240aa0  addiu       $a0, $s1, 0xAA0
    ctx->pc = 0x19bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
    // 0x19bf20: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19bf24: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x19bf28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19bf28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19bf2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19bf2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19bf30: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x19bf30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x19bf34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19bf34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19bf38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19bf38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19bf3c: 0x0  nop
    ctx->pc = 0x19bf3cu;
    // NOP
    // 0x19bf40: 0xae22092c  sw          $v0, 0x92C($s1)
    ctx->pc = 0x19bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2348), GPR_U32(ctx, 2));
    // 0x19bf44: 0xae230aa4  sw          $v1, 0xAA4($s1)
    ctx->pc = 0x19bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2724), GPR_U32(ctx, 3));
    // 0x19bf48: 0xc0699e0  jal         func_1A6780
    ctx->pc = 0x19BF48u;
    SET_GPR_U32(ctx, 31, 0x19BF50u);
    ctx->pc = 0x19BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF48u;
    // 0x19bf4c: 0xa2200aac  sb          $zero, 0xAAC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2732), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6780u, 0x19BF48u, 0x19BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF50u;
label_19bf50:
    // 0x19bf50: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19BF50u;
    {
        const bool branch_taken_0x19bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bf50) {
            ctx->pc = 0x19BF98u;
            return;
        }
    }
    ctx->pc = 0x19BF58u;
}
