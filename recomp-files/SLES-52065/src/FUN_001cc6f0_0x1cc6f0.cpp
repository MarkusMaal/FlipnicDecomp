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

// Function: FUN_001cc6f0
// Address: 0x1cc6f0 - 0x1cc71c
void FUN_001cc6f0_0x1cc6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc6f0_0x1cc6f0");
#endif

    ctx->pc = 0x1cc6f0u;

    // 0x1cc6f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc6f4: 0xac20f4e8  sw          $zero, -0xB18($at)
    ctx->pc = 0x1cc6f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F4E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4E8u, _value); } while (0);
    // 0x1cc6f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc6fc: 0xac20f4f0  sw          $zero, -0xB10($at)
    ctx->pc = 0x1cc6fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F4F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4F0u, _value); } while (0);
    // 0x1cc700: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc704: 0xac20f4f8  sw          $zero, -0xB08($at)
    ctx->pc = 0x1cc704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F4F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4F8u, _value); } while (0);
    // 0x1cc708: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc70c: 0xac20f8b0  sw          $zero, -0x750($at)
    ctx->pc = 0x1cc70cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F8B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8B0u, _value); } while (0);
    // 0x1cc710: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc714: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC714u;
        // 0x1cc718: 0xac20f8b8  sw          $zero, -0x748($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC71Cu;
}
