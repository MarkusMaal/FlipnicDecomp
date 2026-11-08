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

// Function: entry_0015eb14
// Address: 0x15eb14 - 0x15eb34
void entry_0015eb14_0x15eb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb14_0x15eb14");
#endif

    ctx->pc = 0x15eb14u;

    // 0x15eb14: 0x0  nop
    ctx->pc = 0x15eb14u;
    // NOP
    // 0x15eb18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eb1c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15EB1Cu;
    {
        const bool branch_taken_0x15eb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB1Cu;
        // 0x15eb20: 0xa691022c  sh          $s1, 0x22C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 556), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb1c) {
            ctx->pc = 0x15EB34u;
            return;
        }
    }
    ctx->pc = 0x15EB24u;
    // 0x15eb24: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x15eb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15eb28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15eb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb2c: 0xc05b698  jal         func_16DA60
    ctx->pc = 0x15EB2Cu;
    SET_GPR_U32(ctx, 31, 0x15EB34u);
    ctx->pc = 0x15EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB2Cu;
    // 0x15eb30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DA60u, 0x15EB2Cu, 0x15EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB34u;
}
