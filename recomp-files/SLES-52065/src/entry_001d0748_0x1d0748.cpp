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

// Function: entry_001d0748
// Address: 0x1d0748 - 0x1d079c
void entry_001d0748_0x1d0748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0748_0x1d0748");
#endif

    switch (ctx->pc) {
        case 0x1d076cu: goto label_1d076c;
        case 0x1d0784u: goto label_1d0784;
        default: break;
    }

    ctx->pc = 0x1d0748u;

    // 0x1d0748: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d074c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d0750: 0xc421fbe8  lwc1        $f1, -0x418($at)
    ctx->pc = 0x1d0750u;
    { uint32_t bits = FAST_READ32(0x36FBE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0754: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1d0754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1d0758: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d075c: 0xc420fbf8  lwc1        $f0, -0x408($at)
    ctx->pc = 0x1d075cu;
    { uint32_t bits = FAST_READ32(0x36FBF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0760: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d0760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d0764: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1D0764u;
    SET_GPR_U32(ctx, 31, 0x1D076Cu);
    ctx->pc = 0x1D0768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0764u;
    // 0x1d0768: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1D0764u, 0x1D076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D076Cu;
label_1d076c:
    // 0x1d076c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d076cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0770: 0xc42cfc08  lwc1        $f12, -0x3F8($at)
    ctx->pc = 0x1d0770u;
    { uint32_t bits = FAST_READ32(0x36FC08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d0774: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0778: 0xc42dfc18  lwc1        $f13, -0x3E8($at)
    ctx->pc = 0x1d0778u;
    { uint32_t bits = FAST_READ32(0x36FC18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d077c: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1D077Cu;
    SET_GPR_U32(ctx, 31, 0x1D0784u);
    ctx->pc = 0x1D0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D077Cu;
    // 0x1d0780: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1D077Cu, 0x1D0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0784u;
label_1d0784:
    // 0x1d0784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d078c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1d078cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1d0790: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d0790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d0794: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d0794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d0798: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d0798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    ctx->pc = 0x1d079cu;
}
