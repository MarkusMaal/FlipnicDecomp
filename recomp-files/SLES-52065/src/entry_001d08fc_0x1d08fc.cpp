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

// Function: entry_001d08fc
// Address: 0x1d08fc - 0x1d0958
void entry_001d08fc_0x1d08fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d08fc_0x1d08fc");
#endif

    switch (ctx->pc) {
        case 0x1d0908u: goto label_1d0908;
        default: break;
    }

    ctx->pc = 0x1d08fcu;

    // 0x1d08fc: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x1d08fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1d0900: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1D0900u;
    SET_GPR_U32(ctx, 31, 0x1D0908u);
    ctx->pc = 0x1D0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0900u;
    // 0x1d0904: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1D0900u, 0x1D0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0908u;
label_1d0908:
    // 0x1d0908: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x1d0908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d090c: 0x3c023e27  lui         $v0, 0x3E27
    ctx->pc = 0x1d090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15911 << 16));
    // 0x1d0910: 0x344240db  ori         $v0, $v0, 0x40DB
    ctx->pc = 0x1d0910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16603);
    // 0x1d0914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0918: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1d0918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d091c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d091cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d0920: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x1d0920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x1d0924: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x1d0924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0928: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1d0928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d092c: 0x0  nop
    ctx->pc = 0x1d092cu;
    // NOP
    // 0x1d0930: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0930u;
    {
        const bool branch_taken_0x1d0930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0930) {
            ctx->pc = 0x1D0958u;
            return;
        }
    }
    ctx->pc = 0x1D0938u;
    // 0x1d0938: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x1d0938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d093c: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x1d093cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x1d0940: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d0940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1d0944: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0948: 0x0  nop
    ctx->pc = 0x1d0948u;
    // NOP
    // 0x1d094c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d094cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d0950: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x1d0950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x1d0954: 0xe6420054  swc1        $f2, 0x54($s2)
    ctx->pc = 0x1d0954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    ctx->pc = 0x1d0958u;
}
