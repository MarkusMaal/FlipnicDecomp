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

// Function: entry_0010a388
// Address: 0x10a388 - 0x10a3bc
void entry_0010a388_0x10a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a388_0x10a388");
#endif

    switch (ctx->pc) {
        case 0x10a390u: goto label_10a390;
        case 0x10a3a0u: goto label_10a3a0;
        default: break;
    }

    ctx->pc = 0x10a388u;

    // 0x10a388: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10A388u;
    SET_GPR_U32(ctx, 31, 0x10A390u);
    ctx->pc = 0x10A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A388u;
    // 0x10a38c: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10A388u, 0x10A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A390u;
label_10a390:
    // 0x10a390: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10A390u;
    {
        const bool branch_taken_0x10a390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A390u;
        // 0x10a394: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a390) {
            ctx->pc = 0x10A3BCu;
            return;
        }
    }
    ctx->pc = 0x10A398u;
    // 0x10a398: 0xc056360  jal         func_158D80
    ctx->pc = 0x10A398u;
    SET_GPR_U32(ctx, 31, 0x10A3A0u);
    ctx->pc = 0x10A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A398u;
    // 0x10a39c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10A398u, 0x10A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3A0u;
label_10a3a0:
    // 0x10a3a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x10a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x10a3a4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10a3a8: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x10a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x10a3ac: 0x244282f0  addiu       $v0, $v0, -0x7D10
    ctx->pc = 0x10a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935280));
    // 0x10a3b0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x10a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x10a3b4: 0xae600210  sw          $zero, 0x210($s3)
    ctx->pc = 0x10a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 0));
    // 0x10a3b8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x10a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10a3bcu;
}
