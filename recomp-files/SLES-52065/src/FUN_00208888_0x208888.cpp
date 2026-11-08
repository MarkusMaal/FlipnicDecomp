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

// Function: FUN_00208888
// Address: 0x208888 - 0x2088dc
void FUN_00208888_0x208888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208888_0x208888");
#endif

    switch (ctx->pc) {
        case 0x2088a0u: goto label_2088a0;
        case 0x2088d0u: goto label_2088d0;
        default: break;
    }

    ctx->pc = 0x208888u;

    // 0x208888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20888c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x20888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x208890: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208894: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x208894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x208898: 0xc081f46  jal         func_207D18
    ctx->pc = 0x208898u;
    SET_GPR_U32(ctx, 31, 0x2088A0u);
    ctx->pc = 0x20889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208898u;
    // 0x20889c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x208898u, 0x2088A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088A0u;
label_2088a0:
    // 0x2088a0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x2088a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2088a4: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x2088a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x2088a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2088a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2088ac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2088acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2088b0: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x2088b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x2088b4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2088b4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2088b8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2088b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2088bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2088bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2088c0: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x2088c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x2088c4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2088c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2088c8: 0xc082514  jal         func_209450
    ctx->pc = 0x2088C8u;
    SET_GPR_U32(ctx, 31, 0x2088D0u);
    ctx->pc = 0x2088CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088C8u;
    // 0x2088cc: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209450u, 0x2088C8u, 0x2088D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088D0u;
label_2088d0:
    // 0x2088d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2088d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2088d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2088D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2088D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088D4u;
        // 0x2088d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2088D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2088DCu;
}
