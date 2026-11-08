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

// Function: entry_001a3600
// Address: 0x1a3600 - 0x1a3640
void entry_001a3600_0x1a3600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3600_0x1a3600");
#endif

    switch (ctx->pc) {
        case 0x1a3610u: goto label_1a3610;
        default: break;
    }

    ctx->pc = 0x1a3600u;

    // 0x1a3600: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1a3600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1a3604: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1a3604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1a3608: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A3608u;
    SET_GPR_U32(ctx, 31, 0x1A3610u);
    ctx->pc = 0x1A360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3608u;
    // 0x1a360c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A3608u, 0x1A3610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3610u;
label_1a3610:
    // 0x1a3610: 0x8e23068c  lw          $v1, 0x68C($s1)
    ctx->pc = 0x1a3610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
    // 0x1a3614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3618: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a3618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a361c: 0xac620690  sw          $v0, 0x690($v1)
    ctx->pc = 0x1a361cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1680), GPR_U32(ctx, 2));
    // 0x1a3620: 0x8e22068c  lw          $v0, 0x68C($s1)
    ctx->pc = 0x1a3620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
    // 0x1a3624: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a3624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a3628: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a3628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a362c: 0xac520710  sw          $s2, 0x710($v0)
    ctx->pc = 0x1a362cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1808), GPR_U32(ctx, 18));
    // 0x1a3630: 0x8e22068c  lw          $v0, 0x68C($s1)
    ctx->pc = 0x1a3630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
    // 0x1a3634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a3638: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A3638u;
    {
        const bool branch_taken_0x1a3638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3638u;
        // 0x1a363c: 0xae22068c  sw          $v0, 0x68C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3638) {
            ctx->pc = 0x1A366Cu;
            return;
        }
    }
    ctx->pc = 0x1A3640u;
}
