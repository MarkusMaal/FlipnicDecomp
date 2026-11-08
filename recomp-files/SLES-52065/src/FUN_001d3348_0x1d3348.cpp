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

// Function: FUN_001d3348
// Address: 0x1d3348 - 0x1d33c0
void FUN_001d3348_0x1d3348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3348_0x1d3348");
#endif

    switch (ctx->pc) {
        case 0x1d336cu: goto label_1d336c;
        case 0x1d33a4u: goto label_1d33a4;
        default: break;
    }

    ctx->pc = 0x1d3348u;

    // 0x1d3348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d334c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d334cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3350: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d3350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3358: 0x68400  sll         $s0, $a2, 16
    ctx->pc = 0x1d3358u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1d335c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d335cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3360: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d3360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d3364: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D3364u;
    SET_GPR_U32(ctx, 31, 0x1D336Cu);
    ctx->pc = 0x1D3368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3364u;
    // 0x1d3368: 0x58c00  sll         $s1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D3364u, 0x1D336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D336Cu;
label_1d336c:
    // 0x1d336c: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x1d336cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d3370: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x1d3370u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x1d3374: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1d3374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d3378: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x1d3378u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x1d337c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d337cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d3380: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d3380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d3384: 0x24210448  addiu       $at, $at, 0x448
    ctx->pc = 0x1d3384u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 1096));
    // 0x1d3388: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1d3388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1d338c: 0xa470000e  sh          $s0, 0xE($v1)
    ctx->pc = 0x1d338cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 16));
    // 0x1d3390: 0x8470000c  lh          $s0, 0xC($v1)
    ctx->pc = 0x1d3390u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1d3394: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3394u;
    {
        const bool branch_taken_0x1d3394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3394u;
        // 0x1d3398: 0xa471000c  sh          $s1, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3394) {
            ctx->pc = 0x1D33A4u;
            goto label_1d33a4;
        }
    }
    ctx->pc = 0x1D339Cu;
    // 0x1d339c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D339Cu;
    SET_GPR_U32(ctx, 31, 0x1D33A4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D339Cu, 0x1D33A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D33A4u;
label_1d33a4:
    // 0x1d33a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d33a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d33a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d33a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d33ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d33acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d33b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d33b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d33b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d33b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d33b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D33B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D33BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33B8u;
        // 0x1d33bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D33B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D33C0u;
}
