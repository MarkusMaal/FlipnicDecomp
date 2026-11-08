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

// Function: entry_00103f58
// Address: 0x103f58 - 0x103f94
void entry_00103f58_0x103f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103f58_0x103f58");
#endif

    switch (ctx->pc) {
        case 0x103f60u: goto label_103f60;
        case 0x103f70u: goto label_103f70;
        default: break;
    }

    ctx->pc = 0x103f58u;

    // 0x103f58: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103F58u;
    SET_GPR_U32(ctx, 31, 0x103F60u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103F58u, 0x103F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F60u;
label_103f60:
    // 0x103f60: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103F60u;
    {
        const bool branch_taken_0x103f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F60u;
        // 0x103f64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f60) {
            ctx->pc = 0x103F94u;
            return;
        }
    }
    ctx->pc = 0x103F68u;
    // 0x103f68: 0xc056360  jal         func_158D80
    ctx->pc = 0x103F68u;
    SET_GPR_U32(ctx, 31, 0x103F70u);
    ctx->pc = 0x103F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F68u;
    // 0x103f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103F68u, 0x103F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F70u;
label_103f70:
    // 0x103f70: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103f74: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103f78: 0x24427db0  addiu       $v0, $v0, 0x7DB0
    ctx->pc = 0x103f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32176));
    // 0x103f7c: 0x2463a550  addiu       $v1, $v1, -0x5AB0
    ctx->pc = 0x103f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944080));
    // 0x103f80: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103f84: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103f88: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103f8c: 0x24427d50  addiu       $v0, $v0, 0x7D50
    ctx->pc = 0x103f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32080));
    // 0x103f90: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103f94u;
}
