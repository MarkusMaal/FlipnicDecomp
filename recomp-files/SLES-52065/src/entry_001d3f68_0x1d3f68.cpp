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

// Function: entry_001d3f68
// Address: 0x1d3f68 - 0x1d3f98
void entry_001d3f68_0x1d3f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3f68_0x1d3f68");
#endif

    switch (ctx->pc) {
        case 0x1d3f94u: goto label_1d3f94;
        default: break;
    }

    ctx->pc = 0x1d3f68u;

    // 0x1d3f68: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x1d3f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1d3f6c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d3f6cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d3f70: 0xde2200a0  ld          $v0, 0xA0($s1)
    ctx->pc = 0x1d3f70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1d3f74: 0xb31814  dsllv       $v1, $s3, $a1
    ctx->pc = 0x1d3f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1d3f78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d3f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d3f7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3F7Cu;
    {
        const bool branch_taken_0x1d3f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F7Cu;
        // 0x1d3f80: 0x66100001  daddiu      $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f7c) {
            ctx->pc = 0x1D3F98u;
            return;
        }
    }
    ctx->pc = 0x1D3F84u;
    // 0x1d3f84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d3f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d3f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d3f8c: 0xc074f80  jal         func_1D3E00
    ctx->pc = 0x1D3F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F94u);
    ctx->pc = 0x1D3F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F8Cu;
    // 0x1d3f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3E00u, 0x1D3F8Cu, 0x1D3F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F94u;
label_1d3f94:
    // 0x1d3f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d3f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3f98u;
}
