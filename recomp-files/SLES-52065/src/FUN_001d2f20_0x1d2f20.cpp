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

// Function: FUN_001d2f20
// Address: 0x1d2f20 - 0x1d2fb4
void FUN_001d2f20_0x1d2f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2f20_0x1d2f20");
#endif

    switch (ctx->pc) {
        case 0x1d2f40u: goto label_1d2f40;
        case 0x1d2f60u: goto label_1d2f60;
        case 0x1d2f88u: goto label_1d2f88;
        case 0x1d2f98u: goto label_1d2f98;
        default: break;
    }

    ctx->pc = 0x1d2f20u;

    // 0x1d2f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d2f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d2f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d2f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d2f30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d2f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d2f34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d2f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d2f38: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D2F38u;
    SET_GPR_U32(ctx, 31, 0x1D2F40u);
    ctx->pc = 0x1D2F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2F38u;
    // 0x1d2f3c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D2F38u, 0x1D2F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F40u;
label_1d2f40:
    // 0x1d2f40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d2f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f44: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d2f48: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d2f4c: 0x24452f18  addiu       $a1, $v0, 0x2F18
    ctx->pc = 0x1d2f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12056));
    // 0x1d2f50: 0x246303c0  addiu       $v1, $v1, 0x3C0
    ctx->pc = 0x1d2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1d2f54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2F54u;
    {
        const bool branch_taken_0x1d2f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F54u;
        // 0x1d2f58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f54) {
            ctx->pc = 0x1D2F64u;
            goto label_1d2f64;
        }
    }
    ctx->pc = 0x1D2F5Cu;
    // 0x1d2f5c: 0x0  nop
    ctx->pc = 0x1d2f5cu;
    // NOP
label_1d2f60:
    // 0x1d2f60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d2f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d2f64:
    // 0x1d2f64: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1d2f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d2f68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2F68u;
    {
        const bool branch_taken_0x1d2f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f68) {
            ctx->pc = 0x1D2F88u;
            goto label_1d2f88;
        }
    }
    ctx->pc = 0x1D2F70u;
    // 0x1d2f70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2f74: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D2F74u;
    {
        const bool branch_taken_0x1d2f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F74u;
        // 0x1d2f78: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f74) {
            ctx->pc = 0x1D2F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2f60;
        }
    }
    ctx->pc = 0x1D2F7Cu;
    // 0x1d2f7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f80: 0xc074bee  jal         func_1D2FB8
    ctx->pc = 0x1D2F80u;
    SET_GPR_U32(ctx, 31, 0x1D2F88u);
    ctx->pc = 0x1D2F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2F80u;
    // 0x1d2f84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FB8u, 0x1D2F80u, 0x1D2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F88u;
label_1d2f88:
    // 0x1d2f88: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2F88u;
    {
        const bool branch_taken_0x1d2f88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F88u;
        // 0x1d2f8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f88) {
            ctx->pc = 0x1D2F9Cu;
            goto label_1d2f9c;
        }
    }
    ctx->pc = 0x1D2F90u;
    // 0x1d2f90: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D2F90u;
    SET_GPR_U32(ctx, 31, 0x1D2F98u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D2F90u, 0x1D2F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F98u;
label_1d2f98:
    // 0x1d2f98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d2f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f9c:
    // 0x1d2f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d2fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d2fa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d2fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2fa8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d2fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2fac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FACu;
        // 0x1d2fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2FB4u;
}
