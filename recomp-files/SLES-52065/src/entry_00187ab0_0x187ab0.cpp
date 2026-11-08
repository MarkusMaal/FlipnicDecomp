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

// Function: entry_00187ab0
// Address: 0x187ab0 - 0x187adc
void entry_00187ab0_0x187ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ab0_0x187ab0");
#endif

    ctx->pc = 0x187ab0u;

    // 0x187ab0: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x187ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x187ab4: 0x144300e4  bne         $v0, $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x187AB4u;
    {
        const bool branch_taken_0x187ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x187ab4) {
            ctx->pc = 0x187E48u;
            return;
        }
    }
    ctx->pc = 0x187ABCu;
    // 0x187abc: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x187abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x187ac0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187AC0u;
    {
        const bool branch_taken_0x187ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x187ac0) {
            ctx->pc = 0x187ADCu;
            return;
        }
    }
    ctx->pc = 0x187AC8u;
    // 0x187ac8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x187ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x187acc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x187accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x187ad0: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x187ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x187ad4: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x187AD4u;
    {
        const bool branch_taken_0x187ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AD4u;
        // 0x187ad8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ad4) {
            ctx->pc = 0x187E58u;
            return;
        }
    }
    ctx->pc = 0x187ADCu;
}
