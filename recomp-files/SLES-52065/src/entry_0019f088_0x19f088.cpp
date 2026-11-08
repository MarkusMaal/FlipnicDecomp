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

// Function: entry_0019f088
// Address: 0x19f088 - 0x19f0c0
void entry_0019f088_0x19f088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f088_0x19f088");
#endif

    ctx->pc = 0x19f088u;

    // 0x19f088: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f08c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f090: 0x8c4227a4  lw          $v0, 0x27A4($v0)
    ctx->pc = 0x19f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10148)));
    // 0x19f094: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19F094u;
    {
        const bool branch_taken_0x19f094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f094) {
            ctx->pc = 0x19F0C0u;
            return;
        }
    }
    ctx->pc = 0x19F09Cu;
    // 0x19f09c: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x19f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x19f0a0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F0A0u;
    {
        const bool branch_taken_0x19f0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19f0a0) {
            ctx->pc = 0x19F0C0u;
            return;
        }
    }
    ctx->pc = 0x19F0A8u;
    // 0x19f0a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19f0ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0b0: 0xaf83831c  sw          $v1, -0x7CE4($gp)
    ctx->pc = 0x19f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 3));
    // 0x19f0b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19f0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f0b8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F0B8u;
    SET_GPR_U32(ctx, 31, 0x19F0C0u);
    ctx->pc = 0x19F0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0B8u;
    // 0x19f0bc: 0xa043002e  sb          $v1, 0x2E($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F0B8u, 0x19F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0C0u;
}
