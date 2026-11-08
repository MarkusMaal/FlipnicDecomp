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

// Function: GenerateRandomPositiveNumber
// Address: 0x200aa8 - 0x200ad8
void GenerateRandomPositiveNumber_0x200aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GenerateRandomPositiveNumber_0x200aa8");
#endif

    ctx->pc = 0x200aa8u;

    // 0x200aa8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x200aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x200aac: 0x3c0441c6  lui         $a0, 0x41C6
    ctx->pc = 0x200aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16838 << 16));
    // 0x200ab0: 0x8c45d9ac  lw          $a1, -0x2654($v0)
    ctx->pc = 0x200ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x200ab4: 0x34844e6d  ori         $a0, $a0, 0x4E6D
    ctx->pc = 0x200ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20077);
    // 0x200ab8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x200ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x200abc: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x200abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x200ac0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x200ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x200ac4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x200ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200ac8: 0x24633039  addiu       $v1, $v1, 0x3039
    ctx->pc = 0x200ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12345));
    // 0x200acc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x200accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x200ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x200AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AD0u;
        // 0x200ad4: 0xaca30058  sw          $v1, 0x58($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200AD8u;
}
