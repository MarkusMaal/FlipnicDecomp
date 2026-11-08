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

// Function: entry_00198f58
// Address: 0x198f58 - 0x198f90
void entry_00198f58_0x198f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198f58_0x198f58");
#endif

    switch (ctx->pc) {
        case 0x198f68u: goto label_198f68;
        default: break;
    }

    ctx->pc = 0x198f58u;

    // 0x198f58: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x198f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x198f5c: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x198f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x198f60: 0xc057040  jal         func_15C100
    ctx->pc = 0x198F60u;
    SET_GPR_U32(ctx, 31, 0x198F68u);
    ctx->pc = 0x198F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F60u;
    // 0x198f64: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x198F60u, 0x198F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F68u;
label_198f68:
    // 0x198f68: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x198f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x198f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f70: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x198f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x198f74: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x198F74u;
    {
        const bool branch_taken_0x198f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198f74) {
            ctx->pc = 0x198FD0u;
            return;
        }
    }
    ctx->pc = 0x198F7Cu;
    // 0x198f7c: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x198f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x198f80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198F80u;
    {
        const bool branch_taken_0x198f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198f80) {
            ctx->pc = 0x198F90u;
            return;
        }
    }
    ctx->pc = 0x198F88u;
    // 0x198f88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x198F88u;
    {
        const bool branch_taken_0x198f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f88) {
            ctx->pc = 0x198FE0u;
            return;
        }
    }
    ctx->pc = 0x198F90u;
}
