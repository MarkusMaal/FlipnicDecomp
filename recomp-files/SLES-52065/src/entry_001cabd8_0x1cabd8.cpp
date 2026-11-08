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

// Function: entry_001cabd8
// Address: 0x1cabd8 - 0x1cac2c
void entry_001cabd8_0x1cabd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cabd8_0x1cabd8");
#endif

    switch (ctx->pc) {
        case 0x1cabf0u: goto label_1cabf0;
        case 0x1cac04u: goto label_1cac04;
        case 0x1cac18u: goto label_1cac18;
        default: break;
    }

    ctx->pc = 0x1cabd8u;

    // 0x1cabd8: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CABD8u;
    {
        const bool branch_taken_0x1cabd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABD8u;
        // 0x1cabdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabd8) {
            ctx->pc = 0x1CAC2Cu;
            return;
        }
    }
    ctx->pc = 0x1CABE0u;
    // 0x1cabe0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cabe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cabe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabe8: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CABE8u;
    SET_GPR_U32(ctx, 31, 0x1CABF0u);
    ctx->pc = 0x1CABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABE8u;
    // 0x1cabec: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CABE8u, 0x1CABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABF0u;
label_1cabf0:
    // 0x1cabf0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cabf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cabf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cabf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabf8: 0x24a577e0  addiu       $a1, $a1, 0x77E0
    ctx->pc = 0x1cabf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30688));
    // 0x1cabfc: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1CABFCu;
    SET_GPR_U32(ctx, 31, 0x1CAC04u);
    ctx->pc = 0x1CAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABFCu;
    // 0x1cac00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1CABFCu, 0x1CAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC04u;
label_1cac04:
    // 0x1cac04: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cac04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cac08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac0c: 0x24a57800  addiu       $a1, $a1, 0x7800
    ctx->pc = 0x1cac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30720));
    // 0x1cac10: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CAC10u;
    SET_GPR_U32(ctx, 31, 0x1CAC18u);
    ctx->pc = 0x1CAC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC10u;
    // 0x1cac14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CAC10u, 0x1CAC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC18u;
label_1cac18:
    // 0x1cac18: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cac18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cac1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac20: 0x24a578c0  addiu       $a1, $a1, 0x78C0
    ctx->pc = 0x1cac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30912));
    // 0x1cac24: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CAC24u;
    SET_GPR_U32(ctx, 31, 0x1CAC2Cu);
    ctx->pc = 0x1CAC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC24u;
    // 0x1cac28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CAC24u, 0x1CAC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC2Cu;
}
