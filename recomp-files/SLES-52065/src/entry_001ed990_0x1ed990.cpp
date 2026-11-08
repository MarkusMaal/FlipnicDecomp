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

// Function: entry_001ed990
// Address: 0x1ed990 - 0x1eda18
void entry_001ed990_0x1ed990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed990_0x1ed990");
#endif

    switch (ctx->pc) {
        case 0x1ed998u: goto label_1ed998;
        case 0x1ed9acu: goto label_1ed9ac;
        case 0x1ed9bcu: goto label_1ed9bc;
        case 0x1ed9ccu: goto label_1ed9cc;
        default: break;
    }

    ctx->pc = 0x1ed990u;

label_1ed990:
    // 0x1ed990: 0xc07ae8c  jal         func_1EBA30
    ctx->pc = 0x1ED990u;
    SET_GPR_U32(ctx, 31, 0x1ED998u);
    ctx->pc = 0x1ED994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED990u;
    // 0x1ed994: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA30u, 0x1ED990u, 0x1ED998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED998u;
label_1ed998:
    // 0x1ed998: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1ed998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1ed99c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1ED99Cu;
    {
        const bool branch_taken_0x1ed99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED99Cu;
        // 0x1ed9a0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed99c) {
            ctx->pc = 0x1ED990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed990;
        }
    }
    ctx->pc = 0x1ED9A4u;
    // 0x1ed9a4: 0xc07ae8c  jal         func_1EBA30
    ctx->pc = 0x1ED9A4u;
    SET_GPR_U32(ctx, 31, 0x1ED9ACu);
    ctx->pc = 0x1ED9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9A4u;
    // 0x1ed9a8: 0x2650c7d8  addiu       $s0, $s2, -0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA30u, 0x1ED9A4u, 0x1ED9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9ACu;
label_1ed9ac:
    // 0x1ed9ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1ed9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1ed9b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ed9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed9b4: 0xc07ae88  jal         func_1EBA20
    ctx->pc = 0x1ED9B4u;
    SET_GPR_U32(ctx, 31, 0x1ED9BCu);
    ctx->pc = 0x1ED9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9B4u;
    // 0x1ed9b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA20u, 0x1ED9B4u, 0x1ED9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9BCu;
label_1ed9bc:
    // 0x1ed9bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ed9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed9c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9c4: 0xc07ae88  jal         func_1EBA20
    ctx->pc = 0x1ED9C4u;
    SET_GPR_U32(ctx, 31, 0x1ED9CCu);
    ctx->pc = 0x1ED9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED9C4u;
    // 0x1ed9c8: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA20u, 0x1ED9C4u, 0x1ED9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9CCu;
label_1ed9cc:
    // 0x1ed9cc: 0x2683c7c0  addiu       $v1, $s4, -0x3840
    ctx->pc = 0x1ed9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952896));
    // 0x1ed9d0: 0x2662c700  addiu       $v0, $s3, -0x3900
    ctx->pc = 0x1ed9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952704));
    // 0x1ed9d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ed9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed9d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ed9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed9dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ed9dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed9e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1ed9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ed9e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed9e8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1ed9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1ed9ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ed9ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed9f0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1ed9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ed9f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ed9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed9f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ed9f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eda00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda04: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1eda04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1eda08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eda08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda0c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1eda0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1eda10: 0x807b704  j           func_1EDC10
    ctx->pc = 0x1EDA10u;
    ctx->pc = 0x1EDA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA10u;
    // 0x1eda14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    FUN_001edc10_0x1edc10(rdram, ctx, runtime); return;
    ctx->pc = 0x1EDA18u;
}
