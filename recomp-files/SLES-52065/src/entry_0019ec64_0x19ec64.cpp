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

// Function: entry_0019ec64
// Address: 0x19ec64 - 0x19ec98
void entry_0019ec64_0x19ec64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ec64_0x19ec64");
#endif

    ctx->pc = 0x19ec64u;

    // 0x19ec64: 0x0  nop
    ctx->pc = 0x19ec64u;
    // NOP
    // 0x19ec68: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x19ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ec6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ec70: 0x8c832830  lw          $v1, 0x2830($a0)
    ctx->pc = 0x19ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10288)));
    // 0x19ec74: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19EC74u;
    {
        const bool branch_taken_0x19ec74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ec74) {
            ctx->pc = 0x19ECE0u;
            return;
        }
    }
    ctx->pc = 0x19EC7Cu;
    // 0x19ec7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ec80: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19EC80u;
    {
        const bool branch_taken_0x19ec80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ec80) {
            ctx->pc = 0x19ECBCu;
            return;
        }
    }
    ctx->pc = 0x19EC88u;
    // 0x19ec88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EC88u;
    {
        const bool branch_taken_0x19ec88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec88) {
            ctx->pc = 0x19EC98u;
            return;
        }
    }
    ctx->pc = 0x19EC90u;
    // 0x19ec90: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19EC90u;
    {
        const bool branch_taken_0x19ec90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC90u;
        // 0x19ec94: 0x8f828714  lw          $v0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec90) {
            ctx->pc = 0x19ED04u;
            return;
        }
    }
    ctx->pc = 0x19EC98u;
}
