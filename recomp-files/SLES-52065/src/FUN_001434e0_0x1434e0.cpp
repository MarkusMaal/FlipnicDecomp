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

// Function: FUN_001434e0
// Address: 0x1434e0 - 0x143570
void FUN_001434e0_0x1434e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001434e0_0x1434e0");
#endif

    switch (ctx->pc) {
        case 0x143530u: goto label_143530;
        case 0x143538u: goto label_143538;
        case 0x143560u: goto label_143560;
        default: break;
    }

    ctx->pc = 0x1434e0u;

    // 0x1434e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1434e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1434e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1434e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1434e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1434e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1434ec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1434ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1434f0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1434f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1434f4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1434F4u;
    {
        const bool branch_taken_0x1434f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1434F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434F4u;
        // 0x1434f8: 0xa3082b  sltu        $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1434f4) {
            ctx->pc = 0x143540u;
            goto label_143540;
        }
    }
    ctx->pc = 0x1434FCu;
    // 0x1434fc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1434fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x143500: 0x27b0003c  addiu       $s0, $sp, 0x3C
    ctx->pc = 0x143500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x143504: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x143504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x143508: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x143508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14350c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x14350cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x143510: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x143510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x143514: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x143514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x143518: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x143518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14351c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x14351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x143520: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x143520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x143524: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x143524u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x143528: 0xc050f3c  jal         func_143CF0
    ctx->pc = 0x143528u;
    SET_GPR_U32(ctx, 31, 0x143530u);
    ctx->pc = 0x14352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143528u;
    // 0x14352c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143CF0u, 0x143528u, 0x143530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143530u;
label_143530:
    // 0x143530: 0xc0401a4  jal         func_100690
    ctx->pc = 0x143530u;
    SET_GPR_U32(ctx, 31, 0x143538u);
    ctx->pc = 0x143534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143530u;
    // 0x143534: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x143530u, 0x143538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143538u;
label_143538:
    // 0x143538: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x143538u;
    {
        const bool branch_taken_0x143538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143538u;
        // 0x14353c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143538) {
            ctx->pc = 0x143564u;
            goto label_143564;
        }
    }
    ctx->pc = 0x143540u;
label_143540:
    // 0x143540: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x143540u;
    {
        const bool branch_taken_0x143540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143540) {
            ctx->pc = 0x143560u;
            goto label_143560;
        }
    }
    ctx->pc = 0x143548u;
    // 0x143548: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x143548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14354c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x14354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x143550: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x143550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x143554: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x143554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x143558: 0xc050ee0  jal         func_143B80
    ctx->pc = 0x143558u;
    SET_GPR_U32(ctx, 31, 0x143560u);
    ctx->pc = 0x14355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143558u;
    // 0x14355c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B80u, 0x143558u, 0x143560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143560u;
label_143560:
    // 0x143560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_143564:
    // 0x143564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143568: 0x3e00008  jr          $ra
    ctx->pc = 0x143568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143568u;
        // 0x14356c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143570u;
}
