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

// Function: FUN_001ee4f8
// Address: 0x1ee4f8 - 0x1ee5a8
void FUN_001ee4f8_0x1ee4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee4f8_0x1ee4f8");
#endif

    switch (ctx->pc) {
        case 0x1ee51cu: goto label_1ee51c;
        case 0x1ee548u: goto label_1ee548;
        default: break;
    }

    ctx->pc = 0x1ee4f8u;

    // 0x1ee4f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ee4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ee4fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ee4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ee500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ee504: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ee504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ee508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee50c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ee50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ee510: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ee510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ee514: 0xc07b83e  jal         func_1EE0F8
    ctx->pc = 0x1EE514u;
    SET_GPR_U32(ctx, 31, 0x1EE51Cu);
    ctx->pc = 0x1EE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE514u;
    // 0x1ee518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0F8u, 0x1EE514u, 0x1EE51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE51Cu;
label_1ee51c:
    // 0x1ee51c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ee51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee520: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1ee520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ee524: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1ee524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ee528: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ee528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee52c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1ee52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x1ee530: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x1ee530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x1ee534: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1ee534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1ee538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ee538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee53c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1ee53cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1ee540: 0xc07b92a  jal         func_1EE4A8
    ctx->pc = 0x1EE540u;
    SET_GPR_U32(ctx, 31, 0x1EE548u);
    ctx->pc = 0x1EE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE540u;
    // 0x1ee544: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE4A8u, 0x1EE540u, 0x1EE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE548u;
label_1ee548:
    // 0x1ee548: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ee548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee54c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE54Cu;
    {
        const bool branch_taken_0x1ee54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee54c) {
            ctx->pc = 0x1EE550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE54Cu;
            // 0x1ee550: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE564u;
            goto label_1ee564;
        }
    }
    ctx->pc = 0x1EE554u;
    // 0x1ee554: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1ee554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1ee558: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x1ee558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x1ee55c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE55Cu;
    {
        const bool branch_taken_0x1ee55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE55Cu;
        // 0x1ee560: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee55c) {
            ctx->pc = 0x1EE574u;
            goto label_1ee574;
        }
    }
    ctx->pc = 0x1EE564u;
label_1ee564:
    // 0x1ee564: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ee564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ee568: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1ee568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1ee56c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1ee56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1ee570: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x1ee570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_1ee574:
    // 0x1ee574: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ee574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee578: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee57c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ee57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee580: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1ee580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1ee584: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ee584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee588: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee58c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ee58cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee598: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee59c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ee59cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5a0: 0x807b714  j           func_1EDC50
    ctx->pc = 0x1EE5A0u;
    ctx->pc = 0x1EE5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE5A0u;
    // 0x1ee5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC50u;
    FUN_001edc50_0x1edc50(rdram, ctx, runtime); return;
    ctx->pc = 0x1EE5A8u;
}
