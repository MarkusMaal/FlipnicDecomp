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

// Function: entry_00157a48
// Address: 0x157a48 - 0x157a84
void entry_00157a48_0x157a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157a48_0x157a48");
#endif

    switch (ctx->pc) {
        case 0x157a6cu: goto label_157a6c;
        case 0x157a80u: goto label_157a80;
        default: break;
    }

    ctx->pc = 0x157a48u;

    // 0x157a48: 0xc60c0264  lwc1        $f12, 0x264($s0)
    ctx->pc = 0x157a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157a50: 0x0  nop
    ctx->pc = 0x157a50u;
    // NOP
    // 0x157a54: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x157a54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157a58: 0x0  nop
    ctx->pc = 0x157a58u;
    // NOP
    // 0x157a5c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x157A5Cu;
    {
        const bool branch_taken_0x157a5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x157A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A5Cu;
        // 0x157a60: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a5c) {
            ctx->pc = 0x157A84u;
            return;
        }
    }
    ctx->pc = 0x157A64u;
    // 0x157a64: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x157A64u;
    SET_GPR_U32(ctx, 31, 0x157A6Cu);
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x157A64u, 0x157A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A6Cu;
label_157a6c:
    // 0x157a6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157a70: 0xe6000264  swc1        $f0, 0x264($s0)
    ctx->pc = 0x157a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x157a74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x157a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a78: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x157A78u;
    SET_GPR_U32(ctx, 31, 0x157A80u);
    ctx->pc = 0x157A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A78u;
    // 0x157a7c: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x157A78u, 0x157A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A80u;
label_157a80:
    // 0x157a80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x157a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x157a84u;
}
