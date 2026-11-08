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

// Function: entry_001c8208
// Address: 0x1c8208 - 0x1c8234
void entry_001c8208_0x1c8208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8208_0x1c8208");
#endif

    ctx->pc = 0x1c8208u;

    // 0x1c8208: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c820c: 0x1062009d  beq         $v1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1C820Cu;
    {
        const bool branch_taken_0x1c820c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C820Cu;
        // 0x1c8210: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c820c) {
            ctx->pc = 0x1C8484u;
            return;
        }
    }
    ctx->pc = 0x1C8214u;
    // 0x1c8214: 0x1068009b  beq         $v1, $t0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1C8214u;
    {
        const bool branch_taken_0x1c8214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1C8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8214u;
        // 0x1c8218: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8214) {
            ctx->pc = 0x1C8484u;
            return;
        }
    }
    ctx->pc = 0x1C821Cu;
    // 0x1c821c: 0x1069004b  beq         $v1, $t1, . + 4 + (0x4B << 2)
    ctx->pc = 0x1C821Cu;
    {
        const bool branch_taken_0x1c821c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x1C8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C821Cu;
        // 0x1c8220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c821c) {
            ctx->pc = 0x1C834Cu;
            return;
        }
    }
    ctx->pc = 0x1C8224u;
    // 0x1c8224: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8224u;
    {
        const bool branch_taken_0x1c8224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8224u;
        // 0x1c8228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8224) {
            ctx->pc = 0x1C8234u;
            return;
        }
    }
    ctx->pc = 0x1C822Cu;
    // 0x1c822c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1C822Cu;
    {
        const bool branch_taken_0x1c822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C822Cu;
        // 0x1c8230: 0x8e02006c  lw          $v0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c822c) {
            ctx->pc = 0x1C8488u;
            return;
        }
    }
    ctx->pc = 0x1C8234u;
}
