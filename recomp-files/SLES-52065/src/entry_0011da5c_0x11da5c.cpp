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

// Function: entry_0011da5c
// Address: 0x11da5c - 0x11daa8
void entry_0011da5c_0x11da5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011da5c_0x11da5c");
#endif

    ctx->pc = 0x11da5cu;

    // 0x11da5c: 0x0  nop
    ctx->pc = 0x11da5cu;
    // NOP
    // 0x11da60: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x11da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11da64: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x11da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11da68: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x11DA68u;
    {
        const bool branch_taken_0x11da68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA68u;
        // 0x11da6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da68) {
            ctx->pc = 0x11DC14u;
            return;
        }
    }
    ctx->pc = 0x11DA70u;
    // 0x11da70: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x11DA70u;
    {
        const bool branch_taken_0x11da70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11da70) {
            ctx->pc = 0x11DC14u;
            return;
        }
    }
    ctx->pc = 0x11DA78u;
    // 0x11da78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x11da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11da7c: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x11DA7Cu;
    {
        const bool branch_taken_0x11da7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA7Cu;
        // 0x11da80: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da7c) {
            ctx->pc = 0x11DB94u;
            return;
        }
    }
    ctx->pc = 0x11DA84u;
    // 0x11da84: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11DA84u;
    {
        const bool branch_taken_0x11da84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11da84) {
            ctx->pc = 0x11DB94u;
            return;
        }
    }
    ctx->pc = 0x11DA8Cu;
    // 0x11da8c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x11da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11da90: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DA90u;
    {
        const bool branch_taken_0x11da90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA90u;
        // 0x11da94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da90) {
            ctx->pc = 0x11DAA8u;
            return;
        }
    }
    ctx->pc = 0x11DA98u;
    // 0x11da98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DA98u;
    {
        const bool branch_taken_0x11da98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11da98) {
            ctx->pc = 0x11DAA8u;
            return;
        }
    }
    ctx->pc = 0x11DAA0u;
    // 0x11daa0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x11DAA0u;
    {
        const bool branch_taken_0x11daa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAA0u;
        // 0x11daa4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11daa0) {
            ctx->pc = 0x11DC2Cu;
            return;
        }
    }
    ctx->pc = 0x11DAA8u;
}
