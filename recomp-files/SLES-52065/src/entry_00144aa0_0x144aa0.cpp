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

// Function: entry_00144aa0
// Address: 0x144aa0 - 0x144b04
void entry_00144aa0_0x144aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144aa0_0x144aa0");
#endif

    switch (ctx->pc) {
        case 0x144ac4u: goto label_144ac4;
        case 0x144ae8u: goto label_144ae8;
        case 0x144af0u: goto label_144af0;
        default: break;
    }

    ctx->pc = 0x144aa0u;

    // 0x144aa0: 0x8e2501a0  lw          $a1, 0x1A0($s1)
    ctx->pc = 0x144aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x144aa4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x144aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x144aa8: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x144aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x144aac: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x144aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144ab0: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x144ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x144ab4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x144ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x144ab8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x144ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x144abc: 0xc0514b8  jal         func_1452E0
    ctx->pc = 0x144ABCu;
    SET_GPR_U32(ctx, 31, 0x144AC4u);
    ctx->pc = 0x144AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144ABCu;
    // 0x144ac0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452E0u, 0x144ABCu, 0x144AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AC4u;
label_144ac4:
    // 0x144ac4: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x144ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x144ac8: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x144ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x144acc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x144accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144ad0: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x144ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x144ad4: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x144ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x144ad8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x144ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x144adc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x144adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x144ae0: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x144AE0u;
    SET_GPR_U32(ctx, 31, 0x144AE8u);
    ctx->pc = 0x144AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AE0u;
    // 0x144ae4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1323C0u, 0x144AE0u, 0x144AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AE8u;
label_144ae8:
    // 0x144ae8: 0xc04d0d8  jal         func_134360
    ctx->pc = 0x144AE8u;
    SET_GPR_U32(ctx, 31, 0x144AF0u);
    ctx->pc = 0x144AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144AE8u;
    // 0x144aec: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134360u, 0x144AE8u, 0x144AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AF0u;
label_144af0:
    // 0x144af0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x144af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144af4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144af8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144afc: 0x3e00008  jr          $ra
    ctx->pc = 0x144AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AFCu;
        // 0x144b00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144B04u;
}
