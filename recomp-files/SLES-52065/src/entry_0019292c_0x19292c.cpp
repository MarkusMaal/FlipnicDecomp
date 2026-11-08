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

// Function: entry_0019292c
// Address: 0x19292c - 0x192964
void entry_0019292c_0x19292c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019292c_0x19292c");
#endif

    switch (ctx->pc) {
        case 0x192940u: goto label_192940;
        default: break;
    }

    ctx->pc = 0x19292cu;

label_19292c:
    // 0x19292c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x19292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x192930: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x192930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x192934: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x192934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
    // 0x192938: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x192938u;
    SET_GPR_U32(ctx, 31, 0x192940u);
    ctx->pc = 0x19293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192938u;
    // 0x19293c: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x192938u, 0x192940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192940u;
label_192940:
    // 0x192940: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x192944: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192948: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x192948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
    // 0x19294c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x19294cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x192950: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x192950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
    // 0x192954: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x192954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    // 0x192958: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x192958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19295c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x19295Cu;
    {
        const bool branch_taken_0x19295c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19295Cu;
        // 0x192960: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19295c) {
            ctx->pc = 0x19292Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19292c;
        }
    }
    ctx->pc = 0x192964u;
}
