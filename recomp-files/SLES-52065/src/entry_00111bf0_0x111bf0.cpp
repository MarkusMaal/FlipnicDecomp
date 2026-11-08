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

// Function: entry_00111bf0
// Address: 0x111bf0 - 0x111c04
void entry_00111bf0_0x111bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111bf0_0x111bf0");
#endif

    ctx->pc = 0x111bf0u;

    // 0x111bf0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x111bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111bf8: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x111bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x111bfc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x111BFCu;
    {
        const bool branch_taken_0x111bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BFCu;
        // 0x111c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bfc) {
            ctx->pc = 0x111C3Cu;
            return;
        }
    }
    ctx->pc = 0x111C04u;
}
