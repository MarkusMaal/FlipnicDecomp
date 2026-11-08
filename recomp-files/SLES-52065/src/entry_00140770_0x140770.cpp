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

// Function: entry_00140770
// Address: 0x140770 - 0x14079c
void entry_00140770_0x140770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140770_0x140770");
#endif

    switch (ctx->pc) {
        case 0x14077cu: goto label_14077c;
        default: break;
    }

    ctx->pc = 0x140770u;

    // 0x140770: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x140770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x140774: 0xc05021c  jal         func_140870
    ctx->pc = 0x140774u;
    SET_GPR_U32(ctx, 31, 0x14077Cu);
    ctx->pc = 0x140778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140774u;
    // 0x140778: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x140774u, 0x14077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14077Cu;
label_14077c:
    // 0x14077c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14077cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x140780: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x140780u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x140784: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x140784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x140788: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x140788u;
    {
        const bool branch_taken_0x140788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140788) {
            ctx->pc = 0x140754u;
            return;
        }
    }
    ctx->pc = 0x140790u;
    // 0x140790: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x140790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x140794: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x140794u;
    {
        const bool branch_taken_0x140794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140794u;
        // 0x140798: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140794) {
            ctx->pc = 0x140854u;
            return;
        }
    }
    ctx->pc = 0x14079Cu;
}
