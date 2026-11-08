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

// Function: entry_001a59f8
// Address: 0x1a59f8 - 0x1a5a28
void entry_001a59f8_0x1a59f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a59f8_0x1a59f8");
#endif

    switch (ctx->pc) {
        case 0x1a5a18u: goto label_1a5a18;
        default: break;
    }

    ctx->pc = 0x1a59f8u;

    // 0x1a59f8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1a59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1a59fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a5a00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a5a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a04: 0x8c470788  lw          $a3, 0x788($v0)
    ctx->pc = 0x1a5a04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x1a5a08: 0x24530788  addiu       $s3, $v0, 0x788
    ctx->pc = 0x1a5a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1928));
    // 0x1a5a0c: 0x8e040a60  lw          $a0, 0xA60($s0)
    ctx->pc = 0x1a5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2656)));
    // 0x1a5a10: 0xc06ccd8  jal         func_1B3360
    ctx->pc = 0x1A5A10u;
    SET_GPR_U32(ctx, 31, 0x1A5A18u);
    ctx->pc = 0x1A5A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A10u;
    // 0x1a5a14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3360u, 0x1A5A10u, 0x1A5A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A18u;
label_1a5a18:
    // 0x1a5a18: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x1a5a18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a5a1c: 0xde040780  ld          $a0, 0x780($s0)
    ctx->pc = 0x1a5a1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 1920)));
    // 0x1a5a20: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1a5a20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a5a24: 0xfe030780  sd          $v1, 0x780($s0)
    ctx->pc = 0x1a5a24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1920), GPR_U64(ctx, 3));
    ctx->pc = 0x1a5a28u;
}
