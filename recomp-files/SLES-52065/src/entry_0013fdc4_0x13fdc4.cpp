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

// Function: entry_0013fdc4
// Address: 0x13fdc4 - 0x13fddc
void entry_0013fdc4_0x13fdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fdc4_0x13fdc4");
#endif

    switch (ctx->pc) {
        case 0x13fdd4u: goto label_13fdd4;
        default: break;
    }

    ctx->pc = 0x13fdc4u;

    // 0x13fdc4: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x13fdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13fdc8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x13fdc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdcc: 0xc05032c  jal         func_140CB0
    ctx->pc = 0x13FDCCu;
    SET_GPR_U32(ctx, 31, 0x13FDD4u);
    ctx->pc = 0x13FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDCCu;
    // 0x13fdd0: 0x27a7001c  addiu       $a3, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140CB0u, 0x13FDCCu, 0x13FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDD4u;
label_13fdd4:
    // 0x13fdd4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x13FDD4u;
    {
        const bool branch_taken_0x13fdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDD4u;
        // 0x13fdd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdd4) {
            ctx->pc = 0x13FEF4u;
            return;
        }
    }
    ctx->pc = 0x13FDDCu;
}
