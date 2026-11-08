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

// Function: entry_0018a254
// Address: 0x18a254 - 0x18a2c0
void entry_0018a254_0x18a254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a254_0x18a254");
#endif

    switch (ctx->pc) {
        case 0x18a260u: goto label_18a260;
        default: break;
    }

    ctx->pc = 0x18a254u;

    // 0x18a254: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18a254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18a258: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x18A258u;
    SET_GPR_U32(ctx, 31, 0x18A260u);
    ctx->pc = 0x18A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A258u;
    // 0x18a25c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x18A258u, 0x18A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A260u;
label_18a260:
    // 0x18a260: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18a264: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18a264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18a268: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x18a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18a26c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x18a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18a270: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x18a270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18a274: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x18a274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18a278: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x18a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18a27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a280: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x18a280u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18a284: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x18a284u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18a288: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x18a288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18a28c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x18a28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x18a290: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x18a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18a294: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x18a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18a298: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x18a298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18a29c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x18a29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a2a0: 0xe4640010  swc1        $f4, 0x10($v1)
    ctx->pc = 0x18a2a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x18a2a4: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x18a2a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x18a2a8: 0xe4620018  swc1        $f2, 0x18($v1)
    ctx->pc = 0x18a2a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x18a2ac: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x18a2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x18a2b0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x18a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a2b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18a2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18a2b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18a2b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18a2bc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x18a2bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x18a2c0u;
}
