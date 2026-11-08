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

// Function: entry_0018d198
// Address: 0x18d198 - 0x18d204
void entry_0018d198_0x18d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d198_0x18d198");
#endif

    switch (ctx->pc) {
        case 0x18d1f0u: goto label_18d1f0;
        default: break;
    }

    ctx->pc = 0x18d198u;

    // 0x18d198: 0xc6420490  lwc1        $f2, 0x490($s2)
    ctx->pc = 0x18d198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18d19c: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x18d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x18d1a0: 0xc6400494  lwc1        $f0, 0x494($s2)
    ctx->pc = 0x18d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d1a4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x18d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x18d1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d1ac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x18d1acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18d1b0: 0x0  nop
    ctx->pc = 0x18d1b0u;
    // NOP
    // 0x18d1b4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x18d1b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x18d1b8: 0xe6400490  swc1        $f0, 0x490($s2)
    ctx->pc = 0x18d1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x18d1bc: 0xc642048c  lwc1        $f2, 0x48C($s2)
    ctx->pc = 0x18d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18d1c0: 0xc6400494  lwc1        $f0, 0x494($s2)
    ctx->pc = 0x18d1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d1c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18d1c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18d1c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18d1cc: 0xe640048c  swc1        $f0, 0x48C($s2)
    ctx->pc = 0x18d1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1164), bits); }
    // 0x18d1d0: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x18d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d1d4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x18d1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d1d8: 0x0  nop
    ctx->pc = 0x18d1d8u;
    // NOP
    // 0x18d1dc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x18D1DCu;
    {
        const bool branch_taken_0x18d1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1DCu;
        // 0x18d1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1dc) {
            ctx->pc = 0x18D220u;
            return;
        }
    }
    ctx->pc = 0x18D1E4u;
    // 0x18d1e4: 0xe6430490  swc1        $f3, 0x490($s2)
    ctx->pc = 0x18d1e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x18d1e8: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x18D1E8u;
    SET_GPR_U32(ctx, 31, 0x18D1F0u);
    ctx->pc = 0x18D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1E8u;
    // 0x18d1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x18D1E8u, 0x18D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D1F0u;
label_18d1f0:
    // 0x18d1f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d1f4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D1F4u;
    {
        const bool branch_taken_0x18d1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d1f4) {
            ctx->pc = 0x18D204u;
            return;
        }
    }
    ctx->pc = 0x18D1FCu;
    // 0x18d1fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18D1FCu;
    {
        const bool branch_taken_0x18d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1FCu;
        // 0x18d200: 0xae400488  sw          $zero, 0x488($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1fc) {
            ctx->pc = 0x18D20Cu;
            return;
        }
    }
    ctx->pc = 0x18D204u;
}
