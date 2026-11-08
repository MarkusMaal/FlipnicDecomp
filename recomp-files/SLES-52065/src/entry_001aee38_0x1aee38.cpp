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

// Function: entry_001aee38
// Address: 0x1aee38 - 0x1aee78
void entry_001aee38_0x1aee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aee38_0x1aee38");
#endif

    switch (ctx->pc) {
        case 0x1aee70u: goto label_1aee70;
        default: break;
    }

    ctx->pc = 0x1aee38u;

    // 0x1aee38: 0x8e8306bc  lw          $v1, 0x6BC($s4)
    ctx->pc = 0x1aee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1724)));
    // 0x1aee3c: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AEE3Cu;
    {
        const bool branch_taken_0x1aee3c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1aee3c) {
            ctx->pc = 0x1AEEA4u;
            return;
        }
    }
    ctx->pc = 0x1AEE44u;
    // 0x1aee44: 0xae8006bc  sw          $zero, 0x6BC($s4)
    ctx->pc = 0x1aee44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1724), GPR_U32(ctx, 0));
    // 0x1aee48: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1aee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1aee4c: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1aee4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x1aee50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AEE50u;
    {
        const bool branch_taken_0x1aee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee50) {
            ctx->pc = 0x1AEE78u;
            return;
        }
    }
    ctx->pc = 0x1AEE58u;
    // 0x1aee58: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1aee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1aee5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aee60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee64: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aee64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aee68: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AEE68u;
    SET_GPR_U32(ctx, 31, 0x1AEE70u);
    ctx->pc = 0x1AEE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE68u;
    // 0x1aee6c: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEE68u, 0x1AEE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE70u;
label_1aee70:
    // 0x1aee70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AEE70u;
    {
        const bool branch_taken_0x1aee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE70u;
        // 0x1aee74: 0x928306b9  lbu         $v1, 0x6B9($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1721)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee70) {
            ctx->pc = 0x1AEEA8u;
            return;
        }
    }
    ctx->pc = 0x1AEE78u;
}
