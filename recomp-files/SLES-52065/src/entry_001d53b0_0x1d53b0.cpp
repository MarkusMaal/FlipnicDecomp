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

// Function: entry_001d53b0
// Address: 0x1d53b0 - 0x1d53d8
void entry_001d53b0_0x1d53b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d53b0_0x1d53b0");
#endif

    ctx->pc = 0x1d53b0u;

    // 0x1d53b0: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1d53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1d53b4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1d53b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d53b8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1d53b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d53bc: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1d53bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x1d53c0: 0x2cc200f7  sltiu       $v0, $a2, 0xF7
    ctx->pc = 0x1d53c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)247) ? 1 : 0);
    // 0x1d53c4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D53C4u;
    {
        const bool branch_taken_0x1d53c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C4u;
        // 0x1d53c8: 0xae230204  sw          $v1, 0x204($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c4) {
            ctx->pc = 0x1D5460u;
            return;
        }
    }
    ctx->pc = 0x1D53CCu;
    // 0x1d53cc: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x1d53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1d53d0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D53D0u;
    {
        const bool branch_taken_0x1d53d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d53d0) {
            ctx->pc = 0x1D53D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53D0u;
            // 0x1d53d4: 0xae200248  sw          $zero, 0x248($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D53D8u;
            return;
        }
    }
    ctx->pc = 0x1D53D8u;
}
