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

// Function: entry_001ae4a8
// Address: 0x1ae4a8 - 0x1ae4e4
void entry_001ae4a8_0x1ae4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae4a8_0x1ae4a8");
#endif

    ctx->pc = 0x1ae4a8u;

    // 0x1ae4a8: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1ae4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ae4ac: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1AE4ACu;
    {
        const bool branch_taken_0x1ae4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4ACu;
        // 0x1ae4b0: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4ac) {
            ctx->pc = 0x1AE578u;
            return;
        }
    }
    ctx->pc = 0x1AE4B4u;
    // 0x1ae4b4: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1AE4B4u;
    {
        const bool branch_taken_0x1ae4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae4b4) {
            ctx->pc = 0x1AE564u;
            return;
        }
    }
    ctx->pc = 0x1AE4BCu;
    // 0x1ae4bc: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x1ae4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1ae4c0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AE4C0u;
    {
        const bool branch_taken_0x1ae4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4C0u;
        // 0x1ae4c4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4c0) {
            ctx->pc = 0x1AE530u;
            return;
        }
    }
    ctx->pc = 0x1AE4C8u;
    // 0x1ae4c8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AE4C8u;
    {
        const bool branch_taken_0x1ae4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae4c8) {
            ctx->pc = 0x1AE510u;
            return;
        }
    }
    ctx->pc = 0x1AE4D0u;
    // 0x1ae4d0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ae4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ae4d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE4D4u;
    {
        const bool branch_taken_0x1ae4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae4d4) {
            ctx->pc = 0x1AE4E4u;
            return;
        }
    }
    ctx->pc = 0x1AE4DCu;
    // 0x1ae4dc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1AE4DCu;
    {
        const bool branch_taken_0x1ae4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae4dc) {
            ctx->pc = 0x1AE578u;
            return;
        }
    }
    ctx->pc = 0x1AE4E4u;
}
