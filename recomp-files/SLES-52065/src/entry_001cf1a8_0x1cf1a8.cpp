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

// Function: entry_001cf1a8
// Address: 0x1cf1a8 - 0x1cf230
void entry_001cf1a8_0x1cf1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf1a8_0x1cf1a8");
#endif

    switch (ctx->pc) {
        case 0x1cf1b0u: goto label_1cf1b0;
        case 0x1cf1bcu: goto label_1cf1bc;
        case 0x1cf1c4u: goto label_1cf1c4;
        case 0x1cf1d0u: goto label_1cf1d0;
        case 0x1cf1d8u: goto label_1cf1d8;
        case 0x1cf1e4u: goto label_1cf1e4;
        case 0x1cf1f8u: goto label_1cf1f8;
        case 0x1cf204u: goto label_1cf204;
        default: break;
    }

    ctx->pc = 0x1cf1a8u;

    // 0x1cf1a8: 0xc073178  jal         func_1CC5E0
    ctx->pc = 0x1CF1A8u;
    SET_GPR_U32(ctx, 31, 0x1CF1B0u);
    ctx->pc = 0x1CC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E0u, 0x1CF1A8u, 0x1CF1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1B0u;
label_1cf1b0:
    // 0x1cf1b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1b4: 0xc072f34  jal         func_1CBCD0
    ctx->pc = 0x1CF1B4u;
    SET_GPR_U32(ctx, 31, 0x1CF1BCu);
    ctx->pc = 0x1CF1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1B4u;
    // 0x1cf1b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCD0u, 0x1CF1B4u, 0x1CF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1BCu;
label_1cf1bc:
    // 0x1cf1bc: 0xc073178  jal         func_1CC5E0
    ctx->pc = 0x1CF1BCu;
    SET_GPR_U32(ctx, 31, 0x1CF1C4u);
    ctx->pc = 0x1CF1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1BCu;
    // 0x1cf1c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E0u, 0x1CF1BCu, 0x1CF1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C4u;
label_1cf1c4:
    // 0x1cf1c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1c8: 0xc072f78  jal         func_1CBDE0
    ctx->pc = 0x1CF1C8u;
    SET_GPR_U32(ctx, 31, 0x1CF1D0u);
    ctx->pc = 0x1CF1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1C8u;
    // 0x1cf1cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBDE0u, 0x1CF1C8u, 0x1CF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1D0u;
label_1cf1d0:
    // 0x1cf1d0: 0xc073178  jal         func_1CC5E0
    ctx->pc = 0x1CF1D0u;
    SET_GPR_U32(ctx, 31, 0x1CF1D8u);
    ctx->pc = 0x1CF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1D0u;
    // 0x1cf1d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E0u, 0x1CF1D0u, 0x1CF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1D8u;
label_1cf1d8:
    // 0x1cf1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1dc: 0xc072fb0  jal         func_1CBEC0
    ctx->pc = 0x1CF1DCu;
    SET_GPR_U32(ctx, 31, 0x1CF1E4u);
    ctx->pc = 0x1CF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1DCu;
    // 0x1cf1e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBEC0u, 0x1CF1DCu, 0x1CF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1E4u;
label_1cf1e4:
    // 0x1cf1e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cf1e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cf1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf1f0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CF1F0u;
    SET_GPR_U32(ctx, 31, 0x1CF1F8u);
    ctx->pc = 0x1CF1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1F0u;
    // 0x1cf1f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CF1F0u, 0x1CF1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1F8u;
label_1cf1f8:
    // 0x1cf1f8: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1cf1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1cf1fc: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1CF1FCu;
    SET_GPR_U32(ctx, 31, 0x1CF204u);
    ctx->pc = 0x1CF200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1FCu;
    // 0x1cf200: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1CF1FCu, 0x1CF204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF204u;
label_1cf204:
    // 0x1cf204: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf208: 0x8c22fb50  lw          $v0, -0x4B0($at)
    ctx->pc = 0x1cf208u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36FB50u));
    // 0x1cf20c: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF20Cu;
    {
        const bool branch_taken_0x1cf20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1cf20c) {
            ctx->pc = 0x1CF230u;
            return;
        }
    }
    ctx->pc = 0x1CF214u;
    // 0x1cf214: 0x92a20080  lbu         $v0, 0x80($s5)
    ctx->pc = 0x1cf214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1cf218: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF218u;
    {
        const bool branch_taken_0x1cf218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF218u;
        // 0x1cf21c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf218) {
            ctx->pc = 0x1CF230u;
            return;
        }
    }
    ctx->pc = 0x1CF220u;
    // 0x1cf220: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cf220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cf224: 0x24c694b0  addiu       $a2, $a2, -0x6B50
    ctx->pc = 0x1cf224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939824));
    // 0x1cf228: 0xc07d376  jal         func_1F4DD8
    ctx->pc = 0x1CF228u;
    SET_GPR_U32(ctx, 31, 0x1CF230u);
    ctx->pc = 0x1CF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF228u;
    // 0x1cf22c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DD8u, 0x1CF228u, 0x1CF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF230u;
}
