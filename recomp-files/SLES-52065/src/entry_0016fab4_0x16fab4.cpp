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

// Function: entry_0016fab4
// Address: 0x16fab4 - 0x16fae4
void entry_0016fab4_0x16fab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fab4_0x16fab4");
#endif

    switch (ctx->pc) {
        case 0x16fae0u: goto label_16fae0;
        default: break;
    }

    ctx->pc = 0x16fab4u;

    // 0x16fab4: 0xc6010264  lwc1        $f1, 0x264($s0)
    ctx->pc = 0x16fab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16fab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fabc: 0x0  nop
    ctx->pc = 0x16fabcu;
    // NOP
    // 0x16fac0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16fac0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fac4: 0x0  nop
    ctx->pc = 0x16fac4u;
    // NOP
    // 0x16fac8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x16FAC8u;
    {
        const bool branch_taken_0x16fac8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAC8u;
        // 0x16facc: 0x27a20180  addiu       $v0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fac8) {
            ctx->pc = 0x16FAE4u;
            return;
        }
    }
    ctx->pc = 0x16FAD0u;
    // 0x16fad0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x16fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x16fad4: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x16fad4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x16fad8: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x16FAD8u;
    SET_GPR_U32(ctx, 31, 0x16FAE0u);
    ctx->pc = 0x16FADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAD8u;
    // 0x16fadc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x16FAD8u, 0x16FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FAE0u;
label_16fae0:
    // 0x16fae0: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x16fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->pc = 0x16fae4u;
}
