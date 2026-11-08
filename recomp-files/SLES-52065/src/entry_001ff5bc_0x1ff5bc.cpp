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

// Function: entry_001ff5bc
// Address: 0x1ff5bc - 0x1ff5e8
void entry_001ff5bc_0x1ff5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff5bc_0x1ff5bc");
#endif

    switch (ctx->pc) {
        case 0x1ff5e0u: goto label_1ff5e0;
        default: break;
    }

    ctx->pc = 0x1ff5bcu;

    // 0x1ff5bc: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x1ff5bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ff5c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ff5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ff5c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5c8: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1ff5c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff5cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ff5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ff5d0: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x1ff5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x1ff5d4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ff5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ff5d8: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FF5D8u;
    SET_GPR_U32(ctx, 31, 0x1FF5E0u);
    ctx->pc = 0x1FF5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5D8u;
    // 0x1ff5dc: 0xad490008  sw          $t1, 0x8($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FF5D8u, 0x1FF5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5E0u;
label_1ff5e0:
    // 0x1ff5e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FF5E0u;
    {
        const bool branch_taken_0x1ff5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5E0u;
        // 0x1ff5e4: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5e0) {
            ctx->pc = 0x1FF620u;
            return;
        }
    }
    ctx->pc = 0x1FF5E8u;
}
