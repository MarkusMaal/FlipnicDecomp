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

// Function: FUN_0012a2d0
// Address: 0x12a2d0 - 0x12a33c
void FUN_0012a2d0_0x12a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a2d0_0x12a2d0");
#endif

    switch (ctx->pc) {
        case 0x12a30cu: goto label_12a30c;
        case 0x12a324u: goto label_12a324;
        default: break;
    }

    ctx->pc = 0x12a2d0u;

    // 0x12a2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a2d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a2d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12a2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12a2dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a2e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12a2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a2e4: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x12A2E4u;
    {
        const bool branch_taken_0x12a2e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2E4u;
        // 0x12a2e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2e4) {
            ctx->pc = 0x12A324u;
            goto label_12a324;
        }
    }
    ctx->pc = 0x12A2ECu;
    // 0x12a2ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x12a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x12a2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12a2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a2f4: 0x24428b20  addiu       $v0, $v0, -0x74E0
    ctx->pc = 0x12a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937376));
    // 0x12a2f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12a2fc: 0x8f828470  lw          $v0, -0x7B90($gp)
    ctx->pc = 0x12a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x12a300: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12a300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12a304: 0xc04a81c  jal         func_12A070
    ctx->pc = 0x12A304u;
    SET_GPR_U32(ctx, 31, 0x12A30Cu);
    ctx->pc = 0x12A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A304u;
    // 0x12a308: 0xaf828470  sw          $v0, -0x7B90($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A070u, 0x12A304u, 0x12A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A30Cu;
label_12a30c:
    // 0x12a30c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12a30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x12a310: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12a310u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12a314: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A314u;
    {
        const bool branch_taken_0x12a314 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A314u;
        // 0x12a318: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a314) {
            ctx->pc = 0x12A328u;
            goto label_12a328;
        }
    }
    ctx->pc = 0x12A31Cu;
    // 0x12a31c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12A31Cu;
    SET_GPR_U32(ctx, 31, 0x12A324u);
    ctx->pc = 0x12A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A31Cu;
    // 0x12a320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12A31Cu, 0x12A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A324u;
label_12a324:
    // 0x12a324: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12a324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a328:
    // 0x12a328: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a32c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12a32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a334: 0x3e00008  jr          $ra
    ctx->pc = 0x12A334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A334u;
        // 0x12a338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A33Cu;
}
