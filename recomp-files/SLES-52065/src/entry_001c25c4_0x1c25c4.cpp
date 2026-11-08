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

// Function: entry_001c25c4
// Address: 0x1c25c4 - 0x1c2608
void entry_001c25c4_0x1c25c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c25c4_0x1c25c4");
#endif

    switch (ctx->pc) {
        case 0x1c25ccu: goto label_1c25cc;
        case 0x1c25d8u: goto label_1c25d8;
        case 0x1c25e4u: goto label_1c25e4;
        case 0x1c25f0u: goto label_1c25f0;
        case 0x1c25fcu: goto label_1c25fc;
        default: break;
    }

    ctx->pc = 0x1c25c4u;

    // 0x1c25c4: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C25C4u;
    SET_GPR_U32(ctx, 31, 0x1C25CCu);
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C25C4u, 0x1C25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25CCu;
label_1c25cc:
    // 0x1c25cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c25ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25d0: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C25D0u;
    SET_GPR_U32(ctx, 31, 0x1C25D8u);
    ctx->pc = 0x1C25D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25D0u;
    // 0x1c25d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C25D0u, 0x1C25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25D8u;
label_1c25d8:
    // 0x1c25d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c25d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25dc: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C25DCu;
    SET_GPR_U32(ctx, 31, 0x1C25E4u);
    ctx->pc = 0x1C25E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25DCu;
    // 0x1c25e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C25DCu, 0x1C25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25E4u;
label_1c25e4:
    // 0x1c25e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c25e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25e8: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C25E8u;
    SET_GPR_U32(ctx, 31, 0x1C25F0u);
    ctx->pc = 0x1C25ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25E8u;
    // 0x1c25ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C25E8u, 0x1C25F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25F0u;
label_1c25f0:
    // 0x1c25f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c25f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25f4: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C25F4u;
    SET_GPR_U32(ctx, 31, 0x1C25FCu);
    ctx->pc = 0x1C25F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25F4u;
    // 0x1c25f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C25F4u, 0x1C25FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25FCu;
label_1c25fc:
    // 0x1c25fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c25fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2600: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C2600u;
    SET_GPR_U32(ctx, 31, 0x1C2608u);
    ctx->pc = 0x1C2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2600u;
    // 0x1c2604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C2600u, 0x1C2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2608u;
}
