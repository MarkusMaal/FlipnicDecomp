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

// Function: FUN_00115f20
// Address: 0x115f20 - 0x115fb0
void FUN_00115f20_0x115f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115f20_0x115f20");
#endif

    switch (ctx->pc) {
        case 0x115f80u: goto label_115f80;
        case 0x115f98u: goto label_115f98;
        default: break;
    }

    ctx->pc = 0x115f20u;

    // 0x115f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x115f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x115f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x115f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f34: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x115F34u;
    {
        const bool branch_taken_0x115f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F34u;
        // 0x115f38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f34) {
            ctx->pc = 0x115F98u;
            goto label_115f98;
        }
    }
    ctx->pc = 0x115F3Cu;
    // 0x115f3c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x115f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x115f40: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x115f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
    // 0x115f44: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x115F44u;
    {
        const bool branch_taken_0x115f44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F44u;
        // 0x115f48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f44) {
            ctx->pc = 0x115F80u;
            goto label_115f80;
        }
    }
    ctx->pc = 0x115F4Cu;
    // 0x115f4c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x115f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x115f50: 0x2442a130  addiu       $v0, $v0, -0x5ED0
    ctx->pc = 0x115f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943024));
    // 0x115f54: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x115F54u;
    {
        const bool branch_taken_0x115f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F54u;
        // 0x115f58: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f54) {
            ctx->pc = 0x115F80u;
            goto label_115f80;
        }
    }
    ctx->pc = 0x115F5Cu;
    // 0x115f5c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x115f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x115f60: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x115f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x115f64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x115F64u;
    {
        const bool branch_taken_0x115f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F64u;
        // 0x115f68: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f64) {
            ctx->pc = 0x115F80u;
            goto label_115f80;
        }
    }
    ctx->pc = 0x115F6Cu;
    // 0x115f6c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x115f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x115f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f74: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x115f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x115f78: 0xc0418ec  jal         func_1063B0
    ctx->pc = 0x115F78u;
    SET_GPR_U32(ctx, 31, 0x115F80u);
    ctx->pc = 0x115F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F78u;
    // 0x115f7c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063B0u, 0x115F78u, 0x115F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F80u;
label_115f80:
    // 0x115f80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x115f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x115f84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x115f84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x115f88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115F88u;
    {
        const bool branch_taken_0x115f88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x115F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F88u;
        // 0x115f8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f88) {
            ctx->pc = 0x115F9Cu;
            goto label_115f9c;
        }
    }
    ctx->pc = 0x115F90u;
    // 0x115f90: 0xc0401a4  jal         func_100690
    ctx->pc = 0x115F90u;
    SET_GPR_U32(ctx, 31, 0x115F98u);
    ctx->pc = 0x115F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F90u;
    // 0x115f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x115F90u, 0x115F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F98u;
label_115f98:
    // 0x115f98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x115f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115f9c:
    // 0x115f9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115fa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x115fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x115FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FA8u;
        // 0x115fac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115FB0u;
}
