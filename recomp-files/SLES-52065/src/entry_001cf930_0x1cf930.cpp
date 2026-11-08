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

// Function: entry_001cf930
// Address: 0x1cf930 - 0x1cf968
void entry_001cf930_0x1cf930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf930_0x1cf930");
#endif

    switch (ctx->pc) {
        case 0x1cf950u: goto label_1cf950;
        case 0x1cf95cu: goto label_1cf95c;
        default: break;
    }

    ctx->pc = 0x1cf930u;

    // 0x1cf930: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x1cf930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1cf934: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1cf934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1cf938: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cf938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cf93c: 0x90630014  lbu         $v1, 0x14($v1)
    ctx->pc = 0x1cf93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1cf940: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CF940u;
    {
        const bool branch_taken_0x1cf940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF940u;
        // 0x1cf944: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf940) {
            ctx->pc = 0x1CF9ACu;
            return;
        }
    }
    ctx->pc = 0x1CF948u;
    // 0x1cf948: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1CF948u;
    SET_GPR_U32(ctx, 31, 0x1CF950u);
    ctx->pc = 0x1CF94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF948u;
    // 0x1cf94c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1CF948u, 0x1CF950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF950u;
label_1cf950:
    // 0x1cf950: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf954: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1CF954u;
    SET_GPR_U32(ctx, 31, 0x1CF95Cu);
    ctx->pc = 0x1CF958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF954u;
    // 0x1cf958: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1CF954u, 0x1CF95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF95Cu;
label_1cf95c:
    // 0x1cf95c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF960u;
    {
        const bool branch_taken_0x1cf960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF960u;
        // 0x1cf964: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf960) {
            ctx->pc = 0x1CF988u;
            return;
        }
    }
    ctx->pc = 0x1CF968u;
}
