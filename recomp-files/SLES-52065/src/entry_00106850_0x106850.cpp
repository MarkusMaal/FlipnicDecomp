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

// Function: entry_00106850
// Address: 0x106850 - 0x106894
void entry_00106850_0x106850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106850_0x106850");
#endif

    ctx->pc = 0x106850u;

    // 0x106850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10685c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10685cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106860: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x106860u;
    {
        const bool branch_taken_0x106860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106860u;
        // 0x106864: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106860) {
            ctx->pc = 0x1068B0u;
            return;
        }
    }
    ctx->pc = 0x106868u;
    // 0x106868: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10686c: 0x24427b70  addiu       $v0, $v0, 0x7B70
    ctx->pc = 0x10686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31600));
    // 0x106870: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106870u;
    {
        const bool branch_taken_0x106870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106870u;
        // 0x106874: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106870) {
            ctx->pc = 0x106894u;
            return;
        }
    }
    ctx->pc = 0x106878u;
    // 0x106878: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10687c: 0x24427bd0  addiu       $v0, $v0, 0x7BD0
    ctx->pc = 0x10687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31696));
    // 0x106880: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106880u;
    {
        const bool branch_taken_0x106880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106880u;
        // 0x106884: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106880) {
            ctx->pc = 0x106894u;
            return;
        }
    }
    ctx->pc = 0x106888u;
    // 0x106888: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10688c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x106890: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x106890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x106894u;
}
