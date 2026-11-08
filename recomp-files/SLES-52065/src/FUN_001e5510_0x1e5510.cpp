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

// Function: FUN_001e5510
// Address: 0x1e5510 - 0x1e55c4
void FUN_001e5510_0x1e5510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5510_0x1e5510");
#endif

    switch (ctx->pc) {
        case 0x1e5548u: goto label_1e5548;
        case 0x1e5594u: goto label_1e5594;
        default: break;
    }

    ctx->pc = 0x1e5510u;

    // 0x1e5510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e5514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e5514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e5518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e551c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5528: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1e5528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e552c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e552cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5530: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e5530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e5534: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e5538: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5538u;
    {
        const bool branch_taken_0x1e5538 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5538u;
        // 0x1e553c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5538) {
            ctx->pc = 0x1E5550u;
            goto label_1e5550;
        }
    }
    ctx->pc = 0x1E5540u;
    // 0x1e5540: 0xc080490  jal         func_201240
    ctx->pc = 0x1E5540u;
    SET_GPR_U32(ctx, 31, 0x1E5548u);
    ctx->pc = 0x1E5544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5540u;
    // 0x1e5544: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201240u, 0x1E5540u, 0x1E5548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5548u;
label_1e5548:
    // 0x1e5548: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5548u;
    {
        const bool branch_taken_0x1e5548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5548u;
        // 0x1e554c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5548) {
            ctx->pc = 0x1E556Cu;
            goto label_1e556c;
        }
    }
    ctx->pc = 0x1E5550u;
label_1e5550:
    // 0x1e5550: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e5550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e5554: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5558: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e5558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e555c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e555cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e5560: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e5560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5564: 0x0  nop
    ctx->pc = 0x1e5564u;
    // NOP
    // 0x1e5568: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e5568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e556c:
    // 0x1e556c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5570: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5570u;
    {
        const bool branch_taken_0x1e5570 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5570) {
            ctx->pc = 0x1E5580u;
            goto label_1e5580;
        }
    }
    ctx->pc = 0x1E5578u;
    // 0x1e5578: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E5578u;
    {
        const bool branch_taken_0x1e5578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5578u;
        // 0x1e557c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5578) {
            ctx->pc = 0x1E55B0u;
            goto label_1e55b0;
        }
    }
    ctx->pc = 0x1E5580u;
label_1e5580:
    // 0x1e5580: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E5580u;
    {
        const bool branch_taken_0x1e5580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5580u;
        // 0x1e5584: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5580) {
            ctx->pc = 0x1E55ACu;
            goto label_1e55ac;
        }
    }
    ctx->pc = 0x1E5588u;
    // 0x1e5588: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e5588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e558c: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x1E558Cu;
    SET_GPR_U32(ctx, 31, 0x1E5594u);
    ctx->pc = 0x1E5590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E558Cu;
    // 0x1e5590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E558Cu, 0x1E5594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5594u;
label_1e5594:
    // 0x1e5594: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5598: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5598u;
    {
        const bool branch_taken_0x1e5598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5598) {
            ctx->pc = 0x1E55A8u;
            goto label_1e55a8;
        }
    }
    ctx->pc = 0x1E55A0u;
    // 0x1e55a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E55A0u;
    {
        const bool branch_taken_0x1e55a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55A0u;
        // 0x1e55a4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55a0) {
            ctx->pc = 0x1E55ACu;
            goto label_1e55ac;
        }
    }
    ctx->pc = 0x1E55A8u;
label_1e55a8:
    // 0x1e55a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e55a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e55ac:
    // 0x1e55ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e55acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e55b0:
    // 0x1e55b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e55b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e55b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e55b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e55b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e55b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e55bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E55BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55BCu;
        // 0x1e55c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E55BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E55C4u;
}
