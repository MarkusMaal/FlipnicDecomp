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

// Function: entry_00161480
// Address: 0x161480 - 0x1614a4
void entry_00161480_0x161480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161480_0x161480");
#endif

    ctx->pc = 0x161480u;

    // 0x161480: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x161480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161484: 0x9383848c  lbu         $v1, -0x7B74($gp)
    ctx->pc = 0x161484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935692)));
    // 0x161488: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x161488u;
    {
        const bool branch_taken_0x161488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161488u;
        // 0x16148c: 0x80a4006c  lb          $a0, 0x6C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161488) {
            ctx->pc = 0x1614A4u;
            return;
        }
    }
    ctx->pc = 0x161490u;
    // 0x161490: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x161490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x161494: 0x24630e50  addiu       $v1, $v1, 0xE50
    ctx->pc = 0x161494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3664));
    // 0x161498: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16149c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x16149cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1614a0: 0x0  nop
    ctx->pc = 0x1614a0u;
    // NOP
    ctx->pc = 0x1614a4u;
}
