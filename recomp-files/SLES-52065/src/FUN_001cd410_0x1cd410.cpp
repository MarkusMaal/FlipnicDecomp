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

// Function: FUN_001cd410
// Address: 0x1cd410 - 0x1cd52c
void FUN_001cd410_0x1cd410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cd410_0x1cd410");
#endif

    switch (ctx->pc) {
        case 0x1cd43cu: goto label_1cd43c;
        case 0x1cd490u: goto label_1cd490;
        case 0x1cd4d0u: goto label_1cd4d0;
        case 0x1cd4e0u: goto label_1cd4e0;
        case 0x1cd4e8u: goto label_1cd4e8;
        case 0x1cd4fcu: goto label_1cd4fc;
        default: break;
    }

    ctx->pc = 0x1cd410u;

    // 0x1cd410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cd410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cd414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd418: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cd418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cd41c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cd41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cd420: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cd420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cd424: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cd424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cd428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cd42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd430: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1cd430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1cd434: 0x24842eb0  addiu       $a0, $a0, 0x2EB0
    ctx->pc = 0x1cd434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11952));
    // 0x1cd438: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x1cd438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1cd43c:
    // 0x1cd43c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cd43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cd440: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x1cd440u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cd444: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x1cd444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1cd448: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x1cd448u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd44c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1cd44cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd450: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x1cd450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1cd454: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1cd454u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd458: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1cd458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1cd45c: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x1cd45cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd460: 0x24a20005  addiu       $v0, $a1, 0x5
    ctx->pc = 0x1cd460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x1cd464: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x1cd464u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd468: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x1cd468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1cd46c: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x1cd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x1cd470: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x1cd470u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd474: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1cd474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1cd478: 0xa0c20007  sb          $v0, 0x7($a2)
    ctx->pc = 0x1cd478u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd47c: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1cd47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cd480: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CD480u;
    {
        const bool branch_taken_0x1cd480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD480u;
        // 0x1cd484: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd480) {
            ctx->pc = 0x1CD43Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd43c;
        }
    }
    ctx->pc = 0x1CD488u;
    // 0x1cd488: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd48c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cd48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd490:
    // 0x1cd490: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cd490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cd494: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cd494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1cd498: 0x24422ca0  addiu       $v0, $v0, 0x2CA0
    ctx->pc = 0x1cd498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11424));
    // 0x1cd49c: 0x24632c30  addiu       $v1, $v1, 0x2C30
    ctx->pc = 0x1cd49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11312));
    // 0x1cd4a0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1cd4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cd4a4: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x1cd4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x1cd4a8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1cd4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cd4ac: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1cd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1cd4b0: 0x24520070  addiu       $s2, $v0, 0x70
    ctx->pc = 0x1cd4b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1cd4b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4b8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1cd4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cd4bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cd4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1cd4c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd4c8: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CD4C8u;
    SET_GPR_U32(ctx, 31, 0x1CD4D0u);
    ctx->pc = 0x1CD4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4C8u;
    // 0x1cd4cc: 0xac430070  sw          $v1, 0x70($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CD4C8u, 0x1CD4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4D0u;
label_1cd4d0:
    // 0x1cd4d0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1cd4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd4d4: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x1cd4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x1cd4d8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD4D8u;
    SET_GPR_U32(ctx, 31, 0x1CD4E0u);
    ctx->pc = 0x1CD4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4D8u;
    // 0x1cd4dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD4D8u, 0x1CD4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4E0u;
label_1cd4e0:
    // 0x1cd4e0: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1CD4E0u;
    SET_GPR_U32(ctx, 31, 0x1CD4E8u);
    ctx->pc = 0x1CD4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4E0u;
    // 0x1cd4e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1CD4E0u, 0x1CD4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4E8u;
label_1cd4e8:
    // 0x1cd4e8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1cd4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd4ec: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x1cd4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x1cd4f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd4f4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD4F4u;
    SET_GPR_U32(ctx, 31, 0x1CD4FCu);
    ctx->pc = 0x1CD4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4F4u;
    // 0x1cd4f8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD4F4u, 0x1CD4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD4FCu;
label_1cd4fc:
    // 0x1cd4fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cd500: 0xa0520008  sb          $s2, 0x8($v0)
    ctx->pc = 0x1cd500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x1cd504: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x1cd504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd508: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1CD508u;
    {
        const bool branch_taken_0x1cd508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD508u;
        // 0x1cd50c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd508) {
            ctx->pc = 0x1CD490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd490;
        }
    }
    ctx->pc = 0x1CD510u;
    // 0x1cd510: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cd510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cd514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cd518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd524: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD524u;
        // 0x1cd528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD52Cu;
}
