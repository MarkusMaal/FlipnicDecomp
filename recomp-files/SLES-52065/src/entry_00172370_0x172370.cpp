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

// Function: entry_00172370
// Address: 0x172370 - 0x1723a0
void entry_00172370_0x172370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172370_0x172370");
#endif

    switch (ctx->pc) {
        case 0x172398u: goto label_172398;
        default: break;
    }

    ctx->pc = 0x172370u;

    // 0x172370: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x172370u;
    {
        const bool branch_taken_0x172370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172370u;
        // 0x172374: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172370) {
            ctx->pc = 0x1723A4u;
            return;
        }
    }
    ctx->pc = 0x172378u;
    // 0x172378: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17237c: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x17237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x172380: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x172380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x172384: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x172384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x172388: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172388u;
    {
        const bool branch_taken_0x172388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172388) {
            ctx->pc = 0x1723A0u;
            return;
        }
    }
    ctx->pc = 0x172390u;
    // 0x172390: 0xc04018c  jal         func_100630
    ctx->pc = 0x172390u;
    SET_GPR_U32(ctx, 31, 0x172398u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x172390u, 0x172398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172398u;
label_172398:
    // 0x172398: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x172398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x17239c: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x17239cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    ctx->pc = 0x1723a0u;
}
