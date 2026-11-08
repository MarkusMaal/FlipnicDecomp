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

// Function: caseD_d
// Address: 0x1c70b8 - 0x1c7108
void caseD_d_0x1c70b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1c70b8");
#endif

    switch (ctx->pc) {
        case 0x1c70c4u: goto label_1c70c4;
        case 0x1c70d0u: goto label_1c70d0;
        case 0x1c70dcu: goto label_1c70dc;
        default: break;
    }

    ctx->pc = 0x1c70b8u;

    // 0x1c70b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c70b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70bc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C70BCu;
    SET_GPR_U32(ctx, 31, 0x1C70C4u);
    ctx->pc = 0x1C70C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70BCu;
    // 0x1c70c0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C70BCu, 0x1C70C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70C4u;
label_1c70c4:
    // 0x1c70c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c70c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70c8: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C70C8u;
    SET_GPR_U32(ctx, 31, 0x1C70D0u);
    ctx->pc = 0x1C70CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70C8u;
    // 0x1c70cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C70C8u, 0x1C70D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70D0u;
label_1c70d0:
    // 0x1c70d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c70d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70d4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C70D4u;
    SET_GPR_U32(ctx, 31, 0x1C70DCu);
    ctx->pc = 0x1C70D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70D4u;
    // 0x1c70d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C70D4u, 0x1C70DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70DCu;
label_1c70dc:
    // 0x1c70dc: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c70e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c70e4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C70E4u;
    {
        const bool branch_taken_0x1c70e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c70e4) {
            ctx->pc = 0x1C710Cu;
            return;
        }
    }
    ctx->pc = 0x1C70ECu;
    // 0x1c70ec: 0x8e0301f0  lw          $v1, 0x1F0($s0)
    ctx->pc = 0x1c70ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1c70f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c70f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C70F4u;
    {
        const bool branch_taken_0x1c70f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70F4u;
        // 0x1c70f8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70f4) {
            ctx->pc = 0x1C7108u;
            return;
        }
    }
    ctx->pc = 0x1C70FCu;
    // 0x1c70fc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1c70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c7100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7100u;
    {
        const bool branch_taken_0x1c7100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7100u;
        // 0x1c7104: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7100) {
            ctx->pc = 0x1C710Cu;
            return;
        }
    }
    ctx->pc = 0x1C7108u;
}
