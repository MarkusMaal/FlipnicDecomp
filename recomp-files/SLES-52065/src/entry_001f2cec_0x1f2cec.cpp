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

// Function: entry_001f2cec
// Address: 0x1f2cec - 0x1f2d24
void entry_001f2cec_0x1f2cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2cec_0x1f2cec");
#endif

    ctx->pc = 0x1f2cecu;

    // 0x1f2cec: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1f2cecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cf0: 0x2692fb80  addiu       $s2, $s4, -0x480
    ctx->pc = 0x1f2cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966144));
    // 0x1f2cf4: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F2CF4u;
    {
        const bool branch_taken_0x1f2cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CF4u;
        // 0x1f2cf8: 0xae93fb80  sw          $s3, -0x480($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294966144), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cf4) {
            ctx->pc = 0x1F2E20u;
            return;
        }
    }
    ctx->pc = 0x1F2CFCu;
    // 0x1f2cfc: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1f2cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1f2d00: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F2D00u;
    {
        const bool branch_taken_0x1f2d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D00u;
        // 0x1f2d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d00) {
            ctx->pc = 0x1F2E0Cu;
            return;
        }
    }
    ctx->pc = 0x1F2D08u;
    // 0x1f2d08: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1f2d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1f2d0c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1f2d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1f2d10: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f2d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f2d14: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F2D14u;
    {
        const bool branch_taken_0x1f2d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D14u;
        // 0x1f2d18: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d14) {
            ctx->pc = 0x1F2D80u;
            return;
        }
    }
    ctx->pc = 0x1F2D1Cu;
    // 0x1f2d1c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f2d20: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f2d24u;
}
