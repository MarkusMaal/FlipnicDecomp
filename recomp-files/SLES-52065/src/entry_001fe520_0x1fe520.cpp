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

// Function: entry_001fe520
// Address: 0x1fe520 - 0x1fe548
void entry_001fe520_0x1fe520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe520_0x1fe520");
#endif

    switch (ctx->pc) {
        case 0x1fe530u: goto label_1fe530;
        default: break;
    }

    ctx->pc = 0x1fe520u;

    // 0x1fe520: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe528: 0xc07fe2a  jal         func_1FF8A8
    ctx->pc = 0x1FE528u;
    SET_GPR_U32(ctx, 31, 0x1FE530u);
    ctx->pc = 0x1FE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE528u;
    // 0x1fe52c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1FE528u, 0x1FE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE530u;
label_1fe530:
    // 0x1fe530: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fe530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fe534: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fe534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fe538: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1fe538u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fe53c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fe53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fe540: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1fe540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1fe544: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fe544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1fe548u;
}
