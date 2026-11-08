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

// Function: entry_001d4948
// Address: 0x1d4948 - 0x1d4990
void entry_001d4948_0x1d4948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4948_0x1d4948");
#endif

    switch (ctx->pc) {
        case 0x1d4964u: goto label_1d4964;
        case 0x1d4978u: goto label_1d4978;
        case 0x1d4984u: goto label_1d4984;
        default: break;
    }

    ctx->pc = 0x1d4948u;

    // 0x1d4948: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d4948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d494c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D494Cu;
    {
        const bool branch_taken_0x1d494c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D494Cu;
        // 0x1d4950: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d494c) {
            ctx->pc = 0x1D4994u;
            return;
        }
    }
    ctx->pc = 0x1D4954u;
    // 0x1d4954: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1D4954u;
    {
        const bool branch_taken_0x1d4954 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4954u;
        // 0x1d4958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4954) {
            ctx->pc = 0x1D4994u;
            return;
        }
    }
    ctx->pc = 0x1D495Cu;
    // 0x1d495c: 0xc0750c6  jal         func_1D4318
    ctx->pc = 0x1D495Cu;
    SET_GPR_U32(ctx, 31, 0x1D4964u);
    ctx->pc = 0x1D4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D495Cu;
    // 0x1d4960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4318u, 0x1D495Cu, 0x1D4964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4964u;
label_1d4964:
    // 0x1d4964: 0x8e2202cc  lw          $v0, 0x2CC($s1)
    ctx->pc = 0x1d4964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 716)));
    // 0x1d4968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d496c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d496cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4970: 0xc074fc2  jal         func_1D3F08
    ctx->pc = 0x1D4970u;
    SET_GPR_U32(ctx, 31, 0x1D4978u);
    ctx->pc = 0x1D4974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4970u;
    // 0x1d4974: 0xae2202d0  sw          $v0, 0x2D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F08u, 0x1D4970u, 0x1D4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4978u;
label_1d4978:
    // 0x1d4978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d497c: 0xc0750da  jal         func_1D4368
    ctx->pc = 0x1D497Cu;
    SET_GPR_U32(ctx, 31, 0x1D4984u);
    ctx->pc = 0x1D4980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D497Cu;
    // 0x1d4980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4368u, 0x1D497Cu, 0x1D4984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4984u;
label_1d4984:
    // 0x1d4984: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d4984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4988: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1d498c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d498cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1d4990u;
}
