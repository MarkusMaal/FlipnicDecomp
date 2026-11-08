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

// Function: entry_001cd958
// Address: 0x1cd958 - 0x1cd9f8
void entry_001cd958_0x1cd958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd958_0x1cd958");
#endif

    switch (ctx->pc) {
        case 0x1cd968u: goto label_1cd968;
        case 0x1cd980u: goto label_1cd980;
        case 0x1cd9a0u: goto label_1cd9a0;
        case 0x1cd9b4u: goto label_1cd9b4;
        case 0x1cd9c8u: goto label_1cd9c8;
        case 0x1cd9dcu: goto label_1cd9dc;
        default: break;
    }

    ctx->pc = 0x1cd958u;

label_1cd958:
    // 0x1cd958: 0x26650006  addiu       $a1, $s3, 0x6
    ctx->pc = 0x1cd958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x1cd95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd960: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CD960u;
    SET_GPR_U32(ctx, 31, 0x1CD968u);
    ctx->pc = 0x1CD964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD960u;
    // 0x1cd964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CD960u, 0x1CD968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD968u;
label_1cd968:
    // 0x1cd968: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1cd968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1cd96c: 0x26650006  addiu       $a1, $s3, 0x6
    ctx->pc = 0x1cd96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x1cd970: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x1cd970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd978: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD978u;
    SET_GPR_U32(ctx, 31, 0x1CD980u);
    ctx->pc = 0x1CD97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD978u;
    // 0x1cd97c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD978u, 0x1CD980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD980u;
label_1cd980:
    // 0x1cd980: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1cd980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1cd984: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cd984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cd988: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1cd988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd98c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CD98Cu;
    {
        const bool branch_taken_0x1cd98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD98Cu;
        // 0x1cd990: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd98c) {
            ctx->pc = 0x1CD958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd958;
        }
    }
    ctx->pc = 0x1CD994u;
    // 0x1cd994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd998: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1CD998u;
    SET_GPR_U32(ctx, 31, 0x1CD9A0u);
    ctx->pc = 0x1CD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD998u;
    // 0x1cd99c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1CD998u, 0x1CD9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9A0u;
label_1cd9a0:
    // 0x1cd9a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9a8: 0x24a584f0  addiu       $a1, $a1, -0x7B10
    ctx->pc = 0x1cd9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935792));
    // 0x1cd9ac: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1CD9ACu;
    SET_GPR_U32(ctx, 31, 0x1CD9B4u);
    ctx->pc = 0x1CD9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9ACu;
    // 0x1cd9b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1CD9ACu, 0x1CD9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9B4u;
label_1cd9b4:
    // 0x1cd9b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd9b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9bc: 0x24a58630  addiu       $a1, $a1, -0x79D0
    ctx->pc = 0x1cd9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936112));
    // 0x1cd9c0: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CD9C0u;
    SET_GPR_U32(ctx, 31, 0x1CD9C8u);
    ctx->pc = 0x1CD9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9C0u;
    // 0x1cd9c4: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CD9C0u, 0x1CD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9C8u;
label_1cd9c8:
    // 0x1cd9c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9d0: 0x24a587d0  addiu       $a1, $a1, -0x7830
    ctx->pc = 0x1cd9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936528));
    // 0x1cd9d4: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CD9D4u;
    SET_GPR_U32(ctx, 31, 0x1CD9DCu);
    ctx->pc = 0x1CD9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9D4u;
    // 0x1cd9d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CD9D4u, 0x1CD9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9DCu;
label_1cd9dc:
    // 0x1cd9dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cd9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd9e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cd9e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd9e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cd9e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd9e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9F0u;
        // 0x1cd9f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD9F8u;
}
