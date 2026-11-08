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

// Function: entry_001b7bbc
// Address: 0x1b7bbc - 0x1b7c14
void entry_001b7bbc_0x1b7bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7bbc_0x1b7bbc");
#endif

    switch (ctx->pc) {
        case 0x1b7bc4u: goto label_1b7bc4;
        case 0x1b7be0u: goto label_1b7be0;
        case 0x1b7becu: goto label_1b7bec;
        case 0x1b7bf4u: goto label_1b7bf4;
        case 0x1b7c08u: goto label_1b7c08;
        case 0x1b7c10u: goto label_1b7c10;
        default: break;
    }

    ctx->pc = 0x1b7bbcu;

    // 0x1b7bbc: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7BBCu;
    SET_GPR_U32(ctx, 31, 0x1B7BC4u);
    ctx->pc = 0x1B7BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BBCu;
    // 0x1b7bc0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7BBCu, 0x1B7BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BC4u;
label_1b7bc4:
    // 0x1b7bc4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b7bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7bc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7bcc: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x1b7bccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7bd0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b7bd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7bd8: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B7BD8u;
    SET_GPR_U32(ctx, 31, 0x1B7BE0u);
    ctx->pc = 0x1B7BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BD8u;
    // 0x1b7bdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B7BD8u, 0x1B7BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BE0u;
label_1b7be0:
    // 0x1b7be0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1b7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b7be4: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1B7BE4u;
    SET_GPR_U32(ctx, 31, 0x1B7BECu);
    ctx->pc = 0x1B7BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BE4u;
    // 0x1b7be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1B7BE4u, 0x1B7BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BECu;
label_1b7bec:
    // 0x1b7bec: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1B7BECu;
    SET_GPR_U32(ctx, 31, 0x1B7BF4u);
    ctx->pc = 0x1B7BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BECu;
    // 0x1b7bf0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1B7BECu, 0x1B7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BF4u;
label_1b7bf4:
    // 0x1b7bf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7bf8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b7bfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7c00: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B7C00u;
    SET_GPR_U32(ctx, 31, 0x1B7C08u);
    ctx->pc = 0x1B7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C00u;
    // 0x1b7c04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B7C00u, 0x1B7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C08u;
label_1b7c08:
    // 0x1b7c08: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1B7C08u;
    SET_GPR_U32(ctx, 31, 0x1B7C10u);
    ctx->pc = 0x1B7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C08u;
    // 0x1b7c0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1B7C08u, 0x1B7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C10u;
label_1b7c10:
    // 0x1b7c10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b7c14u;
}
