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

// Function: entry_001578c8
// Address: 0x1578c8 - 0x157904
void entry_001578c8_0x1578c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001578c8_0x1578c8");
#endif

    switch (ctx->pc) {
        case 0x1578ecu: goto label_1578ec;
        case 0x157900u: goto label_157900;
        default: break;
    }

    ctx->pc = 0x1578c8u;

    // 0x1578c8: 0xc60c0264  lwc1        $f12, 0x264($s0)
    ctx->pc = 0x1578c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1578cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1578ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1578d0: 0x0  nop
    ctx->pc = 0x1578d0u;
    // NOP
    // 0x1578d4: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x1578d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1578d8: 0x0  nop
    ctx->pc = 0x1578d8u;
    // NOP
    // 0x1578dc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1578DCu;
    {
        const bool branch_taken_0x1578dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1578E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578DCu;
        // 0x1578e0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578dc) {
            ctx->pc = 0x157904u;
            return;
        }
    }
    ctx->pc = 0x1578E4u;
    // 0x1578e4: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x1578E4u;
    SET_GPR_U32(ctx, 31, 0x1578ECu);
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x1578E4u, 0x1578ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1578ECu;
label_1578ec:
    // 0x1578ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1578ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1578f0: 0xe6000264  swc1        $f0, 0x264($s0)
    ctx->pc = 0x1578f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x1578f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1578f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578f8: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x1578F8u;
    SET_GPR_U32(ctx, 31, 0x157900u);
    ctx->pc = 0x1578FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1578F8u;
    // 0x1578fc: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x1578F8u, 0x157900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157900u;
label_157900:
    // 0x157900: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x157904u;
}
