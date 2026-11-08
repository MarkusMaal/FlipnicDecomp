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

// Function: entry_0012f038
// Address: 0x12f038 - 0x12f070
void entry_0012f038_0x12f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f038_0x12f038");
#endif

    switch (ctx->pc) {
        case 0x12f040u: goto label_12f040;
        case 0x12f064u: goto label_12f064;
        case 0x12f06cu: goto label_12f06c;
        default: break;
    }

    ctx->pc = 0x12f038u;

    // 0x12f038: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x12F038u;
    SET_GPR_U32(ctx, 31, 0x12F040u);
    ctx->pc = 0x12F03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F038u;
    // 0x12f03c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12F038u, 0x12F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F040u;
label_12f040:
    // 0x12f040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f044: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x12F044u;
    {
        const bool branch_taken_0x12f044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F044u;
        // 0x12f048: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f044) {
            ctx->pc = 0x12F070u;
            return;
        }
    }
    ctx->pc = 0x12F04Cu;
    // 0x12f04c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x12f04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x12f050: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12f050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12f054: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12f054u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x12f058: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12f058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12f05c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12F05Cu;
    SET_GPR_U32(ctx, 31, 0x12F064u);
    ctx->pc = 0x12F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F05Cu;
    // 0x12f060: 0x24a5ecf0  addiu       $a1, $a1, -0x1310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12F05Cu, 0x12F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F064u;
label_12f064:
    // 0x12f064: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12F064u;
    SET_GPR_U32(ctx, 31, 0x12F06Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12F064u, 0x12F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F06Cu;
label_12f06c:
    // 0x12f06c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x12f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x12f070u;
}
