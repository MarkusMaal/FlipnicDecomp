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

// Function: entry_001ef314
// Address: 0x1ef314 - 0x1ef348
void entry_001ef314_0x1ef314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef314_0x1ef314");
#endif

    ctx->pc = 0x1ef314u;

    // 0x1ef314: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF314u;
    {
        const bool branch_taken_0x1ef314 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1EF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF314u;
        // 0x1ef318: 0x3c070022  lui         $a3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef314) {
            ctx->pc = 0x1EF37Cu;
            return;
        }
    }
    ctx->pc = 0x1EF31Cu;
    // 0x1ef31c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1ef31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1ef320: 0x8ce3a3d8  lw          $v1, -0x5C28($a3)
    ctx->pc = 0x1ef320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943704)));
    // 0x1ef324: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ef324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef328: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ef328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ef32c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF32Cu;
    {
        const bool branch_taken_0x1ef32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1EF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF32Cu;
        // 0x1ef330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef32c) {
            ctx->pc = 0x1EF348u;
            return;
        }
    }
    ctx->pc = 0x1EF334u;
    // 0x1ef334: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ef334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef338: 0xace2a3d8  sw          $v0, -0x5C28($a3)
    ctx->pc = 0x1ef338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943704), GPR_U32(ctx, 2));
    // 0x1ef33c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF33Cu;
    {
        const bool branch_taken_0x1ef33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF33Cu;
        // 0x1ef340: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef33c) {
            ctx->pc = 0x1EF388u;
            return;
        }
    }
    ctx->pc = 0x1EF344u;
    // 0x1ef344: 0x0  nop
    ctx->pc = 0x1ef344u;
    // NOP
    ctx->pc = 0x1ef348u;
}
