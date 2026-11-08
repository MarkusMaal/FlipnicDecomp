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

// Function: entry_00181e54
// Address: 0x181e54 - 0x181e80
void entry_00181e54_0x181e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e54_0x181e54");
#endif

    ctx->pc = 0x181e54u;

    // 0x181e54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x181e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181e58: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x181E58u;
    {
        const bool branch_taken_0x181e58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x181e58) {
            ctx->pc = 0x181E8Cu;
            return;
        }
    }
    ctx->pc = 0x181E60u;
    // 0x181e60: 0x8f908660  lw          $s0, -0x79A0($gp)
    ctx->pc = 0x181e60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x181e64: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x181E64u;
    {
        const bool branch_taken_0x181e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e64) {
            ctx->pc = 0x181E88u;
            return;
        }
    }
    ctx->pc = 0x181E6Cu;
    // 0x181e6c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x181e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x181e70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181E70u;
    {
        const bool branch_taken_0x181e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e70) {
            ctx->pc = 0x181E80u;
            return;
        }
    }
    ctx->pc = 0x181E78u;
    // 0x181e78: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x181E78u;
    SET_GPR_U32(ctx, 31, 0x181E80u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x181E78u, 0x181E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E80u;
}
