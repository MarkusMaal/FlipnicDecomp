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

// Function: entry_001bb344
// Address: 0x1bb344 - 0x1bb370
void entry_001bb344_0x1bb344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb344_0x1bb344");
#endif

    ctx->pc = 0x1bb344u;

    // 0x1bb344: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1bb344u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bb348: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BB348u;
    {
        const bool branch_taken_0x1bb348 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB348u;
        // 0x1bb34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb348) {
            ctx->pc = 0x1BB400u;
            return;
        }
    }
    ctx->pc = 0x1BB350u;
    // 0x1bb350: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1bb350u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb354: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BB354u;
    {
        const bool branch_taken_0x1bb354 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb354) {
            ctx->pc = 0x1BB3A0u;
            return;
        }
    }
    ctx->pc = 0x1BB35Cu;
    // 0x1bb35c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1bb35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb360: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB360u;
    {
        const bool branch_taken_0x1bb360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB360u;
        // 0x1bb364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb360) {
            ctx->pc = 0x1BB370u;
            return;
        }
    }
    ctx->pc = 0x1BB368u;
    // 0x1bb368: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1BB368u;
    SET_GPR_U32(ctx, 31, 0x1BB370u);
    ctx->pc = 0x1BB270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB270u, 0x1BB368u, 0x1BB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB370u;
}
