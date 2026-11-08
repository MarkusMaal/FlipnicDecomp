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

// Function: entry_0017240c
// Address: 0x17240c - 0x17243c
void entry_0017240c_0x17240c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017240c_0x17240c");
#endif

    switch (ctx->pc) {
        case 0x172434u: goto label_172434;
        default: break;
    }

    ctx->pc = 0x17240cu;

    // 0x17240c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17240Cu;
    {
        const bool branch_taken_0x17240c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17240Cu;
        // 0x172410: 0x26220048  addiu       $v0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17240c) {
            ctx->pc = 0x172440u;
            return;
        }
    }
    ctx->pc = 0x172414u;
    // 0x172414: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x172414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x172418: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x172418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x17241c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x17241cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x172420: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x172420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x172424: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172424u;
    {
        const bool branch_taken_0x172424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172424) {
            ctx->pc = 0x17243Cu;
            return;
        }
    }
    ctx->pc = 0x17242Cu;
    // 0x17242c: 0xc04018c  jal         func_100630
    ctx->pc = 0x17242Cu;
    SET_GPR_U32(ctx, 31, 0x172434u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x17242Cu, 0x172434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172434u;
label_172434:
    // 0x172434: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x172434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x172438: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x172438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    ctx->pc = 0x17243cu;
}
