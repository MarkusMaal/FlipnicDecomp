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

// Function: entry_0019f034
// Address: 0x19f034 - 0x19f088
void entry_0019f034_0x19f034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f034_0x19f034");
#endif

    switch (ctx->pc) {
        case 0x19f05cu: goto label_19f05c;
        case 0x19f064u: goto label_19f064;
        case 0x19f06cu: goto label_19f06c;
        default: break;
    }

    ctx->pc = 0x19f034u;

    // 0x19f034: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f038: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f03c: 0x8c422798  lw          $v0, 0x2798($v0)
    ctx->pc = 0x19f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10136)));
    // 0x19f040: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19F040u;
    {
        const bool branch_taken_0x19f040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f040) {
            ctx->pc = 0x19F088u;
            return;
        }
    }
    ctx->pc = 0x19F048u;
    // 0x19f048: 0x8e820690  lw          $v0, 0x690($s4)
    ctx->pc = 0x19f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x19f04c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19F04Cu;
    {
        const bool branch_taken_0x19f04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19f04c) {
            ctx->pc = 0x19F088u;
            return;
        }
    }
    ctx->pc = 0x19F054u;
    // 0x19f054: 0xc0424e4  jal         func_109390
    ctx->pc = 0x19F054u;
    SET_GPR_U32(ctx, 31, 0x19F05Cu);
    ctx->pc = 0x19F058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F054u;
    // 0x19f058: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109390u, 0x19F054u, 0x19F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F05Cu;
label_19f05c:
    // 0x19f05c: 0xc058118  jal         func_160460
    ctx->pc = 0x19F05Cu;
    SET_GPR_U32(ctx, 31, 0x19F064u);
    ctx->pc = 0x19F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F05Cu;
    // 0x19f060: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160460u, 0x19F05Cu, 0x19F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F064u;
label_19f064:
    // 0x19f064: 0xc058018  jal         func_160060
    ctx->pc = 0x19F064u;
    SET_GPR_U32(ctx, 31, 0x19F06Cu);
    ctx->pc = 0x19F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F064u;
    // 0x19f068: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x19F064u, 0x19F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F06Cu;
label_19f06c:
    // 0x19f06c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19f070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f074: 0xaf83831c  sw          $v1, -0x7CE4($gp)
    ctx->pc = 0x19f074u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 3));
    // 0x19f078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f07c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x19f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19f080: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F080u;
    SET_GPR_U32(ctx, 31, 0x19F088u);
    ctx->pc = 0x19F084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F080u;
    // 0x19f084: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F080u, 0x19F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F088u;
}
