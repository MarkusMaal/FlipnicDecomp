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

// Function: entry_001d8030
// Address: 0x1d8030 - 0x1d805c
void entry_001d8030_0x1d8030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8030_0x1d8030");
#endif

    ctx->pc = 0x1d8030u;

    // 0x1d8030: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8034: 0x2445054c  addiu       $a1, $v0, 0x54C
    ctx->pc = 0x1d8034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1356));
    // 0x1d8038: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d8038u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d803c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1d803cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d8040: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1d8040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d8044: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1d8044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d8048: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8048u;
    {
        const bool branch_taken_0x1d8048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8048u;
        // 0x1d804c: 0x3066000f  andi        $a2, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8048) {
            ctx->pc = 0x1D805Cu;
            return;
        }
    }
    ctx->pc = 0x1D8050u;
    // 0x1d8050: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1d8050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d8054: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1d8054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8058: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d8058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x1d805cu;
}
