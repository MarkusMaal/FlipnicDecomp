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

// Function: entry_001ff338
// Address: 0x1ff338 - 0x1ff350
void entry_001ff338_0x1ff338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff338_0x1ff338");
#endif

    ctx->pc = 0x1ff338u;

    // 0x1ff338: 0x12050019  beq         $s0, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FF338u;
    {
        const bool branch_taken_0x1ff338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF338u;
        // 0x1ff33c: 0x2962003f  slti        $v0, $t3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff338) {
            ctx->pc = 0x1FF3A0u;
            return;
        }
    }
    ctx->pc = 0x1FF340u;
    // 0x1ff340: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1ff340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff344: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x1ff344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x1ff348: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff34c: 0x0  nop
    ctx->pc = 0x1ff34cu;
    // NOP
    ctx->pc = 0x1ff350u;
}
