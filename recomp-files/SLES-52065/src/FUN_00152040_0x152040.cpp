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

// Function: FUN_00152040
// Address: 0x152040 - 0x1520a8
void FUN_00152040_0x152040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152040_0x152040");
#endif

    switch (ctx->pc) {
        case 0x152058u: goto label_152058;
        default: break;
    }

    ctx->pc = 0x152040u;

    // 0x152040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152048: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x152048u;
    {
        const bool branch_taken_0x152048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x15204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152048u;
        // 0x15204c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152048) {
            ctx->pc = 0x152080u;
            goto label_152080;
        }
    }
    ctx->pc = 0x152050u;
    // 0x152050: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x152050u;
    SET_GPR_U32(ctx, 31, 0x152058u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x152050u, 0x152058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152058u;
label_152058:
    // 0x152058: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x152058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x15205c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x15205cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x152060: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x152060u;
    {
        const bool branch_taken_0x152060 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152060) {
            ctx->pc = 0x152070u;
            goto label_152070;
        }
    }
    ctx->pc = 0x152068u;
    // 0x152068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x152068u;
    {
        const bool branch_taken_0x152068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152068u;
        // 0x15206c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152068) {
            ctx->pc = 0x152074u;
            goto label_152074;
        }
    }
    ctx->pc = 0x152070u;
label_152070:
    // 0x152070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152074:
    // 0x152074: 0xa38285f0  sb          $v0, -0x7A10($gp)
    ctx->pc = 0x152074u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936048), (uint8_t)GPR_U32(ctx, 2));
    // 0x152078: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x152078u;
    {
        const bool branch_taken_0x152078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152078u;
        // 0x15207c: 0x938285f0  lbu         $v0, -0x7A10($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152078) {
            ctx->pc = 0x15209Cu;
            goto label_15209c;
        }
    }
    ctx->pc = 0x152080u;
label_152080:
    // 0x152080: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152080u;
    {
        const bool branch_taken_0x152080 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x152080) {
            ctx->pc = 0x152090u;
            goto label_152090;
        }
    }
    ctx->pc = 0x152088u;
    // 0x152088: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x152088u;
    {
        const bool branch_taken_0x152088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152088u;
        // 0x15208c: 0x938285f0  lbu         $v0, -0x7A10($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152088) {
            ctx->pc = 0x15209Cu;
            goto label_15209c;
        }
    }
    ctx->pc = 0x152090u;
label_152090:
    // 0x152090: 0x938285f0  lbu         $v0, -0x7A10($gp)
    ctx->pc = 0x152090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936048)));
    // 0x152094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x152098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x152098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15209c:
    // 0x15209c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1520a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1520A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1520A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520A0u;
        // 0x1520a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1520A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1520A8u;
}
