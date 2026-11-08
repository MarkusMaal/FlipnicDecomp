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

// Function: entry_001e5bfc
// Address: 0x1e5bfc - 0x1e5c18
void entry_001e5bfc_0x1e5bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5bfc_0x1e5bfc");
#endif

    switch (ctx->pc) {
        case 0x1e5c10u: goto label_1e5c10;
        default: break;
    }

    ctx->pc = 0x1e5bfcu;

    // 0x1e5bfc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1e5bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5c00: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1e5c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e5c04: 0x27a50047  addiu       $a1, $sp, 0x47
    ctx->pc = 0x1e5c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 71));
    // 0x1e5c08: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1E5C08u;
    SET_GPR_U32(ctx, 31, 0x1E5C10u);
    ctx->pc = 0x1E5C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C08u;
    // 0x1e5c0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E5C08u, 0x1E5C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C10u;
label_1e5c10:
    // 0x1e5c10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5C10u;
    {
        const bool branch_taken_0x1e5c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c10) {
            ctx->pc = 0x1E5C24u;
            return;
        }
    }
    ctx->pc = 0x1E5C18u;
}
