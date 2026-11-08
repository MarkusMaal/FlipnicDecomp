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

// Function: FUN_001fb390
// Address: 0x1fb390 - 0x1fb3d8
void FUN_001fb390_0x1fb390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb390_0x1fb390");
#endif

    ctx->pc = 0x1fb390u;

    // 0x1fb390: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1fb390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1fb394: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fb394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fb398: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1fb398u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1fb39c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1fb39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb3a0: 0x22823  negu        $a1, $v0
    ctx->pc = 0x1fb3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1fb3a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb3a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1fb3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1fb3ac: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1fb3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fb3b0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1fb3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1fb3b4: 0x3c057ff0  lui         $a1, 0x7FF0
    ctx->pc = 0x1fb3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32752 << 16));
    // 0x1fb3b8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1fb3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1fb3bc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1fb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fb3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb3c4: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1fb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1fb3c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fb3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fb3cc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1fb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1fb3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3D0u;
        // 0x1fb3d4: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB3D8u;
}
