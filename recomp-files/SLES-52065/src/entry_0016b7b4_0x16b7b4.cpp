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

// Function: entry_0016b7b4
// Address: 0x16b7b4 - 0x16b7d4
void entry_0016b7b4_0x16b7b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b7b4_0x16b7b4");
#endif

    ctx->pc = 0x16b7b4u;

    // 0x16b7b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b7b8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16B7B8u;
    {
        const bool branch_taken_0x16b7b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7B8u;
        // 0x16b7bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7b8) {
            ctx->pc = 0x16B7E4u;
            return;
        }
    }
    ctx->pc = 0x16B7C0u;
    // 0x16b7c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b7c4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B7C4u;
    {
        const bool branch_taken_0x16b7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7C4u;
        // 0x16b7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7c4) {
            ctx->pc = 0x16B7D4u;
            return;
        }
    }
    ctx->pc = 0x16B7CCu;
    // 0x16b7cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16B7CCu;
    {
        const bool branch_taken_0x16b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7CCu;
        // 0x16b7d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7cc) {
            ctx->pc = 0x16B7F0u;
            return;
        }
    }
    ctx->pc = 0x16B7D4u;
}
