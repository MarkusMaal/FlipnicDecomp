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

// Function: entry_001e4e84
// Address: 0x1e4e84 - 0x1e4eac
void entry_001e4e84_0x1e4e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4e84_0x1e4e84");
#endif

    ctx->pc = 0x1e4e84u;

    // 0x1e4e84: 0x90820052  lbu         $v0, 0x52($a0)
    ctx->pc = 0x1e4e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x1e4e88: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E4E88u;
    {
        const bool branch_taken_0x1e4e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e88) {
            ctx->pc = 0x1E4EC8u;
            return;
        }
    }
    ctx->pc = 0x1E4E90u;
    // 0x1e4e90: 0x90820051  lbu         $v0, 0x51($a0)
    ctx->pc = 0x1e4e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 81)));
    // 0x1e4e94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E4E94u;
    {
        const bool branch_taken_0x1e4e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E94u;
        // 0x1e4e98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e94) {
            ctx->pc = 0x1E4EC8u;
            return;
        }
    }
    ctx->pc = 0x1E4E9Cu;
    // 0x1e4e9c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4E9Cu;
    {
        const bool branch_taken_0x1e4e9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E9Cu;
        // 0x1e4ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e9c) {
            ctx->pc = 0x1E4EACu;
            return;
        }
    }
    ctx->pc = 0x1E4EA4u;
    // 0x1e4ea4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E4EA4u;
    {
        const bool branch_taken_0x1e4ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ea4) {
            ctx->pc = 0x1E4F1Cu;
            return;
        }
    }
    ctx->pc = 0x1E4EACu;
}
