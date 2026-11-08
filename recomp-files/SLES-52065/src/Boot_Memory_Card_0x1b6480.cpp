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

// Function: Boot_Memory_Card
// Address: 0x1b6480 - 0x1b64a0
void Boot_Memory_Card_0x1b6480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Boot_Memory_Card_0x1b6480");
#endif

    switch (ctx->pc) {
        case 0x1b6488u: goto label_1b6488;
        case 0x1b6498u: goto label_1b6498;
        default: break;
    }

    ctx->pc = 0x1b6480u;

    // 0x1b6480: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6480u;
    SET_GPR_U32(ctx, 31, 0x1B6488u);
    ctx->pc = 0x1B6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6480u;
    // 0x1b6484: 0x24040258  addiu       $a0, $zero, 0x258 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6480u, 0x1B6488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6488u;
label_1b6488:
    // 0x1b6488: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1B6488u;
    {
        const bool branch_taken_0x1b6488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6488) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6490u;
    // 0x1b6490: 0xc070834  jal         func_1C20D0
    ctx->pc = 0x1B6490u;
    SET_GPR_U32(ctx, 31, 0x1B6498u);
    ctx->pc = 0x1B6494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6490u;
    // 0x1b6494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1B6490u, 0x1B6498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6498u;
label_1b6498:
    // 0x1b6498: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x1B6498u;
    {
        const bool branch_taken_0x1b6498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6498u;
        // 0x1b649c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6498) {
            ctx->pc = 0x1B683Cu;
            return;
        }
    }
    ctx->pc = 0x1B64A0u;
}
