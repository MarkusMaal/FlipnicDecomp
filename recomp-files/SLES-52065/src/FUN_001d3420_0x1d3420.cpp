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

// Function: FUN_001d3420
// Address: 0x1d3420 - 0x1d3480
void FUN_001d3420_0x1d3420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3420_0x1d3420");
#endif

    switch (ctx->pc) {
        case 0x1d343cu: goto label_1d343c;
        case 0x1d3468u: goto label_1d3468;
        default: break;
    }

    ctx->pc = 0x1d3420u;

    // 0x1d3420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d342c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3434: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D3434u;
    SET_GPR_U32(ctx, 31, 0x1D343Cu);
    ctx->pc = 0x1D3438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3434u;
    // 0x1d3438: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D3434u, 0x1D343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D343Cu;
label_1d343c:
    // 0x1d343c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d343cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d3440: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d3440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d3444: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d3444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d3448: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d3448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d344c: 0x2421045c  addiu       $at, $at, 0x45C
    ctx->pc = 0x1d344cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 1116));
    // 0x1d3450: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1d3450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1d3454: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1d3454u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3458u;
    {
        const bool branch_taken_0x1d3458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3458u;
        // 0x1d345c: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3458) {
            ctx->pc = 0x1D3468u;
            goto label_1d3468;
        }
    }
    ctx->pc = 0x1D3460u;
    // 0x1d3460: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D3460u;
    SET_GPR_U32(ctx, 31, 0x1D3468u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D3460u, 0x1D3468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3468u;
label_1d3468:
    // 0x1d3468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d3468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d346c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d346cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3478: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3478u;
        // 0x1d347c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3480u;
}
