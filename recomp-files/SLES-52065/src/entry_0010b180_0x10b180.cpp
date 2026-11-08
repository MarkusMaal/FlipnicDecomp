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

// Function: entry_0010b180
// Address: 0x10b180 - 0x10b198
void entry_0010b180_0x10b180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b180_0x10b180");
#endif

    ctx->pc = 0x10b180u;

    // 0x10b180: 0x93878488  lbu         $a3, -0x7B78($gp)
    ctx->pc = 0x10b180u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x10b184: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B184u;
    {
        const bool branch_taken_0x10b184 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B184u;
        // 0x10b188: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b184) {
            ctx->pc = 0x10B198u;
            return;
        }
    }
    ctx->pc = 0x10B18Cu;
    // 0x10b18c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x10b18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x10b190: 0x90232eb5  lbu         $v1, 0x2EB5($at)
    ctx->pc = 0x10b190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2B2EB5u));
    // 0x10b194: 0x0  nop
    ctx->pc = 0x10b194u;
    // NOP
    ctx->pc = 0x10b198u;
}
