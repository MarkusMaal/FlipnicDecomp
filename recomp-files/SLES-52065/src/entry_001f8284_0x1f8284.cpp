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

// Function: entry_001f8284
// Address: 0x1f8284 - 0x1f82a8
void entry_001f8284_0x1f8284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8284_0x1f8284");
#endif

    switch (ctx->pc) {
        case 0x1f829cu: goto label_1f829c;
        default: break;
    }

    ctx->pc = 0x1f8284u;

    // 0x1f8284: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f8284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f8288: 0x2842020e  slti        $v0, $v0, 0x20E
    ctx->pc = 0x1f8288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)526) ? 1 : 0);
    // 0x1f828c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F828Cu;
    {
        const bool branch_taken_0x1f828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F828Cu;
        // 0x1f8290: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f828c) {
            ctx->pc = 0x1F82A8u;
            return;
        }
    }
    ctx->pc = 0x1F8294u;
    // 0x1f8294: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F8294u;
    SET_GPR_U32(ctx, 31, 0x1F829Cu);
    ctx->pc = 0x1F8298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8294u;
    // 0x1f8298: 0x24844898  addiu       $a0, $a0, 0x4898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F8294u, 0x1F829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F829Cu;
label_1f829c:
    // 0x1f829c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1f829cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1f82a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F82A0u;
    {
        const bool branch_taken_0x1f82a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82A0u;
        // 0x1f82a4: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82a0) {
            ctx->pc = 0x1F82ACu;
            return;
        }
    }
    ctx->pc = 0x1F82A8u;
}
