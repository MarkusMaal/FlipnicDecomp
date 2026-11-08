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

// Function: GetStagePlayabilityStatus
// Address: 0x1cb960 - 0x1cba04
void GetStagePlayabilityStatus_0x1cb960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStagePlayabilityStatus_0x1cb960");
#endif

    switch (ctx->pc) {
        case 0x1cb974u: goto label_1cb974;
        case 0x1cb9dcu: goto label_1cb9dc;
        default: break;
    }

    ctx->pc = 0x1cb960u;

    // 0x1cb960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb96c: 0xc072f04  jal         func_1CBC10
    ctx->pc = 0x1CB96Cu;
    SET_GPR_U32(ctx, 31, 0x1CB974u);
    ctx->pc = 0x1CB970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB96Cu;
    // 0x1cb970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBC10u, 0x1CB96Cu, 0x1CB974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB974u;
label_1cb974:
    // 0x1cb974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb978: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB978u;
    {
        const bool branch_taken_0x1cb978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB978u;
        // 0x1cb97c: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb978) {
            ctx->pc = 0x1CB988u;
            goto label_1cb988;
        }
    }
    ctx->pc = 0x1CB980u;
    // 0x1cb980: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1CB980u;
    {
        const bool branch_taken_0x1cb980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB980u;
        // 0x1cb984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb980) {
            ctx->pc = 0x1CB9F4u;
            goto label_1cb9f4;
        }
    }
    ctx->pc = 0x1CB988u;
label_1cb988:
    // 0x1cb988: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1cb988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cb98c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1cb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1cb990: 0x9042274c  lbu         $v0, 0x274C($v0)
    ctx->pc = 0x1cb990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10060)));
    // 0x1cb994: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1cb994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1cb998: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CB998u;
    {
        const bool branch_taken_0x1cb998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB998u;
        // 0x1cb99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb998) {
            ctx->pc = 0x1CB9D4u;
            goto label_1cb9d4;
        }
    }
    ctx->pc = 0x1CB9A0u;
    // 0x1cb9a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb9a4: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB9A4u;
    {
        const bool branch_taken_0x1cb9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9A4u;
        // 0x1cb9a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9a4) {
            ctx->pc = 0x1CB9C4u;
            goto label_1cb9c4;
        }
    }
    ctx->pc = 0x1CB9ACu;
    // 0x1cb9ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb9b0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB9B0u;
    {
        const bool branch_taken_0x1cb9b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9B0u;
        // 0x1cb9b4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9b0) {
            ctx->pc = 0x1CB9C0u;
            goto label_1cb9c0;
        }
    }
    ctx->pc = 0x1CB9B8u;
    // 0x1cb9b8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB9B8u;
    {
        const bool branch_taken_0x1cb9b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb9b8) {
            ctx->pc = 0x1CB9CCu;
            goto label_1cb9cc;
        }
    }
    ctx->pc = 0x1CB9C0u;
label_1cb9c0:
    // 0x1cb9c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cb9c4:
    // 0x1cb9c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CB9C4u;
    {
        const bool branch_taken_0x1cb9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9C4u;
        // 0x1cb9c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9c4) {
            ctx->pc = 0x1CB9F8u;
            goto label_1cb9f8;
        }
    }
    ctx->pc = 0x1CB9CCu;
label_1cb9cc:
    // 0x1cb9cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB9CCu;
    {
        const bool branch_taken_0x1cb9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9CCu;
        // 0x1cb9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9cc) {
            ctx->pc = 0x1CB9F4u;
            goto label_1cb9f4;
        }
    }
    ctx->pc = 0x1CB9D4u;
label_1cb9d4:
    // 0x1cb9d4: 0xc072ed0  jal         func_1CBB40
    ctx->pc = 0x1CB9D4u;
    SET_GPR_U32(ctx, 31, 0x1CB9DCu);
    ctx->pc = 0x1CBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBB40u, 0x1CB9D4u, 0x1CB9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9DCu;
label_1cb9dc:
    // 0x1cb9dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cb9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb9e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB9E0u;
    {
        const bool branch_taken_0x1cb9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb9e0) {
            ctx->pc = 0x1CB9F0u;
            goto label_1cb9f0;
        }
    }
    ctx->pc = 0x1CB9E8u;
    // 0x1cb9e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB9E8u;
    {
        const bool branch_taken_0x1cb9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9E8u;
        // 0x1cb9ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9e8) {
            ctx->pc = 0x1CB9F4u;
            goto label_1cb9f4;
        }
    }
    ctx->pc = 0x1CB9F0u;
label_1cb9f0:
    // 0x1cb9f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cb9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cb9f4:
    // 0x1cb9f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb9f8:
    // 0x1cb9f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9FCu;
        // 0x1cba00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBA04u;
}
