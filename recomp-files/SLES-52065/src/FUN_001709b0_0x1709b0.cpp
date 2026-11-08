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

// Function: FUN_001709b0
// Address: 0x1709b0 - 0x1709d0
void FUN_001709b0_0x1709b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001709b0_0x1709b0");
#endif

    ctx->pc = 0x1709b0u;

    // 0x1709b0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1709b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1709b4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1709b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1709b8: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x1709b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1709bc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1709bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1709c0: 0xac207508  sw          $zero, 0x7508($at)
    ctx->pc = 0x1709c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367508u, _value); } while (0);
    // 0x1709c4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1709c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1709c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1709C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1709CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1709C8u;
        // 0x1709cc: 0xac207500  sw          $zero, 0x7500($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 29952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1709C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1709D0u;
}
