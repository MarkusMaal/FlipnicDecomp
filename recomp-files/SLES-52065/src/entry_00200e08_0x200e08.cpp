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

// Function: entry_00200e08
// Address: 0x200e08 - 0x200e30
void entry_00200e08_0x200e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200e08_0x200e08");
#endif

    ctx->pc = 0x200e08u;

    // 0x200e08: 0x12800038  beqz        $s4, . + 4 + (0x38 << 2)
    ctx->pc = 0x200E08u;
    {
        const bool branch_taken_0x200e08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E08u;
        // 0x200e0c: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e08) {
            ctx->pc = 0x200EECu;
            return;
        }
    }
    ctx->pc = 0x200E10u;
    // 0x200e10: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x200e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x200e14: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x200E14u;
    {
        const bool branch_taken_0x200e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E14u;
        // 0x200e18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e14) {
            ctx->pc = 0x200EF0u;
            return;
        }
    }
    ctx->pc = 0x200E1Cu;
    // 0x200e1c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x200e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x200e20: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x200e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e24: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x200e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x200e28: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x200e28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e2c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x200e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x200e30u;
}
