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

// Function: entry_0013d9c0
// Address: 0x13d9c0 - 0x13d9e4
void entry_0013d9c0_0x13d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d9c0_0x13d9c0");
#endif

    ctx->pc = 0x13d9c0u;

    // 0x13d9c0: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13D9C0u;
    {
        const bool branch_taken_0x13d9c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9C0u;
        // 0x13d9c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d9c0) {
            ctx->pc = 0x13DA14u;
            return;
        }
    }
    ctx->pc = 0x13D9C8u;
    // 0x13d9c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d9cc: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D9CCu;
    {
        const bool branch_taken_0x13d9cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x13D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9CCu;
        // 0x13d9d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d9cc) {
            ctx->pc = 0x13D9ECu;
            return;
        }
    }
    ctx->pc = 0x13D9D4u;
    // 0x13d9d4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D9D4u;
    {
        const bool branch_taken_0x13d9d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x13d9d4) {
            ctx->pc = 0x13D9E4u;
            return;
        }
    }
    ctx->pc = 0x13D9DCu;
    // 0x13d9dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13D9DCu;
    {
        const bool branch_taken_0x13d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d9dc) {
            ctx->pc = 0x13DA18u;
            return;
        }
    }
    ctx->pc = 0x13D9E4u;
}
