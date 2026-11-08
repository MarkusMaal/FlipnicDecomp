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

// Function: entry_001d42c0
// Address: 0x1d42c0 - 0x1d42ec
void entry_001d42c0_0x1d42c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d42c0_0x1d42c0");
#endif

    ctx->pc = 0x1d42c0u;

    // 0x1d42c0: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x1d42c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1d42c4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d42c4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d42c8: 0xde2200a0  ld          $v0, 0xA0($s1)
    ctx->pc = 0x1d42c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1d42cc: 0xb31814  dsllv       $v1, $s3, $a1
    ctx->pc = 0x1d42ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1d42d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d42d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d42d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D42D4u;
    {
        const bool branch_taken_0x1d42d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42D4u;
        // 0x1d42d8: 0x66100001  daddiu      $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42d4) {
            ctx->pc = 0x1D42ECu;
            return;
        }
    }
    ctx->pc = 0x1D42DCu;
    // 0x1d42dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d42dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d42e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d42e4: 0xc074f80  jal         func_1D3E00
    ctx->pc = 0x1D42E4u;
    SET_GPR_U32(ctx, 31, 0x1D42ECu);
    ctx->pc = 0x1D42E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42E4u;
    // 0x1d42e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3E00u, 0x1D42E4u, 0x1D42ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42ECu;
}
