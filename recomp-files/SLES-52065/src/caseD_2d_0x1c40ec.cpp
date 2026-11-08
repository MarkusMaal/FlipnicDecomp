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

// Function: caseD_2d
// Address: 0x1c40ec - 0x1c4128
void caseD_2d_0x1c40ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2d_0x1c40ec");
#endif

    switch (ctx->pc) {
        case 0x1c40f8u: goto label_1c40f8;
        case 0x1c4104u: goto label_1c4104;
        case 0x1c4110u: goto label_1c4110;
        default: break;
    }

    ctx->pc = 0x1c40ecu;

    // 0x1c40ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40f0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C40F0u;
    SET_GPR_U32(ctx, 31, 0x1C40F8u);
    ctx->pc = 0x1C40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40F0u;
    // 0x1c40f4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C40F0u, 0x1C40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40F8u;
label_1c40f8:
    // 0x1c40f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40fc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C40FCu;
    SET_GPR_U32(ctx, 31, 0x1C4104u);
    ctx->pc = 0x1C4100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40FCu;
    // 0x1c4100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C40FCu, 0x1C4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4104u;
label_1c4104:
    // 0x1c4104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4108: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4108u;
    SET_GPR_U32(ctx, 31, 0x1C4110u);
    ctx->pc = 0x1C410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4108u;
    // 0x1c410c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4108u, 0x1C4110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4110u;
label_1c4110:
    // 0x1c4110: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c4110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c4114: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4114u;
    {
        const bool branch_taken_0x1c4114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4114u;
        // 0x1c4118: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4114) {
            ctx->pc = 0x1C4128u;
            return;
        }
    }
    ctx->pc = 0x1C411Cu;
    // 0x1c411c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c4120: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1C4120u;
    {
        const bool branch_taken_0x1c4120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4120u;
        // 0x1c4124: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4120) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4128u;
}
