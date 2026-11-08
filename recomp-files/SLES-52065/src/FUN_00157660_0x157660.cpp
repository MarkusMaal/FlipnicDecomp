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

// Function: FUN_00157660
// Address: 0x157660 - 0x1576ac
void FUN_00157660_0x157660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157660_0x157660");
#endif

    ctx->pc = 0x157660u;

    // 0x157660: 0xc4820284  lwc1        $f2, 0x284($a0)
    ctx->pc = 0x157660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157664: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x157664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157668: 0xc4800280  lwc1        $f0, 0x280($a0)
    ctx->pc = 0x157668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15766c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15766cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x157670: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157674: 0xe4800280  swc1        $f0, 0x280($a0)
    ctx->pc = 0x157674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 640), bits); }
    // 0x157678: 0xc48202a4  lwc1        $f2, 0x2A4($a0)
    ctx->pc = 0x157678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15767c: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x15767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157680: 0xc48002a0  lwc1        $f0, 0x2A0($a0)
    ctx->pc = 0x157680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157684: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x157684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x157688: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15768c: 0xe48002a0  swc1        $f0, 0x2A0($a0)
    ctx->pc = 0x15768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 672), bits); }
    // 0x157690: 0xc48202c4  lwc1        $f2, 0x2C4($a0)
    ctx->pc = 0x157690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157694: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x157694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157698: 0xc48002c0  lwc1        $f0, 0x2C0($a0)
    ctx->pc = 0x157698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15769c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15769cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1576a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1576a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1576a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1576A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1576A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576A4u;
        // 0x1576a8: 0xe48002c0  swc1        $f0, 0x2C0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 704), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1576A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1576ACu;
}
