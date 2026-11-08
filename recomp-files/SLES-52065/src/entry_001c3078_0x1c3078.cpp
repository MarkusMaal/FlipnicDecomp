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

// Function: entry_001c3078
// Address: 0x1c3078 - 0x1c30a4
void entry_001c3078_0x1c3078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3078_0x1c3078");
#endif

    switch (ctx->pc) {
        case 0x1c3080u: goto label_1c3080;
        case 0x1c308cu: goto label_1c308c;
        default: break;
    }

    ctx->pc = 0x1c3078u;

    // 0x1c3078: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3078u;
    SET_GPR_U32(ctx, 31, 0x1C3080u);
    ctx->pc = 0x1C307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3078u;
    // 0x1c307c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3078u, 0x1C3080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3080u;
label_1c3080:
    // 0x1c3080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3084: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3084u;
    SET_GPR_U32(ctx, 31, 0x1C308Cu);
    ctx->pc = 0x1C3088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3084u;
    // 0x1c3088: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3084u, 0x1C308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C308Cu;
label_1c308c:
    // 0x1c308c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1c308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1c3090: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x1c3090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1c3094: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3094u;
    {
        const bool branch_taken_0x1c3094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3094) {
            ctx->pc = 0x1C30A8u;
            return;
        }
    }
    ctx->pc = 0x1C309Cu;
    // 0x1c309c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C309Cu;
    {
        const bool branch_taken_0x1c309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C309Cu;
        // 0x1c30a0: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c309c) {
            ctx->pc = 0x1C30A8u;
            return;
        }
    }
    ctx->pc = 0x1C30A4u;
}
