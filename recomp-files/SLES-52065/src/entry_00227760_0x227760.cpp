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

// Function: entry_00227760
// Address: 0x227760 - 0x2277b0
void entry_00227760_0x227760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227760_0x227760");
#endif

    ctx->pc = 0x227760u;

    // 0x227760: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x227764: 0xc42379e0  lwc1        $f3, 0x79E0($at)
    ctx->pc = 0x227764u;
    { uint32_t bits = FAST_READ32(0x2179E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x227768: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x22776c: 0xc42279e4  lwc1        $f2, 0x79E4($at)
    ctx->pc = 0x22776cu;
    { uint32_t bits = FAST_READ32(0x2179E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227770: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x227774: 0xc42179e8  lwc1        $f1, 0x79E8($at)
    ctx->pc = 0x227774u;
    { uint32_t bits = FAST_READ32(0x2179E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227778: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x22777c: 0xc42079ec  lwc1        $f0, 0x79EC($at)
    ctx->pc = 0x22777cu;
    { uint32_t bits = FAST_READ32(0x2179ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227780: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x227784: 0xe4237f50  swc1        $f3, 0x7F50($at)
    ctx->pc = 0x227784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x217F50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x217F50u, _value); } while (0); }
    // 0x227788: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x22778c: 0xe4227f54  swc1        $f2, 0x7F54($at)
    ctx->pc = 0x22778cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x217F54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x217F54u, _value); } while (0); }
    // 0x227790: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x227794: 0xe4217f58  swc1        $f1, 0x7F58($at)
    ctx->pc = 0x227794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x217F58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x217F58u, _value); } while (0); }
    // 0x227798: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x227798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x22779c: 0x3e00008  jr          $ra
    ctx->pc = 0x22779Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2277A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22779Cu;
        // 0x2277a0: 0xe4207f5c  swc1        $f0, 0x7F5C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 32604), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22779Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2277A4u;
    // 0x2277a4: 0x0  nop
    ctx->pc = 0x2277a4u;
    // NOP
    // 0x2277a8: 0x0  nop
    ctx->pc = 0x2277a8u;
    // NOP
    // 0x2277ac: 0x0  nop
    ctx->pc = 0x2277acu;
    // NOP
    ctx->pc = 0x2277b0u;
}
