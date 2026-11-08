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

// Function: entry_00157cc4
// Address: 0x157cc4 - 0x157d00
void entry_00157cc4_0x157cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157cc4_0x157cc4");
#endif

    switch (ctx->pc) {
        case 0x157ce8u: goto label_157ce8;
        case 0x157cfcu: goto label_157cfc;
        default: break;
    }

    ctx->pc = 0x157cc4u;

    // 0x157cc4: 0xc60c0264  lwc1        $f12, 0x264($s0)
    ctx->pc = 0x157cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157cc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157ccc: 0x0  nop
    ctx->pc = 0x157cccu;
    // NOP
    // 0x157cd0: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x157cd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157cd4: 0x0  nop
    ctx->pc = 0x157cd4u;
    // NOP
    // 0x157cd8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x157CD8u;
    {
        const bool branch_taken_0x157cd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CD8u;
        // 0x157cdc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cd8) {
            ctx->pc = 0x157D00u;
            return;
        }
    }
    ctx->pc = 0x157CE0u;
    // 0x157ce0: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x157CE0u;
    SET_GPR_U32(ctx, 31, 0x157CE8u);
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x157CE0u, 0x157CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CE8u;
label_157ce8:
    // 0x157ce8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x157ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157cec: 0xe6000264  swc1        $f0, 0x264($s0)
    ctx->pc = 0x157cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x157cf0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x157cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157cf4: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x157CF4u;
    SET_GPR_U32(ctx, 31, 0x157CFCu);
    ctx->pc = 0x157CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CF4u;
    // 0x157cf8: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x157CF4u, 0x157CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CFCu;
label_157cfc:
    // 0x157cfc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x157cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x157d00u;
}
