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

// Function: FUN_00209be8
// Address: 0x209be8 - 0x209c20
void FUN_00209be8_0x209be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209be8_0x209be8");
#endif

    switch (ctx->pc) {
        case 0x209c10u: goto label_209c10;
        default: break;
    }

    ctx->pc = 0x209be8u;

    // 0x209be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209bf0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209BF0u;
    {
        const bool branch_taken_0x209bf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x209BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BF0u;
        // 0x209bf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bf0) {
            ctx->pc = 0x209C08u;
            goto label_209c08;
        }
    }
    ctx->pc = 0x209BF8u;
    // 0x209bf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x209bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209bfc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x209bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x209c00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x209C00u;
    {
        const bool branch_taken_0x209c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C00u;
        // 0x209c04: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c00) {
            ctx->pc = 0x209C14u;
            goto label_209c14;
        }
    }
    ctx->pc = 0x209C08u;
label_209c08:
    // 0x209c08: 0xc082530  jal         func_2094C0
    ctx->pc = 0x209C08u;
    SET_GPR_U32(ctx, 31, 0x209C10u);
    ctx->pc = 0x2094C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094C0u, 0x209C08u, 0x209C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209C10u;
label_209c10:
    // 0x209c10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209c14:
    // 0x209c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209c18: 0x3e00008  jr          $ra
    ctx->pc = 0x209C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C18u;
        // 0x209c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209C20u;
}
