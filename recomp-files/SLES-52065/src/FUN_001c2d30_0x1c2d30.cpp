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

// Function: FUN_001c2d30
// Address: 0x1c2d30 - 0x1c2da0
void FUN_001c2d30_0x1c2d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c2d30_0x1c2d30");
#endif

    switch (ctx->pc) {
        case 0x1c2d50u: goto label_1c2d50;
        case 0x1c2d5cu: goto label_1c2d5c;
        case 0x1c2d68u: goto label_1c2d68;
        case 0x1c2d74u: goto label_1c2d74;
        case 0x1c2d80u: goto label_1c2d80;
        case 0x1c2d8cu: goto label_1c2d8c;
        default: break;
    }

    ctx->pc = 0x1c2d30u;

    // 0x1c2d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c2d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c2d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d48: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C2D48u;
    SET_GPR_U32(ctx, 31, 0x1C2D50u);
    ctx->pc = 0x1C2D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D48u;
    // 0x1c2d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C2D48u, 0x1C2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D50u;
label_1c2d50:
    // 0x1c2d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c2d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d54: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C2D54u;
    SET_GPR_U32(ctx, 31, 0x1C2D5Cu);
    ctx->pc = 0x1C2D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D54u;
    // 0x1c2d58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C2D54u, 0x1C2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D5Cu;
label_1c2d5c:
    // 0x1c2d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d60: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C2D60u;
    SET_GPR_U32(ctx, 31, 0x1C2D68u);
    ctx->pc = 0x1C2D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D60u;
    // 0x1c2d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C2D60u, 0x1C2D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D68u;
label_1c2d68:
    // 0x1c2d68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c2d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d6c: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C2D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C2D74u);
    ctx->pc = 0x1C2D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D6Cu;
    // 0x1c2d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C2D6Cu, 0x1C2D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D74u;
label_1c2d74:
    // 0x1c2d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d78: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C2D78u;
    SET_GPR_U32(ctx, 31, 0x1C2D80u);
    ctx->pc = 0x1C2D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D78u;
    // 0x1c2d7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C2D78u, 0x1C2D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D80u;
label_1c2d80:
    // 0x1c2d80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c2d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d84: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C2D84u;
    SET_GPR_U32(ctx, 31, 0x1C2D8Cu);
    ctx->pc = 0x1C2D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D84u;
    // 0x1c2d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C2D84u, 0x1C2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D8Cu;
label_1c2d8c:
    // 0x1c2d8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D98u;
        // 0x1c2d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2DA0u;
}
