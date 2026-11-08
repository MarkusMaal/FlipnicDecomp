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

// Function: entry_00202178
// Address: 0x202178 - 0x2021a8
void entry_00202178_0x202178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202178_0x202178");
#endif

    ctx->pc = 0x202178u;

label_202178:
    // 0x202178: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x202178u;
    {
        const bool branch_taken_0x202178 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202178u;
        // 0x20217c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202178) {
            ctx->pc = 0x2021C4u;
            return;
        }
    }
    ctx->pc = 0x202180u;
    // 0x202180: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x202180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x202184: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x202184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x202188: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x202188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20218c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x20218cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x202190: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x202190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x202194: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x202194u;
    {
        const bool branch_taken_0x202194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202194u;
        // 0x202198: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202194) {
            ctx->pc = 0x202178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202178;
        }
    }
    ctx->pc = 0x20219Cu;
    // 0x20219c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x20219cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2021A0u;
    {
        const bool branch_taken_0x2021a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021A0u;
        // 0x2021a4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021a0) {
            ctx->pc = 0x2021C4u;
            return;
        }
    }
    ctx->pc = 0x2021A8u;
}
