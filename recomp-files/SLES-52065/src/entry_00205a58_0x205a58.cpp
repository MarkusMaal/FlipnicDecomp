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

// Function: entry_00205a58
// Address: 0x205a58 - 0x205a80
void entry_00205a58_0x205a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205a58_0x205a58");
#endif

    switch (ctx->pc) {
        case 0x205a78u: goto label_205a78;
        default: break;
    }

    ctx->pc = 0x205a58u;

    // 0x205a58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x205A58u;
    {
        const bool branch_taken_0x205a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A58u;
        // 0x205a5c: 0x27a30100  addiu       $v1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a58) {
            ctx->pc = 0x205A80u;
            return;
        }
    }
    ctx->pc = 0x205A60u;
    // 0x205a60: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x205a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x205a64: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x205A64u;
    {
        const bool branch_taken_0x205a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A64u;
        // 0x205a68: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a64) {
            ctx->pc = 0x205D28u;
            return;
        }
    }
    ctx->pc = 0x205A6Cu;
    // 0x205a6c: 0x8224ffff  lb          $a0, -0x1($s1)
    ctx->pc = 0x205a6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
    // 0x205a70: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x205A70u;
    SET_GPR_U32(ctx, 31, 0x205A78u);
    ctx->pc = 0x205A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A70u;
    // 0x205a74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x205A70u, 0x205A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A78u;
label_205a78:
    // 0x205a78: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x205A78u;
    {
        const bool branch_taken_0x205a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A78u;
        // 0x205a7c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a78) {
            ctx->pc = 0x205D28u;
            return;
        }
    }
    ctx->pc = 0x205A80u;
}
