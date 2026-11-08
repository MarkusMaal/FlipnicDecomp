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

// Function: entry_0017b5d0
// Address: 0x17b5d0 - 0x17b5f4
void entry_0017b5d0_0x17b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b5d0_0x17b5d0");
#endif

    ctx->pc = 0x17b5d0u;

    // 0x17b5d0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x17b5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17b5d4: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x17b5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x17b5d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B5D8u;
    {
        const bool branch_taken_0x17b5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5D8u;
        // 0x17b5dc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5d8) {
            ctx->pc = 0x17B5F4u;
            return;
        }
    }
    ctx->pc = 0x17B5E0u;
    // 0x17b5e0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x17b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x17b5e4: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x17b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x17b5e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17b5ec: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x17b5ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b5f0: 0x0  nop
    ctx->pc = 0x17b5f0u;
    // NOP
    ctx->pc = 0x17b5f4u;
}
