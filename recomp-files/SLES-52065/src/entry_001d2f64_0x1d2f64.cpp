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

// Function: entry_001d2f64
// Address: 0x1d2f64 - 0x1d2f88
void entry_001d2f64_0x1d2f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2f64_0x1d2f64");
#endif

    ctx->pc = 0x1d2f64u;

    // 0x1d2f64: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1d2f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d2f68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2F68u;
    {
        const bool branch_taken_0x1d2f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f68) {
            ctx->pc = 0x1D2F88u;
            return;
        }
    }
    ctx->pc = 0x1D2F70u;
    // 0x1d2f70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2f74: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D2F74u;
    {
        const bool branch_taken_0x1d2f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F74u;
        // 0x1d2f78: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f74) {
            ctx->pc = 0x1D2F60u;
            return;
        }
    }
    ctx->pc = 0x1D2F7Cu;
    // 0x1d2f7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f80: 0xc074bee  jal         func_1D2FB8
    ctx->pc = 0x1D2F80u;
    SET_GPR_U32(ctx, 31, 0x1D2F88u);
    ctx->pc = 0x1D2F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2F80u;
    // 0x1d2f84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FB8u, 0x1D2F80u, 0x1D2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F88u;
}
