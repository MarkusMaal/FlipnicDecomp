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

// Function: entry_001f8264
// Address: 0x1f8264 - 0x1f8284
void entry_001f8264_0x1f8264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8264_0x1f8264");
#endif

    switch (ctx->pc) {
        case 0x1f8278u: goto label_1f8278;
        default: break;
    }

    ctx->pc = 0x1f8264u;

    // 0x1f8264: 0x2842020a  slti        $v0, $v0, 0x20A
    ctx->pc = 0x1f8264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)522) ? 1 : 0);
    // 0x1f8268: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8268u;
    {
        const bool branch_taken_0x1f8268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8268u;
        // 0x1f826c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8268) {
            ctx->pc = 0x1F8284u;
            return;
        }
    }
    ctx->pc = 0x1F8270u;
    // 0x1f8270: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F8270u;
    SET_GPR_U32(ctx, 31, 0x1F8278u);
    ctx->pc = 0x1F8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8270u;
    // 0x1f8274: 0x24844870  addiu       $a0, $a0, 0x4870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F8270u, 0x1F8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8278u;
label_1f8278:
    // 0x1f8278: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1f8278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x1f827c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F827Cu;
    {
        const bool branch_taken_0x1f827c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F827Cu;
        // 0x1f8280: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f827c) {
            ctx->pc = 0x1F82ACu;
            return;
        }
    }
    ctx->pc = 0x1F8284u;
}
