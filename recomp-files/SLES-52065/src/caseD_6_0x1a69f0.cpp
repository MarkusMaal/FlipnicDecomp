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

// Function: caseD_6
// Address: 0x1a69f0 - 0x1a6a1c
void caseD_6_0x1a69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1a69f0");
#endif

    switch (ctx->pc) {
        case 0x1a69f0u: goto label_1a69f0;
        case 0x1a69f4u: goto label_1a69f4;
        case 0x1a69f8u: goto label_1a69f8;
        case 0x1a69fcu: goto label_1a69fc;
        case 0x1a6a00u: goto label_1a6a00;
        case 0x1a6a04u: goto label_1a6a04;
        case 0x1a6a08u: goto label_1a6a08;
        case 0x1a6a0cu: goto label_1a6a0c;
        case 0x1a6a10u: goto label_1a6a10;
        case 0x1a6a14u: goto label_1a6a14;
        case 0x1a6a18u: goto label_1a6a18;
        default: break;
    }

    ctx->pc = 0x1a69f0u;

label_1a69f0:
    // 0x1a69f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a69f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a69f4:
    // 0x1a69f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a69f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a69f8:
    // 0x1a69f8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a69f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a69fc:
    // 0x1a69fc: 0x320f809  jalr        $t9
label_1a6a00:
    if (ctx->pc == 0x1A6A00u) {
        ctx->pc = 0x1A6A04u;
        goto label_1a6a04;
    }
    ctx->pc = 0x1A69FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A69FCu, 0x1A6A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6A04u;
label_1a6a04:
    // 0x1a6a04: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a6a08:
    if (ctx->pc == 0x1A6A08u) {
        ctx->pc = 0x1A6A0Cu;
        goto label_1a6a0c;
    }
    ctx->pc = 0x1A6A04u;
    {
        const bool branch_taken_0x1a6a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6a04) {
            ctx->pc = 0x1A6A58u;
            return;
        }
    }
    ctx->pc = 0x1A6A0Cu;
label_1a6a0c:
    // 0x1a6a0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6a10:
    // 0x1a6a10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6a14:
    // 0x1a6a14: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a6a18:
    if (ctx->pc == 0x1A6A18u) {
        ctx->pc = 0x1A6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A14u;
        // 0x1a6a18: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A1Cu;
        goto label_fallthrough_0x1a6a14;
    }
    ctx->pc = 0x1A6A14u;
    {
        const bool branch_taken_0x1a6a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A14u;
        // 0x1a6a18: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a14) {
            ctx->pc = 0x1A6A58u;
            return;
        }
    }
label_fallthrough_0x1a6a14:
    ctx->pc = 0x1A6A1Cu;
}
