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

// Function: FUN_001d33c0
// Address: 0x1d33c0 - 0x1d3420
void FUN_001d33c0_0x1d33c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d33c0_0x1d33c0");
#endif

    switch (ctx->pc) {
        case 0x1d33dcu: goto label_1d33dc;
        case 0x1d3408u: goto label_1d3408;
        default: break;
    }

    ctx->pc = 0x1d33c0u;

    // 0x1d33c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d33c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d33c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d33c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d33c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d33c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d33cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d33ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d33d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d33d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d33d4: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D33D4u;
    SET_GPR_U32(ctx, 31, 0x1D33DCu);
    ctx->pc = 0x1D33D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D33D4u;
    // 0x1d33d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D33D4u, 0x1D33DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D33DCu;
label_1d33dc:
    // 0x1d33dc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d33e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d33e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d33e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d33e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d33ec: 0x24210458  addiu       $at, $at, 0x458
    ctx->pc = 0x1d33ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 1112));
    // 0x1d33f0: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1d33f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1d33f4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1d33f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d33f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D33F8u;
    {
        const bool branch_taken_0x1d33f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33F8u;
        // 0x1d33fc: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33f8) {
            ctx->pc = 0x1D3408u;
            goto label_1d3408;
        }
    }
    ctx->pc = 0x1D3400u;
    // 0x1d3400: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D3400u;
    SET_GPR_U32(ctx, 31, 0x1D3408u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D3400u, 0x1D3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3408u;
label_1d3408:
    // 0x1d3408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d3408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d340c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d340cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3418: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3418u;
        // 0x1d341c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3420u;
}
