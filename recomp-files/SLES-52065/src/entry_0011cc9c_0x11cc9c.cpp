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

// Function: entry_0011cc9c
// Address: 0x11cc9c - 0x11ccc0
void entry_0011cc9c_0x11cc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc9c_0x11cc9c");
#endif

    ctx->pc = 0x11cc9cu;

    // 0x11cc9c: 0x0  nop
    ctx->pc = 0x11cc9cu;
    // NOP
    // 0x11cca0: 0x8e2600ac  lw          $a2, 0xAC($s1)
    ctx->pc = 0x11cca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11cca4: 0x3c01000f  lui         $at, 0xF
    ctx->pc = 0x11cca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
    // 0x11cca8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x11cca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x11ccac: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CCACu;
    {
        const bool branch_taken_0x11ccac = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCACu;
        // 0x11ccb0: 0xc12024  and         $a0, $a2, $at (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccac) {
            ctx->pc = 0x11CCC0u;
            return;
        }
    }
    ctx->pc = 0x11CCB4u;
    // 0x11ccb4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11CCB4u;
    {
        const bool branch_taken_0x11ccb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ccb4) {
            ctx->pc = 0x11CCC0u;
            return;
        }
    }
    ctx->pc = 0x11CCBCu;
    // 0x11ccbc: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x11ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->pc = 0x11ccc0u;
}
