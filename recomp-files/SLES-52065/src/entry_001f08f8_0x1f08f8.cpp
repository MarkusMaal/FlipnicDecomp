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

// Function: entry_001f08f8
// Address: 0x1f08f8 - 0x1f0924
void entry_001f08f8_0x1f08f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f08f8_0x1f08f8");
#endif

    ctx->pc = 0x1f08f8u;

label_1f08f8:
    // 0x1f08f8: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1f08f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f08fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F08FCu;
    {
        const bool branch_taken_0x1f08fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08FCu;
        // 0x1f0900: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08fc) {
            ctx->pc = 0x1F0930u;
            return;
        }
    }
    ctx->pc = 0x1F0904u;
    // 0x1f0904: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1f0904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f0908: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f090c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1f090cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0910: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f0910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f0914: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0914u;
    {
        const bool branch_taken_0x1f0914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0914) {
            ctx->pc = 0x1F0918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0914u;
            // 0x1f0918: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F08F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f08f8;
        }
    }
    ctx->pc = 0x1F091Cu;
    // 0x1f091c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F091Cu;
    {
        const bool branch_taken_0x1f091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F091Cu;
        // 0x1f0920: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f091c) {
            ctx->pc = 0x1F0934u;
            return;
        }
    }
    ctx->pc = 0x1F0924u;
}
