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

// Function: entry_0012d2a8
// Address: 0x12d2a8 - 0x12d2d4
void entry_0012d2a8_0x12d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d2a8_0x12d2a8");
#endif

    ctx->pc = 0x12d2a8u;

    // 0x12d2a8: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x12d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x12d2ac: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x12d2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x12d2b0: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x12d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x12d2b4: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x12d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x12d2b8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x12d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12d2bc: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x12d2bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d2c0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D2C0u;
    {
        const bool branch_taken_0x12d2c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x12D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2C0u;
        // 0x12d2c4: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2c0) {
            ctx->pc = 0x12D2D4u;
            return;
        }
    }
    ctx->pc = 0x12D2C8u;
    // 0x12d2c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D2C8u;
    {
        const bool branch_taken_0x12d2c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2C8u;
        // 0x12d2cc: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2c8) {
            ctx->pc = 0x12D2D8u;
            return;
        }
    }
    ctx->pc = 0x12D2D0u;
    // 0x12d2d0: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x12d2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    ctx->pc = 0x12d2d4u;
}
