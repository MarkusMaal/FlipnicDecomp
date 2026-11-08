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

// Function: entry_00123928
// Address: 0x123928 - 0x123974
void entry_00123928_0x123928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123928_0x123928");
#endif

    ctx->pc = 0x123928u;

    // 0x123928: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12392c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x12392cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123930: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x123930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x123934: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x123934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123938: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12393c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123940: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x123944: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123948: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12394c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x12394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x123950: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x123950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123954: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123958: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12395c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12395cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x123960: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x123960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x123964: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123968: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x123968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12396c: 0xc048e74  jal         func_1239D0
    ctx->pc = 0x12396Cu;
    SET_GPR_U32(ctx, 31, 0x123974u);
    ctx->pc = 0x123970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12396Cu;
    // 0x123970: 0x432024  and         $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x12396Cu, 0x123974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123974u;
}
