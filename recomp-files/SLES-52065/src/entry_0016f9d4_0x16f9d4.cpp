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

// Function: entry_0016f9d4
// Address: 0x16f9d4 - 0x16fa04
void entry_0016f9d4_0x16f9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f9d4_0x16f9d4");
#endif

    switch (ctx->pc) {
        case 0x16fa00u: goto label_16fa00;
        default: break;
    }

    ctx->pc = 0x16f9d4u;

    // 0x16f9d4: 0xc6210264  lwc1        $f1, 0x264($s1)
    ctx->pc = 0x16f9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f9d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f9dc: 0x0  nop
    ctx->pc = 0x16f9dcu;
    // NOP
    // 0x16f9e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16f9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f9e4: 0x0  nop
    ctx->pc = 0x16f9e4u;
    // NOP
    // 0x16f9e8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x16F9E8u;
    {
        const bool branch_taken_0x16f9e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9E8u;
        // 0x16f9ec: 0x27a20130  addiu       $v0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9e8) {
            ctx->pc = 0x16FA04u;
            return;
        }
    }
    ctx->pc = 0x16F9F0u;
    // 0x16f9f0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x16f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x16f9f4: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x16f9f4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x16f9f8: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x16F9F8u;
    SET_GPR_U32(ctx, 31, 0x16FA00u);
    ctx->pc = 0x16F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9F8u;
    // 0x16f9fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x16F9F8u, 0x16FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA00u;
label_16fa00:
    // 0x16fa00: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x16fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->pc = 0x16fa04u;
}
