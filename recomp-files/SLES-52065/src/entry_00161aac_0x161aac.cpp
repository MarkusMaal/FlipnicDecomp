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

// Function: entry_00161aac
// Address: 0x161aac - 0x161acc
void entry_00161aac_0x161aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161aac_0x161aac");
#endif

    ctx->pc = 0x161aacu;

    // 0x161aac: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x161aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161ab0: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x161AB0u;
    {
        const bool branch_taken_0x161ab0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AB0u;
        // 0x161ab4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ab0) {
            ctx->pc = 0x161ACCu;
            return;
        }
    }
    ctx->pc = 0x161AB8u;
    // 0x161ab8: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x161ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x161abc: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x161ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161ac4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x161ac4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161ac8: 0x0  nop
    ctx->pc = 0x161ac8u;
    // NOP
    ctx->pc = 0x161accu;
}
