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

// Function: entry_001ff520
// Address: 0x1ff520 - 0x1ff530
void entry_001ff520_0x1ff520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff520_0x1ff520");
#endif

    switch (ctx->pc) {
        case 0x1ff528u: goto label_1ff528;
        default: break;
    }

    ctx->pc = 0x1ff520u;

    // 0x1ff520: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FF520u;
    SET_GPR_U32(ctx, 31, 0x1FF528u);
    ctx->pc = 0x1FF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF520u;
    // 0x1ff524: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FF520u, 0x1FF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF528u;
label_1ff528:
    // 0x1ff528: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1FF528u;
    {
        const bool branch_taken_0x1ff528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF528u;
        // 0x1ff52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff528) {
            ctx->pc = 0x1FF620u;
            return;
        }
    }
    ctx->pc = 0x1FF530u;
}
