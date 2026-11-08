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

// Function: entry_001d6468
// Address: 0x1d6468 - 0x1d6518
void entry_001d6468_0x1d6468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6468_0x1d6468");
#endif

    switch (ctx->pc) {
        case 0x1d6480u: goto label_1d6480;
        case 0x1d648cu: goto label_1d648c;
        case 0x1d649cu: goto label_1d649c;
        case 0x1d64b4u: goto label_1d64b4;
        case 0x1d64c0u: goto label_1d64c0;
        case 0x1d64d8u: goto label_1d64d8;
        case 0x1d64e4u: goto label_1d64e4;
        case 0x1d64f4u: goto label_1d64f4;
        case 0x1d6510u: goto label_1d6510;
        default: break;
    }

    ctx->pc = 0x1d6468u;

    // 0x1d6468: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d6468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d646c: 0x8ea7025c  lw          $a3, 0x25C($s5)
    ctx->pc = 0x1d646cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 604)));
    // 0x1d6470: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1d6470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d6474: 0x24a53680  addiu       $a1, $a1, 0x3680
    ctx->pc = 0x1d6474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13952));
    // 0x1d6478: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D6478u;
    SET_GPR_U32(ctx, 31, 0x1D6480u);
    ctx->pc = 0x1D647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6478u;
    // 0x1d647c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D6478u, 0x1D6480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6480u;
label_1d6480:
    // 0x1d6480: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6484: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6484u;
    SET_GPR_U32(ctx, 31, 0x1D648Cu);
    ctx->pc = 0x1D6488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6484u;
    // 0x1d6488: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6484u, 0x1D648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D648Cu;
label_1d648c:
    // 0x1d648c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d648cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6490: 0x24a536a8  addiu       $a1, $a1, 0x36A8
    ctx->pc = 0x1d6490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13992));
    // 0x1d6494: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6494u;
    SET_GPR_U32(ctx, 31, 0x1D649Cu);
    ctx->pc = 0x1D6498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6494u;
    // 0x1d6498: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6494u, 0x1D649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D649Cu;
label_1d649c:
    // 0x1d649c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d649cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d64a0: 0x8ea6002c  lw          $a2, 0x2C($s5)
    ctx->pc = 0x1d64a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x1d64a4: 0x24a536b8  addiu       $a1, $a1, 0x36B8
    ctx->pc = 0x1d64a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14008));
    // 0x1d64a8: 0x8ea70030  lw          $a3, 0x30($s5)
    ctx->pc = 0x1d64a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1d64ac: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D64ACu;
    SET_GPR_U32(ctx, 31, 0x1D64B4u);
    ctx->pc = 0x1D64B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64ACu;
    // 0x1d64b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D64ACu, 0x1D64B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64B4u;
label_1d64b4:
    // 0x1d64b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d64b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64b8: 0xc080664  jal         func_201990
    ctx->pc = 0x1D64B8u;
    SET_GPR_U32(ctx, 31, 0x1D64C0u);
    ctx->pc = 0x1D64BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64B8u;
    // 0x1d64bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D64B8u, 0x1D64C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64C0u;
label_1d64c0:
    // 0x1d64c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d64c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d64c4: 0x8ea60034  lw          $a2, 0x34($s5)
    ctx->pc = 0x1d64c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1d64c8: 0x24a536e8  addiu       $a1, $a1, 0x36E8
    ctx->pc = 0x1d64c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14056));
    // 0x1d64cc: 0x8ea70038  lw          $a3, 0x38($s5)
    ctx->pc = 0x1d64ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1d64d0: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D64D0u;
    SET_GPR_U32(ctx, 31, 0x1D64D8u);
    ctx->pc = 0x1D64D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64D0u;
    // 0x1d64d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D64D0u, 0x1D64D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64D8u;
label_1d64d8:
    // 0x1d64d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d64d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64dc: 0xc080664  jal         func_201990
    ctx->pc = 0x1D64DCu;
    SET_GPR_U32(ctx, 31, 0x1D64E4u);
    ctx->pc = 0x1D64E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64DCu;
    // 0x1d64e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D64DCu, 0x1D64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64E4u;
label_1d64e4:
    // 0x1d64e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d64e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d64e8: 0x24a53718  addiu       $a1, $a1, 0x3718
    ctx->pc = 0x1d64e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14104));
    // 0x1d64ec: 0xc080664  jal         func_201990
    ctx->pc = 0x1D64ECu;
    SET_GPR_U32(ctx, 31, 0x1D64F4u);
    ctx->pc = 0x1D64F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64ECu;
    // 0x1d64f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D64ECu, 0x1D64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64F4u;
label_1d64f4:
    // 0x1d64f4: 0x8ea30044  lw          $v1, 0x44($s5)
    ctx->pc = 0x1d64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1d64f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D64F8u;
    {
        const bool branch_taken_0x1d64f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64F8u;
        // 0x1d64fc: 0x3c100022  lui         $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64f8) {
            ctx->pc = 0x1D6518u;
            return;
        }
    }
    ctx->pc = 0x1D6500u;
    // 0x1d6500: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d6500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6504: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6508: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D6508u;
    SET_GPR_U32(ctx, 31, 0x1D6510u);
    ctx->pc = 0x1D650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6508u;
    // 0x1d650c: 0x24a53728  addiu       $a1, $a1, 0x3728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D6508u, 0x1D6510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6510u;
label_1d6510:
    // 0x1d6510: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6510u;
    {
        const bool branch_taken_0x1d6510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6510u;
        // 0x1d6514: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6510) {
            ctx->pc = 0x1D6528u;
            return;
        }
    }
    ctx->pc = 0x1D6518u;
}
