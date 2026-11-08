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

// Function: entry_001c6f3c
// Address: 0x1c6f3c - 0x1c6f7c
void entry_001c6f3c_0x1c6f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6f3c_0x1c6f3c");
#endif

    ctx->pc = 0x1c6f3cu;

    // 0x1c6f3c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1c6f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1c6f40: 0x10600210  beqz        $v1, . + 4 + (0x210 << 2)
    ctx->pc = 0x1C6F40u;
    {
        const bool branch_taken_0x1c6f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F40u;
        // 0x1c6f44: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f40) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6F48u;
    // 0x1c6f48: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6F48u;
    {
        const bool branch_taken_0x1c6f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6f48) {
            ctx->pc = 0x1C6F94u;
            return;
        }
    }
    ctx->pc = 0x1C6F50u;
    // 0x1c6f50: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1c6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1c6f54: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6F54u;
    {
        const bool branch_taken_0x1c6f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F54u;
        // 0x1c6f58: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f54) {
            ctx->pc = 0x1C6F8Cu;
            return;
        }
    }
    ctx->pc = 0x1C6F5Cu;
    // 0x1c6f5c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c6f60: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6F60u;
    {
        const bool branch_taken_0x1c6f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F60u;
        // 0x1c6f64: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f60) {
            ctx->pc = 0x1C6F80u;
            return;
        }
    }
    ctx->pc = 0x1C6F68u;
    // 0x1c6f68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6f6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6F6Cu;
    {
        const bool branch_taken_0x1c6f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6f6c) {
            ctx->pc = 0x1C6F7Cu;
            return;
        }
    }
    ctx->pc = 0x1C6F74u;
    // 0x1c6f74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6F74u;
    {
        const bool branch_taken_0x1c6f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f74) {
            ctx->pc = 0x1C6F88u;
            return;
        }
    }
    ctx->pc = 0x1C6F7Cu;
}
