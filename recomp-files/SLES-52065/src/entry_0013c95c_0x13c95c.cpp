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

// Function: entry_0013c95c
// Address: 0x13c95c - 0x13c98c
void entry_0013c95c_0x13c95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c95c_0x13c95c");
#endif

    switch (ctx->pc) {
        case 0x13c964u: goto label_13c964;
        case 0x13c96cu: goto label_13c96c;
        default: break;
    }

    ctx->pc = 0x13c95cu;

    // 0x13c95c: 0xc061bd0  jal         func_186F40
    ctx->pc = 0x13C95Cu;
    SET_GPR_U32(ctx, 31, 0x13C964u);
    ctx->pc = 0x13C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C95Cu;
    // 0x13c960: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F40u, 0x13C95Cu, 0x13C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C964u;
label_13c964:
    // 0x13c964: 0xc061b50  jal         func_186D40
    ctx->pc = 0x13C964u;
    SET_GPR_U32(ctx, 31, 0x13C96Cu);
    ctx->pc = 0x13C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C964u;
    // 0x13c968: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x13C964u, 0x13C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C96Cu;
label_13c96c:
    // 0x13c96c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c970: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C970u;
    {
        const bool branch_taken_0x13c970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13c970) {
            ctx->pc = 0x13C994u;
            return;
        }
    }
    ctx->pc = 0x13C978u;
    // 0x13c978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c97c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C97Cu;
    {
        const bool branch_taken_0x13c97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13c97c) {
            ctx->pc = 0x13C98Cu;
            return;
        }
    }
    ctx->pc = 0x13C984u;
    // 0x13c984: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13C984u;
    {
        const bool branch_taken_0x13c984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c984) {
            ctx->pc = 0x13C9A0u;
            return;
        }
    }
    ctx->pc = 0x13C98Cu;
}
