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

// Function: entry_001df930
// Address: 0x1df930 - 0x1df9a0
void entry_001df930_0x1df930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df930_0x1df930");
#endif

    switch (ctx->pc) {
        case 0x1df940u: goto label_1df940;
        case 0x1df958u: goto label_1df958;
        case 0x1df968u: goto label_1df968;
        case 0x1df974u: goto label_1df974;
        case 0x1df97cu: goto label_1df97c;
        case 0x1df988u: goto label_1df988;
        default: break;
    }

    ctx->pc = 0x1df930u;

    // 0x1df930: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x1df930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1df934: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1df934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df938: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DF938u;
    SET_GPR_U32(ctx, 31, 0x1DF940u);
    ctx->pc = 0x1DF93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF938u;
    // 0x1df93c: 0x20a8021  addu        $s0, $s0, $t2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DF938u, 0x1DF940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF940u;
label_1df940:
    // 0x1df940: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1df940u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1df944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1df944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df948: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1df948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1df94c: 0xdc243828  ld          $a0, 0x3828($at)
    ctx->pc = 0x1df94cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x223828u));
    // 0x1df950: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF950u;
    SET_GPR_U32(ctx, 31, 0x1DF958u);
    ctx->pc = 0x1DF954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF950u;
    // 0x1df954: 0xfe220030  sd          $v0, 0x30($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF950u, 0x1DF958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF958u;
label_1df958:
    // 0x1df958: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1df958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1df95c: 0xdc243830  ld          $a0, 0x3830($at)
    ctx->pc = 0x1df95cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x223830u));
    // 0x1df960: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF960u;
    SET_GPR_U32(ctx, 31, 0x1DF968u);
    ctx->pc = 0x1DF964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF960u;
    // 0x1df964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF960u, 0x1DF968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF968u;
label_1df968:
    // 0x1df968: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x1df968u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1df96c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF96Cu;
    SET_GPR_U32(ctx, 31, 0x1DF974u);
    ctx->pc = 0x1DF970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF96Cu;
    // 0x1df970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF96Cu, 0x1DF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF974u;
label_1df974:
    // 0x1df974: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1DF974u;
    SET_GPR_U32(ctx, 31, 0x1DF97Cu);
    ctx->pc = 0x1DF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF974u;
    // 0x1df978: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1DF974u, 0x1DF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF97Cu;
label_1df97c:
    // 0x1df97c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1df97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df980: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DF980u;
    SET_GPR_U32(ctx, 31, 0x1DF988u);
    ctx->pc = 0x1DF984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF980u;
    // 0x1df984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DF980u, 0x1DF988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF988u;
label_1df988:
    // 0x1df988: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF988u;
    {
        const bool branch_taken_0x1df988 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1df988) {
            ctx->pc = 0x1DF9A0u;
            return;
        }
    }
    ctx->pc = 0x1DF990u;
    // 0x1df990: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1df990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1df994: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1df994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1df998: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DF998u;
    SET_GPR_U32(ctx, 31, 0x1DF9A0u);
    ctx->pc = 0x1DF99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF998u;
    // 0x1df99c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DF998u, 0x1DF9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9A0u;
}
