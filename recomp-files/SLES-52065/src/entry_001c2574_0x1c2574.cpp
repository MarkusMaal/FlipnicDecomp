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

// Function: entry_001c2574
// Address: 0x1c2574 - 0x1c25c0
void entry_001c2574_0x1c2574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2574_0x1c2574");
#endif

    switch (ctx->pc) {
        case 0x1c257cu: goto label_1c257c;
        case 0x1c2588u: goto label_1c2588;
        case 0x1c2594u: goto label_1c2594;
        case 0x1c25a0u: goto label_1c25a0;
        case 0x1c25acu: goto label_1c25ac;
        case 0x1c25b8u: goto label_1c25b8;
        default: break;
    }

    ctx->pc = 0x1c2574u;

    // 0x1c2574: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C2574u;
    SET_GPR_U32(ctx, 31, 0x1C257Cu);
    ctx->pc = 0x1C2578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2574u;
    // 0x1c2578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C2574u, 0x1C257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C257Cu;
label_1c257c:
    // 0x1c257c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c257cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2580: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C2580u;
    SET_GPR_U32(ctx, 31, 0x1C2588u);
    ctx->pc = 0x1C2584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2580u;
    // 0x1c2584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C2580u, 0x1C2588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2588u;
label_1c2588:
    // 0x1c2588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c258c: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C258Cu;
    SET_GPR_U32(ctx, 31, 0x1C2594u);
    ctx->pc = 0x1C2590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C258Cu;
    // 0x1c2590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C258Cu, 0x1C2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2594u;
label_1c2594:
    // 0x1c2594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c2594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2598: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C2598u;
    SET_GPR_U32(ctx, 31, 0x1C25A0u);
    ctx->pc = 0x1C259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2598u;
    // 0x1c259c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C2598u, 0x1C25A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25A0u;
label_1c25a0:
    // 0x1c25a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c25a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25a4: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C25A4u;
    SET_GPR_U32(ctx, 31, 0x1C25ACu);
    ctx->pc = 0x1C25A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25A4u;
    // 0x1c25a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C25A4u, 0x1C25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25ACu;
label_1c25ac:
    // 0x1c25ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c25acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25b0: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C25B0u;
    SET_GPR_U32(ctx, 31, 0x1C25B8u);
    ctx->pc = 0x1C25B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25B0u;
    // 0x1c25b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C25B0u, 0x1C25B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25B8u;
label_1c25b8:
    // 0x1c25b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C25B8u;
    {
        const bool branch_taken_0x1c25b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c25b8) {
            ctx->pc = 0x1C2608u;
            return;
        }
    }
    ctx->pc = 0x1C25C0u;
}
