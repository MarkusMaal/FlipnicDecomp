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

// Function: entry_001f2ef4
// Address: 0x1f2ef4 - 0x1f2f2c
void entry_001f2ef4_0x1f2ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2ef4_0x1f2ef4");
#endif

    ctx->pc = 0x1f2ef4u;

    // 0x1f2ef4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1f2ef4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ef8: 0x2692fb80  addiu       $s2, $s4, -0x480
    ctx->pc = 0x1f2ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966144));
    // 0x1f2efc: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F2EFCu;
    {
        const bool branch_taken_0x1f2efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EFCu;
        // 0x1f2f00: 0xae93fb80  sw          $s3, -0x480($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294966144), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2efc) {
            ctx->pc = 0x1F3028u;
            return;
        }
    }
    ctx->pc = 0x1F2F04u;
    // 0x1f2f04: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1f2f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1f2f08: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F2F08u;
    {
        const bool branch_taken_0x1f2f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F08u;
        // 0x1f2f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f08) {
            ctx->pc = 0x1F3014u;
            return;
        }
    }
    ctx->pc = 0x1F2F10u;
    // 0x1f2f10: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1f2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1f2f14: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1f2f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1f2f18: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f2f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f2f1c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F2F1Cu;
    {
        const bool branch_taken_0x1f2f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F1Cu;
        // 0x1f2f20: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f1c) {
            ctx->pc = 0x1F2F88u;
            return;
        }
    }
    ctx->pc = 0x1F2F24u;
    // 0x1f2f24: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f2f28: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f2f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f2f2cu;
}
