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

// Function: entry_001f03e4
// Address: 0x1f03e4 - 0x1f0410
void entry_001f03e4_0x1f03e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f03e4_0x1f03e4");
#endif

    switch (ctx->pc) {
        case 0x1f03ecu: goto label_1f03ec;
        default: break;
    }

    ctx->pc = 0x1f03e4u;

    // 0x1f03e4: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F03E4u;
    SET_GPR_U32(ctx, 31, 0x1F03ECu);
    ctx->pc = 0x1F03E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03E4u;
    // 0x1f03e8: 0x8e04a46c  lw          $a0, -0x5B94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F03E4u, 0x1F03ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03ECu;
label_1f03ec:
    // 0x1f03ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1f03ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1f03f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f03f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03f4: 0x8ca3a3d8  lw          $v1, -0x5C28($a1)
    ctx->pc = 0x1f03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3D8u));
    // 0x1f03f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f03fc: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F03FCu;
    {
        const bool branch_taken_0x1f03fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03FCu;
        // 0x1f0400: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03fc) {
            ctx->pc = 0x1F042Cu;
            return;
        }
    }
    ctx->pc = 0x1F0404u;
    // 0x1f0404: 0x24a3a3d8  addiu       $v1, $a1, -0x5C28
    ctx->pc = 0x1f0404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943704));
    // 0x1f0408: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f040c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f040cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1f0410u;
}
