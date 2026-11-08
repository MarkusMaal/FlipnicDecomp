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

// Function: FUN_00158a50
// Address: 0x158a50 - 0x158ae4
void FUN_00158a50_0x158a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158a50_0x158a50");
#endif

    ctx->pc = 0x158a50u;

    // 0x158a50: 0xe48c0130  swc1        $f12, 0x130($a0)
    ctx->pc = 0x158a50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 304), bits); }
    // 0x158a54: 0xe48d0134  swc1        $f13, 0x134($a0)
    ctx->pc = 0x158a54u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 308), bits); }
    // 0x158a58: 0xe48e0138  swc1        $f14, 0x138($a0)
    ctx->pc = 0x158a58u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
    // 0x158a5c: 0xac80013c  sw          $zero, 0x13C($a0)
    ctx->pc = 0x158a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 0));
    // 0x158a60: 0xe48c0140  swc1        $f12, 0x140($a0)
    ctx->pc = 0x158a60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x158a64: 0xe48d0144  swc1        $f13, 0x144($a0)
    ctx->pc = 0x158a64u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x158a68: 0xe48e0148  swc1        $f14, 0x148($a0)
    ctx->pc = 0x158a68u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 328), bits); }
    // 0x158a6c: 0xac80014c  sw          $zero, 0x14C($a0)
    ctx->pc = 0x158a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 0));
    // 0x158a70: 0xe48c0150  swc1        $f12, 0x150($a0)
    ctx->pc = 0x158a70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x158a74: 0xe48d0154  swc1        $f13, 0x154($a0)
    ctx->pc = 0x158a74u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x158a78: 0xe48e0158  swc1        $f14, 0x158($a0)
    ctx->pc = 0x158a78u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 344), bits); }
    // 0x158a7c: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x158a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
    // 0x158a80: 0xe48c0160  swc1        $f12, 0x160($a0)
    ctx->pc = 0x158a80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x158a84: 0xe48d0164  swc1        $f13, 0x164($a0)
    ctx->pc = 0x158a84u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 356), bits); }
    // 0x158a88: 0xe48e0168  swc1        $f14, 0x168($a0)
    ctx->pc = 0x158a88u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 360), bits); }
    // 0x158a8c: 0xac80016c  sw          $zero, 0x16C($a0)
    ctx->pc = 0x158a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 364), GPR_U32(ctx, 0));
    // 0x158a90: 0xe48c0170  swc1        $f12, 0x170($a0)
    ctx->pc = 0x158a90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 368), bits); }
    // 0x158a94: 0xe48d0174  swc1        $f13, 0x174($a0)
    ctx->pc = 0x158a94u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 372), bits); }
    // 0x158a98: 0xe48e0178  swc1        $f14, 0x178($a0)
    ctx->pc = 0x158a98u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 376), bits); }
    // 0x158a9c: 0xac80017c  sw          $zero, 0x17C($a0)
    ctx->pc = 0x158a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 0));
    // 0x158aa0: 0xe48c0180  swc1        $f12, 0x180($a0)
    ctx->pc = 0x158aa0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x158aa4: 0xe48d0184  swc1        $f13, 0x184($a0)
    ctx->pc = 0x158aa4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x158aa8: 0xe48e0188  swc1        $f14, 0x188($a0)
    ctx->pc = 0x158aa8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x158aac: 0xac80018c  sw          $zero, 0x18C($a0)
    ctx->pc = 0x158aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 0));
    // 0x158ab0: 0xe48c0190  swc1        $f12, 0x190($a0)
    ctx->pc = 0x158ab0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 400), bits); }
    // 0x158ab4: 0xe48d0194  swc1        $f13, 0x194($a0)
    ctx->pc = 0x158ab4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 404), bits); }
    // 0x158ab8: 0xe48e0198  swc1        $f14, 0x198($a0)
    ctx->pc = 0x158ab8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 408), bits); }
    // 0x158abc: 0xac80019c  sw          $zero, 0x19C($a0)
    ctx->pc = 0x158abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 0));
    // 0x158ac0: 0xe48c01a0  swc1        $f12, 0x1A0($a0)
    ctx->pc = 0x158ac0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x158ac4: 0xe48d01a4  swc1        $f13, 0x1A4($a0)
    ctx->pc = 0x158ac4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x158ac8: 0xe48e01a8  swc1        $f14, 0x1A8($a0)
    ctx->pc = 0x158ac8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x158acc: 0xac8001ac  sw          $zero, 0x1AC($a0)
    ctx->pc = 0x158accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 0));
    // 0x158ad0: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x158ad0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x158ad4: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x158ad4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x158ad8: 0xe48e0018  swc1        $f14, 0x18($a0)
    ctx->pc = 0x158ad8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x158adc: 0x3e00008  jr          $ra
    ctx->pc = 0x158ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ADCu;
        // 0x158ae0: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158AE4u;
}
