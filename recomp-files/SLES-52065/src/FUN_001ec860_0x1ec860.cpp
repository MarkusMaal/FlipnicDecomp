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

// Function: FUN_001ec860
// Address: 0x1ec860 - 0x1ec884
void FUN_001ec860_0x1ec860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec860_0x1ec860");
#endif

    ctx->pc = 0x1ec860u;

    // 0x1ec860: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ec860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ec864: 0x2443c2c0  addiu       $v1, $v0, -0x3D40
    ctx->pc = 0x1ec864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951616));
    // 0x1ec868: 0xac44c2c0  sw          $a0, -0x3D40($v0)
    ctx->pc = 0x1ec868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x38C2C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C2C0u, _value); } while (0);
    // 0x1ec86c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1ec86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ec870: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ec870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec874: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1ec874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x38C2C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C2C8u, _value); } while (0);
    // 0x1ec878: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ec878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38C2C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C2C4u, _value); } while (0);
    // 0x1ec87c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC87Cu;
        // 0x1ec880: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC884u;
}
