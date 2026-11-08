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

// Function: entry_00103fdc
// Address: 0x103fdc - 0x104018
void entry_00103fdc_0x103fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103fdc_0x103fdc");
#endif

    switch (ctx->pc) {
        case 0x103fe4u: goto label_103fe4;
        case 0x103ff4u: goto label_103ff4;
        default: break;
    }

    ctx->pc = 0x103fdcu;

    // 0x103fdc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103FDCu;
    SET_GPR_U32(ctx, 31, 0x103FE4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103FDCu, 0x103FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FE4u;
label_103fe4:
    // 0x103fe4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103FE4u;
    {
        const bool branch_taken_0x103fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FE4u;
        // 0x103fe8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fe4) {
            ctx->pc = 0x104018u;
            return;
        }
    }
    ctx->pc = 0x103FECu;
    // 0x103fec: 0xc056360  jal         func_158D80
    ctx->pc = 0x103FECu;
    SET_GPR_U32(ctx, 31, 0x103FF4u);
    ctx->pc = 0x103FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FECu;
    // 0x103ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103FECu, 0x103FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FF4u;
label_103ff4:
    // 0x103ff4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103ff8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103ffc: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x103ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104000: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104004: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104008: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10400c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10400cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104010: 0x24429cb0  addiu       $v0, $v0, -0x6350
    ctx->pc = 0x104010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941872));
    // 0x104014: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104018u;
}
