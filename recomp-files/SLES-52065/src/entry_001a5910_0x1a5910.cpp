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

// Function: entry_001a5910
// Address: 0x1a5910 - 0x1a593c
void entry_001a5910_0x1a5910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5910_0x1a5910");
#endif

    ctx->pc = 0x1a5910u;

    // 0x1a5910: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1a5910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1a5914: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x1a5914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1a5918: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5918u;
    {
        const bool branch_taken_0x1a5918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5918u;
        // 0x1a591c: 0x2132021  addu        $a0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5918) {
            ctx->pc = 0x1A593Cu;
            return;
        }
    }
    ctx->pc = 0x1A5920u;
    // 0x1a5920: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a5920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a5924: 0x8c830684  lw          $v1, 0x684($a0)
    ctx->pc = 0x1a5924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1668)));
    // 0x1a5928: 0x8c850688  lw          $a1, 0x688($a0)
    ctx->pc = 0x1a5928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1672)));
    // 0x1a592c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a592cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5934: 0xc05ee80  jal         func_17BA00
    ctx->pc = 0x1A5934u;
    SET_GPR_U32(ctx, 31, 0x1A593Cu);
    ctx->pc = 0x1A5938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5934u;
    // 0x1a5938: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x1A5934u, 0x1A593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A593Cu;
}
