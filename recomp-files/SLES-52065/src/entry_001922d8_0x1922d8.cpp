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

// Function: entry_001922d8
// Address: 0x1922d8 - 0x192320
void entry_001922d8_0x1922d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001922d8_0x1922d8");
#endif

    ctx->pc = 0x1922d8u;

    // 0x1922d8: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x1922d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1922dc: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1922dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1922e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1922e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1922e4: 0x8ca62c10  lw          $a2, 0x2C10($a1)
    ctx->pc = 0x1922e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11280)));
    // 0x1922e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1922e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1922ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1922ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1922f0: 0x8ca52c1c  lw          $a1, 0x2C1C($a1)
    ctx->pc = 0x1922f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x1922f4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1922f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1922f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1922f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1922fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1922fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x192300: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x192300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x192304: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x192304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x192308: 0x9063003f  lbu         $v1, 0x3F($v1)
    ctx->pc = 0x192308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
    // 0x19230c: 0x9084003f  lbu         $a0, 0x3F($a0)
    ctx->pc = 0x19230cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 63)));
    // 0x192310: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192310u;
    {
        const bool branch_taken_0x192310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x192314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192310u;
        // 0x192314: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192310) {
            ctx->pc = 0x192320u;
            return;
        }
    }
    ctx->pc = 0x192318u;
    // 0x192318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192318u;
    {
        const bool branch_taken_0x192318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192318u;
        // 0x19231c: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192318) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x192320u;
}
