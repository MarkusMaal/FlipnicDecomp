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

// Function: entry_001939d4
// Address: 0x1939d4 - 0x193a0c
void entry_001939d4_0x1939d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001939d4_0x1939d4");
#endif

    ctx->pc = 0x1939d4u;

    // 0x1939d4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1939d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1939d8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1939d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1939dc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1939dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1939e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1939e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1939e4: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1939e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1939e8: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1939E8u;
    {
        const bool branch_taken_0x1939e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1939ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939E8u;
        // 0x1939ec: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939e8) {
            ctx->pc = 0x193A64u;
            return;
        }
    }
    ctx->pc = 0x1939F0u;
    // 0x1939f0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1939f4: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1939F4u;
    {
        const bool branch_taken_0x1939f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1939F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939F4u;
        // 0x1939f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939f4) {
            ctx->pc = 0x193A38u;
            return;
        }
    }
    ctx->pc = 0x1939FCu;
    // 0x1939fc: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1939FCu;
    {
        const bool branch_taken_0x1939fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1939fc) {
            ctx->pc = 0x193A0Cu;
            return;
        }
    }
    ctx->pc = 0x193A04u;
    // 0x193a04: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x193A04u;
    {
        const bool branch_taken_0x193a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A04u;
        // 0x193a08: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a04) {
            ctx->pc = 0x193A90u;
            return;
        }
    }
    ctx->pc = 0x193A0Cu;
}
