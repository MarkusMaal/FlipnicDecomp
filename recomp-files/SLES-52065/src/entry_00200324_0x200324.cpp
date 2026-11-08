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

// Function: entry_00200324
// Address: 0x200324 - 0x200348
void entry_00200324_0x200324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200324_0x200324");
#endif

    ctx->pc = 0x200324u;

    // 0x200324: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x200324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x200328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20032c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20032cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x200330: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x200330u;
    {
        const bool branch_taken_0x200330 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x200334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200330u;
        // 0x200334: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200330) {
            ctx->pc = 0x200380u;
            return;
        }
    }
    ctx->pc = 0x200338u;
    // 0x200338: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x200338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20033c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20033cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200340: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x200340u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x200344: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x200344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x200348u;
}
