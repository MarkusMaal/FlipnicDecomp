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

// Function: entry_00191b64
// Address: 0x191b64 - 0x191b84
void entry_00191b64_0x191b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191b64_0x191b64");
#endif

    ctx->pc = 0x191b64u;

    // 0x191b64: 0x0  nop
    ctx->pc = 0x191b64u;
    // NOP
    // 0x191b68: 0x24a4002c  addiu       $a0, $a1, 0x2C
    ctx->pc = 0x191b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x191b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191b70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b74: 0xac4504d0  sw          $a1, 0x4D0($v0)
    ctx->pc = 0x191b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
    // 0x191b78: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x191b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191b7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x191B7Cu;
    {
        const bool branch_taken_0x191b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B7Cu;
        // 0x191b80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b7c) {
            ctx->pc = 0x191BBCu;
            return;
        }
    }
    ctx->pc = 0x191B84u;
}
