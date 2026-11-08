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

// Function: FUN_001fb3d8
// Address: 0x1fb3d8 - 0x1fb410
void FUN_001fb3d8_0x1fb3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb3d8_0x1fb3d8");
#endif

    ctx->pc = 0x1fb3d8u;

    // 0x1fb3d8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1fb3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1fb3dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fb3dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fb3e0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1fb3e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1fb3e4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1fb3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb3e8: 0x22823  negu        $a1, $v0
    ctx->pc = 0x1fb3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1fb3ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb3f0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1fb3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1fb3f4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1fb3f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fb3f8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1fb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1fb3fc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x1fb3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x1fb400: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1fb400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1fb404: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1fb404u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb408: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB408u;
        // 0x1fb40c: 0x417c2  srl         $v0, $a0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB410u;
}
