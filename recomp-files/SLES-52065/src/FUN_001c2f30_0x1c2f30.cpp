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

// Function: FUN_001c2f30
// Address: 0x1c2f30 - 0x1c2fa0
void FUN_001c2f30_0x1c2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c2f30_0x1c2f30");
#endif

    switch (ctx->pc) {
        case 0x1c2f64u: goto label_1c2f64;
        case 0x1c2f70u: goto label_1c2f70;
        case 0x1c2f88u: goto label_1c2f88;
        default: break;
    }

    ctx->pc = 0x1c2f30u;

    // 0x1c2f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c2f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2f40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f44: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C2F44u;
    {
        const bool branch_taken_0x1c2f44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F44u;
        // 0x1c2f48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f44) {
            ctx->pc = 0x1C2F88u;
            goto label_1c2f88;
        }
    }
    ctx->pc = 0x1C2F4Cu;
    // 0x1c2f4c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1c2f50: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1c2f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1c2f54: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x1c2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
    // 0x1c2f58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c2f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c2f5c: 0xc0745f8  jal         func_1D17E0
    ctx->pc = 0x1C2F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F64u);
    ctx->pc = 0x1C2F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F5Cu;
    // 0x1c2f60: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17E0u, 0x1C2F5Cu, 0x1C2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F64u;
label_1c2f64:
    // 0x1c2f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f68: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1C2F68u;
    SET_GPR_U32(ctx, 31, 0x1C2F70u);
    ctx->pc = 0x1C2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F68u;
    // 0x1c2f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C2F68u, 0x1C2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F70u;
label_1c2f70:
    // 0x1c2f70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c2f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1c2f74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c2f74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c2f78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2F78u;
    {
        const bool branch_taken_0x1c2f78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F78u;
        // 0x1c2f7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f78) {
            ctx->pc = 0x1C2F8Cu;
            goto label_1c2f8c;
        }
    }
    ctx->pc = 0x1C2F80u;
    // 0x1c2f80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C2F80u;
    SET_GPR_U32(ctx, 31, 0x1C2F88u);
    ctx->pc = 0x1C2F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F80u;
    // 0x1c2f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C2F80u, 0x1C2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F88u;
label_1c2f88:
    // 0x1c2f88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c2f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c2f8c:
    // 0x1c2f8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F98u;
        // 0x1c2f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2FA0u;
}
