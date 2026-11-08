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

// Function: entry_001d8090
// Address: 0x1d8090 - 0x1d80bc
void entry_001d8090_0x1d8090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8090_0x1d8090");
#endif

    ctx->pc = 0x1d8090u;

    // 0x1d8090: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8094: 0x2447054c  addiu       $a3, $v0, 0x54C
    ctx->pc = 0x1d8094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1356));
    // 0x1d8098: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d8098u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d809c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1d809cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d80a0: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x1d80a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d80a4: 0x3046000f  andi        $a2, $v0, 0xF
    ctx->pc = 0x1d80a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1d80a8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D80A8u;
    {
        const bool branch_taken_0x1d80a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80A8u;
        // 0x1d80ac: 0x628c0  sll         $a1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80a8) {
            ctx->pc = 0x1D80BCu;
            return;
        }
    }
    ctx->pc = 0x1D80B0u;
    // 0x1d80b0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1d80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d80b4: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1d80b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d80b8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x1d80bcu;
}
