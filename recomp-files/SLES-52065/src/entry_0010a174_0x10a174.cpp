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

// Function: entry_0010a174
// Address: 0x10a174 - 0x10a198
void entry_0010a174_0x10a174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a174_0x10a174");
#endif

    switch (ctx->pc) {
        case 0x10a184u: goto label_10a184;
        case 0x10a190u: goto label_10a190;
        default: break;
    }

    ctx->pc = 0x10a174u;

    // 0x10a174: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10A174u;
    {
        const bool branch_taken_0x10a174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a174) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A17Cu;
    // 0x10a17c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10A17Cu;
    SET_GPR_U32(ctx, 31, 0x10A184u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10A17Cu, 0x10A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A184u;
label_10a184:
    // 0x10a184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a188: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x10A188u;
    SET_GPR_U32(ctx, 31, 0x10A190u);
    ctx->pc = 0x10A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A188u;
    // 0x10a18c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x10A188u, 0x10A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A190u;
label_10a190:
    // 0x10a190: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x10A190u;
    {
        const bool branch_taken_0x10a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a190) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A198u;
}
