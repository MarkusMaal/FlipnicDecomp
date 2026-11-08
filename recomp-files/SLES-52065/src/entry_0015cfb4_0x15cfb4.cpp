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

// Function: entry_0015cfb4
// Address: 0x15cfb4 - 0x15cfdc
void entry_0015cfb4_0x15cfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cfb4_0x15cfb4");
#endif

    ctx->pc = 0x15cfb4u;

    // 0x15cfb4: 0x0  nop
    ctx->pc = 0x15cfb4u;
    // NOP
    // 0x15cfb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15cfb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15cfbc: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x15cfbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15cfc0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15CFC0u;
    {
        const bool branch_taken_0x15cfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFC0u;
        // 0x15cfc4: 0x265203d0  addiu       $s2, $s2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfc0) {
            ctx->pc = 0x15CF78u;
            return;
        }
    }
    ctx->pc = 0x15CFC8u;
    // 0x15cfc8: 0x8e032cd0  lw          $v1, 0x2CD0($s0)
    ctx->pc = 0x15cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11472)));
    // 0x15cfcc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CFCCu;
    {
        const bool branch_taken_0x15cfcc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFCCu;
        // 0x15cfd0: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfcc) {
            ctx->pc = 0x15CFDCu;
            return;
        }
    }
    ctx->pc = 0x15CFD4u;
    // 0x15cfd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15CFD4u;
    {
        const bool branch_taken_0x15cfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFD4u;
        // 0x15cfd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfd4) {
            ctx->pc = 0x15CFF4u;
            return;
        }
    }
    ctx->pc = 0x15CFDCu;
}
