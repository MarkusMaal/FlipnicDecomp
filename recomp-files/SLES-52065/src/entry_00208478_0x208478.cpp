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

// Function: entry_00208478
// Address: 0x208478 - 0x2084a4
void entry_00208478_0x208478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208478_0x208478");
#endif

    ctx->pc = 0x208478u;

    // 0x208478: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x208478u;
    {
        const bool branch_taken_0x208478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208478u;
        // 0x20847c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208478) {
            ctx->pc = 0x208460u;
            return;
        }
    }
    ctx->pc = 0x208480u;
    // 0x208480: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x208480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x208484: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x208484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x208488: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208488u;
    {
        const bool branch_taken_0x208488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208488) {
            ctx->pc = 0x20848Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208488u;
            // 0x20848c: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2084ACu;
            return;
        }
    }
    ctx->pc = 0x208490u;
    // 0x208490: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x208490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x208494: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208494u;
    {
        const bool branch_taken_0x208494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208494u;
        // 0x208498: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208494) {
            ctx->pc = 0x2084A4u;
            return;
        }
    }
    ctx->pc = 0x20849Cu;
    // 0x20849c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20849Cu;
    {
        const bool branch_taken_0x20849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20849Cu;
        // 0x2084a0: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20849c) {
            ctx->pc = 0x2084A8u;
            return;
        }
    }
    ctx->pc = 0x2084A4u;
}
