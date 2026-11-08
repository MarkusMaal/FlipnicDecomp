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

// Function: FUN_001ec168
// Address: 0x1ec168 - 0x1ec1d0
void FUN_001ec168_0x1ec168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec168_0x1ec168");
#endif

    switch (ctx->pc) {
        case 0x1ec198u: goto label_1ec198;
        case 0x1ec1a0u: goto label_1ec1a0;
        case 0x1ec1b8u: goto label_1ec1b8;
        default: break;
    }

    ctx->pc = 0x1ec168u;

    // 0x1ec168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ec168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec16c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ec16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ec170: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ec170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ec174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec17c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1ec17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1ec180: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ec180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ec184: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1ec184u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1ec188: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC188u;
    {
        const bool branch_taken_0x1ec188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec188) {
            ctx->pc = 0x1EC198u;
            goto label_1ec198;
        }
    }
    ctx->pc = 0x1EC190u;
    // 0x1ec190: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EC190u;
    SET_GPR_U32(ctx, 31, 0x1EC198u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EC190u, 0x1EC198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC198u;
label_1ec198:
    // 0x1ec198: 0xc07acd8  jal         func_1EB360
    ctx->pc = 0x1EC198u;
    SET_GPR_U32(ctx, 31, 0x1EC1A0u);
    ctx->pc = 0x1EC19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC198u;
    // 0x1ec19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB360u, 0x1EC198u, 0x1EC1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1A0u;
label_1ec1a0:
    // 0x1ec1a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1a4: 0xf  sync
    ctx->pc = 0x1ec1a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec1a8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC1A8u;
    {
        const bool branch_taken_0x1ec1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1A8u;
        // 0x1ec1ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1a8) {
            ctx->pc = 0x1EC1BCu;
            goto label_1ec1bc;
        }
    }
    ctx->pc = 0x1EC1B0u;
    // 0x1ec1b0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EC1B0u;
    SET_GPR_U32(ctx, 31, 0x1EC1B8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EC1B0u, 0x1EC1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1B8u;
label_1ec1b8:
    // 0x1ec1b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ec1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec1bc:
    // 0x1ec1bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ec1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec1c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ec1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1C8u;
        // 0x1ec1cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC1D0u;
}
