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

// Function: entry_001c18c4
// Address: 0x1c18c4 - 0x1c1908
void entry_001c18c4_0x1c18c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c18c4_0x1c18c4");
#endif

    switch (ctx->pc) {
        case 0x1c18dcu: goto label_1c18dc;
        case 0x1c18e4u: goto label_1c18e4;
        case 0x1c1900u: goto label_1c1900;
        default: break;
    }

    ctx->pc = 0x1c18c4u;

    // 0x1c18c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c18c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c18cc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c18d0: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x1c18d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c18d4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C18D4u;
    SET_GPR_U32(ctx, 31, 0x1C18DCu);
    ctx->pc = 0x1C18D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18D4u;
    // 0x1c18d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C18D4u, 0x1C18DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18DCu;
label_1c18dc:
    // 0x1c18dc: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C18DCu;
    SET_GPR_U32(ctx, 31, 0x1C18E4u);
    ctx->pc = 0x1C18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18DCu;
    // 0x1c18e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C18DCu, 0x1C18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18E4u;
label_1c18e4:
    // 0x1c18e4: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1c18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c18e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c18e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c18ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c18f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c18f4: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x1c18f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c18f8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C18F8u;
    SET_GPR_U32(ctx, 31, 0x1C1900u);
    ctx->pc = 0x1C18FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18F8u;
    // 0x1c18fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C18F8u, 0x1C1900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1900u;
label_1c1900:
    // 0x1c1900: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1900u;
    SET_GPR_U32(ctx, 31, 0x1C1908u);
    ctx->pc = 0x1C1904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1900u;
    // 0x1c1904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1900u, 0x1C1908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1908u;
}
