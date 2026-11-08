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

// Function: entry_001039c8
// Address: 0x1039c8 - 0x103a10
void entry_001039c8_0x1039c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001039c8_0x1039c8");
#endif

    switch (ctx->pc) {
        case 0x1039d0u: goto label_1039d0;
        case 0x1039e0u: goto label_1039e0;
        case 0x103a00u: goto label_103a00;
        default: break;
    }

    ctx->pc = 0x1039c8u;

    // 0x1039c8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1039C8u;
    SET_GPR_U32(ctx, 31, 0x1039D0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1039C8u, 0x1039D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1039D0u;
label_1039d0:
    // 0x1039d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1039D0u;
    {
        const bool branch_taken_0x1039d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1039D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039D0u;
        // 0x1039d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039d0) {
            ctx->pc = 0x103A10u;
            return;
        }
    }
    ctx->pc = 0x1039D8u;
    // 0x1039d8: 0xc041860  jal         func_106180
    ctx->pc = 0x1039D8u;
    SET_GPR_U32(ctx, 31, 0x1039E0u);
    ctx->pc = 0x1039DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039D8u;
    // 0x1039dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x1039D8u, 0x1039E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1039E0u;
label_1039e0:
    // 0x1039e0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1039e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1039e4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1039e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1039e8: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x1039e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x1039ec: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x1039ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x1039f0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1039f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1039f4: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x1039f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1039f8: 0xc041858  jal         func_106160
    ctx->pc = 0x1039F8u;
    SET_GPR_U32(ctx, 31, 0x103A00u);
    ctx->pc = 0x1039FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039F8u;
    // 0x1039fc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106160u, 0x1039F8u, 0x103A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A00u;
label_103a00:
    // 0x103a00: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103a04: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x103a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x103a08: 0x24427f30  addiu       $v0, $v0, 0x7F30
    ctx->pc = 0x103a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
    // 0x103a0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103a10u;
}
