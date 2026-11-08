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

// Function: entry_00227710
// Address: 0x227710 - 0x227760
void entry_00227710_0x227710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227710_0x227710");
#endif

    ctx->pc = 0x227710u;

    // 0x227710: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x227714: 0xc4237550  lwc1        $f3, 0x7550($at)
    ctx->pc = 0x227714u;
    { uint32_t bits = FAST_READ32(0x217550u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x227718: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x22771c: 0xc4227554  lwc1        $f2, 0x7554($at)
    ctx->pc = 0x22771cu;
    { uint32_t bits = FAST_READ32(0x217554u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227720: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x227724: 0xc4217558  lwc1        $f1, 0x7558($at)
    ctx->pc = 0x227724u;
    { uint32_t bits = FAST_READ32(0x217558u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227728: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x22772c: 0xc420755c  lwc1        $f0, 0x755C($at)
    ctx->pc = 0x22772cu;
    { uint32_t bits = FAST_READ32(0x21755Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227730: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x227734: 0xe4237990  swc1        $f3, 0x7990($at)
    ctx->pc = 0x227734u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x217990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x217990u, _value); } while (0); }
    // 0x227738: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x22773c: 0xe4227994  swc1        $f2, 0x7994($at)
    ctx->pc = 0x22773cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x217994u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x217994u, _value); } while (0); }
    // 0x227740: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x227744: 0xe4217998  swc1        $f1, 0x7998($at)
    ctx->pc = 0x227744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x217998u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x217998u, _value); } while (0); }
    // 0x227748: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x22774c: 0x3e00008  jr          $ra
    ctx->pc = 0x22774Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22774Cu;
        // 0x227750: 0xe420799c  swc1        $f0, 0x799C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 31132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22774Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227754u;
    // 0x227754: 0x0  nop
    ctx->pc = 0x227754u;
    // NOP
    // 0x227758: 0x0  nop
    ctx->pc = 0x227758u;
    // NOP
    // 0x22775c: 0x0  nop
    ctx->pc = 0x22775cu;
    // NOP
    ctx->pc = 0x227760u;
}
