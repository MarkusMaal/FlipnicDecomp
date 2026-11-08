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

// Function: entry_0020156c
// Address: 0x20156c - 0x20157c
void entry_0020156c_0x20156c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020156c_0x20156c");
#endif

    switch (ctx->pc) {
        case 0x201578u: goto label_201578;
        default: break;
    }

    ctx->pc = 0x20156cu;

label_20156c:
    // 0x20156c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20156cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201570:
    // 0x201570: 0x60f809  jalr        $v1
label_201574:
    if (ctx->pc == 0x201574u) {
        ctx->pc = 0x201574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201570u;
        // 0x201574: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201578u;
        goto label_201578;
    }
    ctx->pc = 0x201570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201578u);
        ctx->pc = 0x201574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201570u;
        // 0x201574: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201570u, 0x201578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201578u;
label_201578:
    // 0x201578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20157cu;
}
