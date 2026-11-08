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

// Function: FUN_0020ab30
// Address: 0x20ab30 - 0x20ab8c
void FUN_0020ab30_0x20ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020ab30_0x20ab30");
#endif

    switch (ctx->pc) {
        case 0x20ab58u: goto label_20ab58;
        case 0x20ab68u: goto label_20ab68;
        case 0x20ab78u: goto label_20ab78;
        default: break;
    }

    ctx->pc = 0x20ab30u;

    // 0x20ab30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20ab34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20ab38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20ab38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ab40: 0x30b00001  andi        $s0, $a1, 0x1
    ctx->pc = 0x20ab40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x20ab44: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x20ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x20ab48: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x20ab48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20ab4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20ab50: 0xc0828ce  jal         func_20A338
    ctx->pc = 0x20AB50u;
    SET_GPR_U32(ctx, 31, 0x20AB58u);
    ctx->pc = 0x20AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB50u;
    // 0x20ab54: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A338u, 0x20AB50u, 0x20AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB58u;
label_20ab58:
    // 0x20ab58: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AB58u;
    {
        const bool branch_taken_0x20ab58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ab58) {
            ctx->pc = 0x20AB70u;
            goto label_20ab70;
        }
    }
    ctx->pc = 0x20AB60u;
    // 0x20ab60: 0xc0829ec  jal         func_20A7B0
    ctx->pc = 0x20AB60u;
    SET_GPR_U32(ctx, 31, 0x20AB68u);
    ctx->pc = 0x20AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB60u;
    // 0x20ab64: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A7B0u, 0x20AB60u, 0x20AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB68u;
label_20ab68:
    // 0x20ab68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20AB68u;
    {
        const bool branch_taken_0x20ab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB68u;
        // 0x20ab6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab68) {
            ctx->pc = 0x20AB7Cu;
            goto label_20ab7c;
        }
    }
    ctx->pc = 0x20AB70u;
label_20ab70:
    // 0x20ab70: 0xc0829ec  jal         func_20A7B0
    ctx->pc = 0x20AB70u;
    SET_GPR_U32(ctx, 31, 0x20AB78u);
    ctx->pc = 0x20AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB70u;
    // 0x20ab74: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A7B0u, 0x20AB70u, 0x20AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB78u;
label_20ab78:
    // 0x20ab78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20ab7c:
    // 0x20ab7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20ab7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ab80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ab80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ab84: 0x3e00008  jr          $ra
    ctx->pc = 0x20AB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB84u;
        // 0x20ab88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AB8Cu;
}
