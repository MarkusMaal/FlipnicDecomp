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

// Function: entry_001c07bc
// Address: 0x1c07bc - 0x1c0828
void entry_001c07bc_0x1c07bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c07bc_0x1c07bc");
#endif

    switch (ctx->pc) {
        case 0x1c07d4u: goto label_1c07d4;
        case 0x1c07e4u: goto label_1c07e4;
        case 0x1c07f0u: goto label_1c07f0;
        case 0x1c0804u: goto label_1c0804;
        case 0x1c081cu: goto label_1c081c;
        case 0x1c0824u: goto label_1c0824;
        default: break;
    }

    ctx->pc = 0x1c07bcu;

    // 0x1c07bc: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x1c07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c07c0: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x1c07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x1c07c4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C07C4u;
    {
        const bool branch_taken_0x1c07c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07C4u;
        // 0x1c07c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c07c4) {
            ctx->pc = 0x1C0850u;
            return;
        }
    }
    ctx->pc = 0x1C07CCu;
    // 0x1c07cc: 0xc07037c  jal         func_1C0DF0
    ctx->pc = 0x1C07CCu;
    SET_GPR_U32(ctx, 31, 0x1C07D4u);
    ctx->pc = 0x1C07D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07CCu;
    // 0x1c07d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0DF0u, 0x1C07CCu, 0x1C07D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07D4u;
label_1c07d4:
    // 0x1c07d4: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x1c07d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x1c07d8: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x1c07d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1c07dc: 0xc07047c  jal         func_1C11F0
    ctx->pc = 0x1C07DCu;
    SET_GPR_U32(ctx, 31, 0x1C07E4u);
    ctx->pc = 0x1C07E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07DCu;
    // 0x1c07e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11F0u, 0x1C07DCu, 0x1C07E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07E4u;
label_1c07e4:
    // 0x1c07e4: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1c07e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c07e8: 0xc07045c  jal         func_1C1170
    ctx->pc = 0x1C07E8u;
    SET_GPR_U32(ctx, 31, 0x1C07F0u);
    ctx->pc = 0x1C07ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07E8u;
    // 0x1c07ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1170u, 0x1C07E8u, 0x1C07F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C07F0u;
label_1c07f0:
    // 0x1c07f0: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1c07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c07f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c07f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c07f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c07fc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C07FCu;
    SET_GPR_U32(ctx, 31, 0x1C0804u);
    ctx->pc = 0x1C0800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07FCu;
    // 0x1c0800: 0xae620064  sw          $v0, 0x64($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C07FCu, 0x1C0804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0804u;
label_1c0804:
    // 0x1c0804: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0804u;
    {
        const bool branch_taken_0x1c0804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0804u;
        // 0x1c0808: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0804) {
            ctx->pc = 0x1C0828u;
            return;
        }
    }
    ctx->pc = 0x1C080Cu;
    // 0x1c080c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0810: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c0814: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0814u;
    SET_GPR_U32(ctx, 31, 0x1C081Cu);
    ctx->pc = 0x1C0818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0814u;
    // 0x1c0818: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0814u, 0x1C081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C081Cu;
label_1c081c:
    // 0x1c081c: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C081Cu;
    SET_GPR_U32(ctx, 31, 0x1C0824u);
    ctx->pc = 0x1C0820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C081Cu;
    // 0x1c0820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C081Cu, 0x1C0824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0824u;
label_1c0824:
    // 0x1c0824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c0828u;
}
