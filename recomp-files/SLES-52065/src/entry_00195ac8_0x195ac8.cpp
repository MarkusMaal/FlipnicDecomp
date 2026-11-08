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

// Function: entry_00195ac8
// Address: 0x195ac8 - 0x195ae8
void entry_00195ac8_0x195ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195ac8_0x195ac8");
#endif

    ctx->pc = 0x195ac8u;

    // 0x195ac8: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x195ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x195acc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x195accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x195ad0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x195ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195ad8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x195AD8u;
    {
        const bool branch_taken_0x195ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AD8u;
        // 0x195adc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ad8) {
            ctx->pc = 0x195AE8u;
            return;
        }
    }
    ctx->pc = 0x195AE0u;
    // 0x195ae0: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x195ae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x195ae4: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x195ae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
    ctx->pc = 0x195ae8u;
}
