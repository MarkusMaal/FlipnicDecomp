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

// Function: entry_00123860
// Address: 0x123860 - 0x1238b4
void entry_00123860_0x123860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123860_0x123860");
#endif

    switch (ctx->pc) {
        case 0x1238acu: goto label_1238ac;
        default: break;
    }

    ctx->pc = 0x123860u;

    // 0x123860: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123864: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x123864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123868: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x123868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x12386c: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x12386cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123870: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123874: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123878: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x12387c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123880: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123884: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x123884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x123888: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12388c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123890: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x123894: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x123898: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12389c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12389cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1238a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1238a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1238a4: 0xc048e98  jal         func_123A60
    ctx->pc = 0x1238A4u;
    SET_GPR_U32(ctx, 31, 0x1238ACu);
    ctx->pc = 0x1238A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1238A4u;
    // 0x1238a8: 0x432024  and         $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A60u, 0x1238A4u, 0x1238ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238ACu;
label_1238ac:
    // 0x1238ac: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1238ACu;
    {
        const bool branch_taken_0x1238ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1238ac) {
            ctx->pc = 0x123974u;
            return;
        }
    }
    ctx->pc = 0x1238B4u;
}
