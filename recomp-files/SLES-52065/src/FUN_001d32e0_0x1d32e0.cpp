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

// Function: FUN_001d32e0
// Address: 0x1d32e0 - 0x1d3348
void FUN_001d32e0_0x1d32e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d32e0_0x1d32e0");
#endif

    switch (ctx->pc) {
        case 0x1d32fcu: goto label_1d32fc;
        case 0x1d3330u: goto label_1d3330;
        default: break;
    }

    ctx->pc = 0x1d32e0u;

    // 0x1d32e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d32e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d32e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d32e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d32e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d32e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d32ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d32f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d32f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d32f4: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D32F4u;
    SET_GPR_U32(ctx, 31, 0x1D32FCu);
    ctx->pc = 0x1D32F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D32F4u;
    // 0x1d32f8: 0x58400  sll         $s0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D32F4u, 0x1D32FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32FCu;
label_1d32fc:
    // 0x1d32fc: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1d32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3300: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x1d3300u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x1d3304: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d3304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d3308: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d3308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d330c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d330cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d3310: 0x24210448  addiu       $at, $at, 0x448
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 1096));
    // 0x1d3314: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1d3314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1d3318: 0x8471000c  lh          $s1, 0xC($v1)
    ctx->pc = 0x1d3318u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1d331c: 0xa470000e  sh          $s0, 0xE($v1)
    ctx->pc = 0x1d331cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 16));
    // 0x1d3320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3320u;
    {
        const bool branch_taken_0x1d3320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3320u;
        // 0x1d3324: 0xa470000c  sh          $s0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3320) {
            ctx->pc = 0x1D3330u;
            goto label_1d3330;
        }
    }
    ctx->pc = 0x1D3328u;
    // 0x1d3328: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D3328u;
    SET_GPR_U32(ctx, 31, 0x1D3330u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D3328u, 0x1D3330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3330u;
label_1d3330:
    // 0x1d3330: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d3330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d333c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d333cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3340: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3340u;
        // 0x1d3344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3348u;
}
