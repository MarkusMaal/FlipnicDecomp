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

// Function: FUN_001f5ee8
// Address: 0x1f5ee8 - 0x1f5f48
void FUN_001f5ee8_0x1f5ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5ee8_0x1f5ee8");
#endif

    switch (ctx->pc) {
        case 0x1f5f24u: goto label_1f5f24;
        default: break;
    }

    ctx->pc = 0x1f5ee8u;

    // 0x1f5ee8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1f5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f5eec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f5eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f5ef0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1f5ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f5ef4: 0x70832018  mult1       $a0, $a0, $v1
    ctx->pc = 0x1f5ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f5ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5efc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f5f00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5f04: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f5f08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5f0c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1f5f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f5f10: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f5f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f5f14: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1f5f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f5f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f1c: 0xc07afc6  jal         func_1EBF18
    ctx->pc = 0x1F5F1Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F24u);
    ctx->pc = 0x1F5F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F1Cu;
    // 0x1f5f20: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBF18u, 0x1F5F1Cu, 0x1F5F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F24u;
label_1f5f24:
    // 0x1f5f24: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1f5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1f5f28: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x1f5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1f5f2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5f30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f5f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f5f34: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1f5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1f5f38: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f5f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F40u;
        // 0x1f5f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5F48u;
}
