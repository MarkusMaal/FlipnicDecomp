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

// Function: Unk_Menu_Asset_Loading_Related
// Address: 0x1b65a0 - 0x1b65c0
void Unk_Menu_Asset_Loading_Related_0x1b65a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Unk_Menu_Asset_Loading_Related_0x1b65a0");
#endif

    switch (ctx->pc) {
        case 0x1b65a8u: goto label_1b65a8;
        case 0x1b65b8u: goto label_1b65b8;
        default: break;
    }

    ctx->pc = 0x1b65a0u;

    // 0x1b65a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B65A0u;
    SET_GPR_U32(ctx, 31, 0x1B65A8u);
    ctx->pc = 0x1B65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65A0u;
    // 0x1b65a4: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B65A0u, 0x1B65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65A8u;
label_1b65a8:
    // 0x1b65a8: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1B65A8u;
    {
        const bool branch_taken_0x1b65a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65a8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B65B0u;
    // 0x1b65b0: 0xc0711e0  jal         func_1C4780
    ctx->pc = 0x1B65B0u;
    SET_GPR_U32(ctx, 31, 0x1B65B8u);
    ctx->pc = 0x1B65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65B0u;
    // 0x1b65b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4780u, 0x1B65B0u, 0x1B65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65B8u;
label_1b65b8:
    // 0x1b65b8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1B65B8u;
    {
        const bool branch_taken_0x1b65b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b65b8) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B65C0u;
}
