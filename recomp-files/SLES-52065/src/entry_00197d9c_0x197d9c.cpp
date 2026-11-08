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

// Function: entry_00197d9c
// Address: 0x197d9c - 0x197dd8
void entry_00197d9c_0x197d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197d9c_0x197d9c");
#endif

    switch (ctx->pc) {
        case 0x197dc0u: goto label_197dc0;
        case 0x197dd4u: goto label_197dd4;
        default: break;
    }

    ctx->pc = 0x197d9cu;

label_197d9c:
    // 0x197d9c: 0x8ea206dc  lw          $v0, 0x6DC($s5)
    ctx->pc = 0x197d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1756)));
label_197da0:
    // 0x197da0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_197da4:
    if (ctx->pc == 0x197DA4u) {
        ctx->pc = 0x197DA8u;
        goto label_197da8;
    }
    ctx->pc = 0x197DA0u;
    {
        const bool branch_taken_0x197da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197da0) {
            ctx->pc = 0x197DD8u;
            return;
        }
    }
    ctx->pc = 0x197DA8u;
label_197da8:
    // 0x197da8: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x197da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_197dac:
    // 0x197dac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197db0:
    // 0x197db0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197db4:
    // 0x197db4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197db8:
    // 0x197db8: 0x320f809  jalr        $t9
label_197dbc:
    if (ctx->pc == 0x197DBCu) {
        ctx->pc = 0x197DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DB8u;
        // 0x197dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DC0u;
        goto label_197dc0;
    }
    ctx->pc = 0x197DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197DC0u);
        ctx->pc = 0x197DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DB8u;
        // 0x197dbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197DB8u, 0x197DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197DC0u;
label_197dc0:
    // 0x197dc0: 0x8ea406e4  lw          $a0, 0x6E4($s5)
    ctx->pc = 0x197dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1764)));
label_197dc4:
    // 0x197dc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197dc8:
    // 0x197dc8: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x197dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_197dcc:
    // 0x197dcc: 0x320f809  jalr        $t9
label_197dd0:
    if (ctx->pc == 0x197DD0u) {
        ctx->pc = 0x197DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DCCu;
        // 0x197dd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197DD4u;
        goto label_197dd4;
    }
    ctx->pc = 0x197DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197DD4u);
        ctx->pc = 0x197DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DCCu;
        // 0x197dd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197DCCu, 0x197DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197DD4u;
label_197dd4:
    // 0x197dd4: 0xaea006dc  sw          $zero, 0x6DC($s5)
    ctx->pc = 0x197dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1756), GPR_U32(ctx, 0));
    ctx->pc = 0x197dd8u;
}
