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

// Function: entry_001e0874
// Address: 0x1e0874 - 0x1e08e0
void entry_001e0874_0x1e0874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0874_0x1e0874");
#endif

    switch (ctx->pc) {
        case 0x1e0888u: goto label_1e0888;
        case 0x1e0898u: goto label_1e0898;
        case 0x1e08a8u: goto label_1e08a8;
        case 0x1e08b4u: goto label_1e08b4;
        case 0x1e08bcu: goto label_1e08bc;
        case 0x1e08c8u: goto label_1e08c8;
        default: break;
    }

    ctx->pc = 0x1e0874u;

    // 0x1e0874: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e0874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1e0878: 0xdc303948  ld          $s0, 0x3948($at)
    ctx->pc = 0x1e0878u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x223948u));
    // 0x1e087c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e087cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0880: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E0880u;
    SET_GPR_U32(ctx, 31, 0x1E0888u);
    ctx->pc = 0x1E0884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0880u;
    // 0x1e0884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E0880u, 0x1E0888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0888u;
label_1e0888:
    // 0x1e0888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e088c: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1e088cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x1e0890: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E0890u;
    SET_GPR_U32(ctx, 31, 0x1E0898u);
    ctx->pc = 0x1E0894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0890u;
    // 0x1e0894: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E0890u, 0x1E0898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0898u;
label_1e0898:
    // 0x1e0898: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e0898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1e089c: 0xdc243950  ld          $a0, 0x3950($at)
    ctx->pc = 0x1e089cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x223950u));
    // 0x1e08a0: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E08A0u;
    SET_GPR_U32(ctx, 31, 0x1E08A8u);
    ctx->pc = 0x1E08A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08A0u;
    // 0x1e08a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E08A0u, 0x1E08A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08A8u;
label_1e08a8:
    // 0x1e08a8: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x1e08a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1e08ac: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1E08ACu;
    SET_GPR_U32(ctx, 31, 0x1E08B4u);
    ctx->pc = 0x1E08B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08ACu;
    // 0x1e08b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1E08ACu, 0x1E08B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08B4u;
label_1e08b4:
    // 0x1e08b4: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1E08B4u;
    SET_GPR_U32(ctx, 31, 0x1E08BCu);
    ctx->pc = 0x1E08B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08B4u;
    // 0x1e08b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1E08B4u, 0x1E08BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08BCu;
label_1e08bc:
    // 0x1e08bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e08bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e08c0: 0xc08218c  jal         func_208630
    ctx->pc = 0x1E08C0u;
    SET_GPR_U32(ctx, 31, 0x1E08C8u);
    ctx->pc = 0x1E08C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08C0u;
    // 0x1e08c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1E08C0u, 0x1E08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08C8u;
label_1e08c8:
    // 0x1e08c8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E08C8u;
    {
        const bool branch_taken_0x1e08c8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1e08c8) {
            ctx->pc = 0x1E08E0u;
            return;
        }
    }
    ctx->pc = 0x1E08D0u;
    // 0x1e08d0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1e08d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1e08d4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1e08d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1e08d8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1E08D8u;
    SET_GPR_U32(ctx, 31, 0x1E08E0u);
    ctx->pc = 0x1E08DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08D8u;
    // 0x1e08dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1E08D8u, 0x1E08E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08E0u;
}
