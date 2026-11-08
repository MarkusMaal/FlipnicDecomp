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

// Function: entry_001be21c
// Address: 0x1be21c - 0x1be250
void entry_001be21c_0x1be21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be21c_0x1be21c");
#endif

    switch (ctx->pc) {
        case 0x1be228u: goto label_1be228;
        case 0x1be248u: goto label_1be248;
        default: break;
    }

    ctx->pc = 0x1be21cu;

    // 0x1be21c: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x1be21cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1be220: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BE220u;
    SET_GPR_U32(ctx, 31, 0x1BE228u);
    ctx->pc = 0x1BE224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE220u;
    // 0x1be224: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BE220u, 0x1BE228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE228u;
label_1be228:
    // 0x1be228: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1be228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be22c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE22Cu;
    {
        const bool branch_taken_0x1be22c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE22Cu;
        // 0x1be230: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be22c) {
            ctx->pc = 0x1BE250u;
            return;
        }
    }
    ctx->pc = 0x1BE234u;
    // 0x1be234: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1be234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1be238: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1be238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1be23c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1be23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1be240: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BE240u;
    SET_GPR_U32(ctx, 31, 0x1BE248u);
    ctx->pc = 0x1BE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE240u;
    // 0x1be244: 0x24a51250  addiu       $a1, $a1, 0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BE240u, 0x1BE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE248u;
label_1be248:
    // 0x1be248: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BE248u;
    SET_GPR_U32(ctx, 31, 0x1BE250u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BE248u, 0x1BE250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE250u;
}
