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

// Function: entry_00202c00
// Address: 0x202c00 - 0x202c34
void entry_00202c00_0x202c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202c00_0x202c00");
#endif

    ctx->pc = 0x202c00u;

    // 0x202c00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x202c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202c04: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x202c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x202c08: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x202c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x202c0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202C0Cu;
    {
        const bool branch_taken_0x202c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C0Cu;
        // 0x202c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c0c) {
            ctx->pc = 0x202C34u;
            return;
        }
    }
    ctx->pc = 0x202C14u;
    // 0x202c14: 0x1222ff8e  beq         $s1, $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x202C14u;
    {
        const bool branch_taken_0x202c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x202C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C14u;
        // 0x202c18: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c14) {
            ctx->pc = 0x202A50u;
            return;
        }
    }
    ctx->pc = 0x202C1Cu;
    // 0x202c1c: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x202c1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x202c20: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x202c20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x202c24: 0x3412bff0  ori         $s2, $zero, 0xBFF0
    ctx->pc = 0x202c24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x202c28: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x202c28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x202c2c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x202C2Cu;
    {
        const bool branch_taken_0x202c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c2c) {
            ctx->pc = 0x202CA0u;
            return;
        }
    }
    ctx->pc = 0x202C34u;
}
