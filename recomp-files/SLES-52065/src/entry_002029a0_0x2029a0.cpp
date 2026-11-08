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

// Function: entry_002029a0
// Address: 0x2029a0 - 0x2029c4
void entry_002029a0_0x2029a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002029a0_0x2029a0");
#endif

    switch (ctx->pc) {
        case 0x2029c0u: goto label_2029c0;
        default: break;
    }

    ctx->pc = 0x2029a0u;

    // 0x2029a0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2029a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2029a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2029A4u;
    {
        const bool branch_taken_0x2029a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029A4u;
        // 0x2029a8: 0x26435088  addiu       $v1, $s2, 0x5088 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029a4) {
            ctx->pc = 0x2029C4u;
            return;
        }
    }
    ctx->pc = 0x2029ACu;
    // 0x2029ac: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2029acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2029b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2029b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2029b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2029b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029b8: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2029B8u;
    SET_GPR_U32(ctx, 31, 0x2029C0u);
    ctx->pc = 0x2029BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029B8u;
    // 0x2029bc: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2029B8u, 0x2029C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029C0u;
label_2029c0:
    // 0x2029c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2029c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2029c4u;
}
