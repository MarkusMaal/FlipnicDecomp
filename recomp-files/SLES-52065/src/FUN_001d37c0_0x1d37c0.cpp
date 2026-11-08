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

// Function: FUN_001d37c0
// Address: 0x1d37c0 - 0x1d386c
void FUN_001d37c0_0x1d37c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d37c0_0x1d37c0");
#endif

    switch (ctx->pc) {
        case 0x1d3808u: goto label_1d3808;
        case 0x1d3810u: goto label_1d3810;
        case 0x1d3828u: goto label_1d3828;
        default: break;
    }

    ctx->pc = 0x1d37c0u;

    // 0x1d37c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d37c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d37c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d37c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d37c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d37c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d37ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d37d0: 0x4982b  sltu        $s3, $zero, $a0
    ctx->pc = 0x1d37d0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d37d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d37d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d37d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d37d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d37dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d37dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d37e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d37e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d37e4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d37e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d37e8: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D37E8u;
    {
        const bool branch_taken_0x1d37e8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37E8u;
        // 0x1d37ec: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37e8) {
            ctx->pc = 0x1D3840u;
            goto label_1d3840;
        }
    }
    ctx->pc = 0x1D37F0u;
    // 0x1d37f0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d37f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d37f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37f8: 0x24560480  addiu       $s6, $v0, 0x480
    ctx->pc = 0x1d37f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1d37fc: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1d37fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3800: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d3800u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3804: 0x0  nop
    ctx->pc = 0x1d3804u;
    // NOP
label_1d3808:
    // 0x1d3808: 0xc076a94  jal         func_1DAA50
    ctx->pc = 0x1D3808u;
    SET_GPR_U32(ctx, 31, 0x1D3810u);
    ctx->pc = 0x1D380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3808u;
    // 0x1d380c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAA50u, 0x1D3808u, 0x1D3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3810u;
label_1d3810:
    // 0x1d3810: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d3810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3818: 0x12150006  beq         $s0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3818u;
    {
        const bool branch_taken_0x1d3818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x1D381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3818u;
        // 0x1d381c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3818) {
            ctx->pc = 0x1D3834u;
            goto label_1d3834;
        }
    }
    ctx->pc = 0x1D3820u;
    // 0x1d3820: 0xc077240  jal         func_1DC900
    ctx->pc = 0x1D3820u;
    SET_GPR_U32(ctx, 31, 0x1D3828u);
    ctx->pc = 0x1D3824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3820u;
    // 0x1d3824: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC900u, 0x1D3820u, 0x1D3828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3828u;
label_1d3828:
    // 0x1d3828: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d3828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d382c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d3830: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1d3830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_1d3834:
    // 0x1d3834: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d3834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d3838: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D3838u;
    {
        const bool branch_taken_0x1d3838 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3838) {
            ctx->pc = 0x1D3808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3808;
        }
    }
    ctx->pc = 0x1D3840u;
label_1d3840:
    // 0x1d3840: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d3840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d384c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d384cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3850: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d3850u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3854: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d3854u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3858: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d3858u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d385c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d385cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3860: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1d3860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3864: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3864u;
        // 0x1d3868: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D386Cu;
}
