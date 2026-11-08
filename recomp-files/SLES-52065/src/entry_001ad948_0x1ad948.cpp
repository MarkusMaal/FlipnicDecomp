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

// Function: entry_001ad948
// Address: 0x1ad948 - 0x1ad980
void entry_001ad948_0x1ad948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad948_0x1ad948");
#endif

    switch (ctx->pc) {
        case 0x1ad950u: goto label_1ad950;
        case 0x1ad978u: goto label_1ad978;
        default: break;
    }

    ctx->pc = 0x1ad948u;

    // 0x1ad948: 0xc055c40  jal         func_157100
    ctx->pc = 0x1AD948u;
    SET_GPR_U32(ctx, 31, 0x1AD950u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1AD948u, 0x1AD950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD950u;
label_1ad950:
    // 0x1ad950: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x1ad950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x1ad954: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ad954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ad958: 0x1c600055  bgtz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x1AD958u;
    {
        const bool branch_taken_0x1ad958 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AD95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD958u;
        // 0x1ad95c: 0xae2306c8  sw          $v1, 0x6C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad958) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD960u;
    // 0x1ad960: 0x8e2206b0  lw          $v0, 0x6B0($s1)
    ctx->pc = 0x1ad960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
    // 0x1ad964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad968: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad96c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ad96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ad970: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AD970u;
    SET_GPR_U32(ctx, 31, 0x1AD978u);
    ctx->pc = 0x1AD974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD970u;
    // 0x1ad974: 0xae2206b4  sw          $v0, 0x6B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AD970u, 0x1AD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD978u;
label_1ad978:
    // 0x1ad978: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1AD978u;
    {
        const bool branch_taken_0x1ad978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad978) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD980u;
}
