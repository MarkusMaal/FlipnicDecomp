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

// Function: entry_001b3b34
// Address: 0x1b3b34 - 0x1b3b68
void entry_001b3b34_0x1b3b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3b34_0x1b3b34");
#endif

    ctx->pc = 0x1b3b34u;

    // 0x1b3b34: 0x0  nop
    ctx->pc = 0x1b3b34u;
    // NOP
    // 0x1b3b38: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x1b3b38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b3b3c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3B3Cu;
    {
        const bool branch_taken_0x1b3b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b3c) {
            ctx->pc = 0x1B3B24u;
            return;
        }
    }
    ctx->pc = 0x1B3B44u;
    // 0x1b3b44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3b48: 0xac8328e0  sw          $v1, 0x28E0($a0)
    ctx->pc = 0x1b3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10464), GPR_U32(ctx, 3));
    // 0x1b3b4c: 0xac8328dc  sw          $v1, 0x28DC($a0)
    ctx->pc = 0x1b3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10460), GPR_U32(ctx, 3));
    // 0x1b3b50: 0xac8028e8  sw          $zero, 0x28E8($a0)
    ctx->pc = 0x1b3b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10472), GPR_U32(ctx, 0));
    // 0x1b3b54: 0xa08028f4  sb          $zero, 0x28F4($a0)
    ctx->pc = 0x1b3b54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3b58: 0xa08028f5  sb          $zero, 0x28F5($a0)
    ctx->pc = 0x1b3b58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3B60u;
    {
        const bool branch_taken_0x1b3b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b60) {
            ctx->pc = 0x1B3B74u;
            return;
        }
    }
    ctx->pc = 0x1B3B68u;
}
