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

// Function: caseD_1
// Address: 0x1a6970 - 0x1a699c
void caseD_1_0x1a6970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a6970");
#endif

    switch (ctx->pc) {
        case 0x1a6970u: goto label_1a6970;
        case 0x1a6974u: goto label_1a6974;
        case 0x1a6978u: goto label_1a6978;
        case 0x1a697cu: goto label_1a697c;
        case 0x1a6980u: goto label_1a6980;
        case 0x1a6984u: goto label_1a6984;
        case 0x1a6988u: goto label_1a6988;
        case 0x1a698cu: goto label_1a698c;
        case 0x1a6990u: goto label_1a6990;
        case 0x1a6994u: goto label_1a6994;
        case 0x1a6998u: goto label_1a6998;
        default: break;
    }

    ctx->pc = 0x1a6970u;

label_1a6970:
    // 0x1a6970: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6974:
    // 0x1a6974: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6978:
    // 0x1a6978: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a6978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a697c:
    // 0x1a697c: 0x320f809  jalr        $t9
label_1a6980:
    if (ctx->pc == 0x1A6980u) {
        ctx->pc = 0x1A6984u;
        goto label_1a6984;
    }
    ctx->pc = 0x1A697Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6984u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A697Cu, 0x1A6984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6984u;
label_1a6984:
    // 0x1a6984: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1a6988:
    if (ctx->pc == 0x1A6988u) {
        ctx->pc = 0x1A698Cu;
        goto label_1a698c;
    }
    ctx->pc = 0x1A6984u;
    {
        const bool branch_taken_0x1a6984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6984) {
            ctx->pc = 0x1A6A58u;
            return;
        }
    }
    ctx->pc = 0x1A698Cu;
label_1a698c:
    // 0x1a698c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6990:
    // 0x1a6990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6994:
    // 0x1a6994: 0x10000030  b           . + 4 + (0x30 << 2)
label_1a6998:
    if (ctx->pc == 0x1A6998u) {
        ctx->pc = 0x1A6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6994u;
        // 0x1a6998: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A699Cu;
        goto label_fallthrough_0x1a6994;
    }
    ctx->pc = 0x1A6994u;
    {
        const bool branch_taken_0x1a6994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6994u;
        // 0x1a6998: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6994) {
            ctx->pc = 0x1A6A58u;
            return;
        }
    }
label_fallthrough_0x1a6994:
    ctx->pc = 0x1A699Cu;
}
