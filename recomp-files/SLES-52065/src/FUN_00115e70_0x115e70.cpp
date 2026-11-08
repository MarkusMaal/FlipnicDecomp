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

// Function: FUN_00115e70
// Address: 0x115e70 - 0x115f00
void FUN_00115e70_0x115e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115e70_0x115e70");
#endif

    switch (ctx->pc) {
        case 0x115ed0u: goto label_115ed0;
        case 0x115ee8u: goto label_115ee8;
        default: break;
    }

    ctx->pc = 0x115e70u;

    // 0x115e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x115e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x115e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x115e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e84: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x115E84u;
    {
        const bool branch_taken_0x115e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E84u;
        // 0x115e88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e84) {
            ctx->pc = 0x115EE8u;
            goto label_115ee8;
        }
    }
    ctx->pc = 0x115E8Cu;
    // 0x115e8c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x115e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x115e90: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x115e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
    // 0x115e94: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x115E94u;
    {
        const bool branch_taken_0x115e94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E94u;
        // 0x115e98: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e94) {
            ctx->pc = 0x115ED0u;
            goto label_115ed0;
        }
    }
    ctx->pc = 0x115E9Cu;
    // 0x115e9c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x115e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x115ea0: 0x2442a130  addiu       $v0, $v0, -0x5ED0
    ctx->pc = 0x115ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943024));
    // 0x115ea4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x115EA4u;
    {
        const bool branch_taken_0x115ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x115EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EA4u;
        // 0x115ea8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ea4) {
            ctx->pc = 0x115ED0u;
            goto label_115ed0;
        }
    }
    ctx->pc = 0x115EACu;
    // 0x115eac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x115eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x115eb0: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x115eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x115eb4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x115EB4u;
    {
        const bool branch_taken_0x115eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x115EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EB4u;
        // 0x115eb8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115eb4) {
            ctx->pc = 0x115ED0u;
            goto label_115ed0;
        }
    }
    ctx->pc = 0x115EBCu;
    // 0x115ebc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x115ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x115ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ec4: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x115ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x115ec8: 0xc0418ec  jal         func_1063B0
    ctx->pc = 0x115EC8u;
    SET_GPR_U32(ctx, 31, 0x115ED0u);
    ctx->pc = 0x115ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EC8u;
    // 0x115ecc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063B0u, 0x115EC8u, 0x115ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115ED0u;
label_115ed0:
    // 0x115ed0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x115ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x115ed4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x115ed4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x115ed8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115ED8u;
    {
        const bool branch_taken_0x115ed8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x115EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115ED8u;
        // 0x115edc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ed8) {
            ctx->pc = 0x115EECu;
            goto label_115eec;
        }
    }
    ctx->pc = 0x115EE0u;
    // 0x115ee0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x115EE0u;
    SET_GPR_U32(ctx, 31, 0x115EE8u);
    ctx->pc = 0x115EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EE0u;
    // 0x115ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x115EE0u, 0x115EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EE8u;
label_115ee8:
    // 0x115ee8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x115ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115eec:
    // 0x115eec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115ef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x115ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x115EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EF8u;
        // 0x115efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115F00u;
}
