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

// Function: entry_001440ec
// Address: 0x1440ec - 0x14410c
void entry_001440ec_0x1440ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001440ec_0x1440ec");
#endif

    ctx->pc = 0x1440ecu;

    // 0x1440ec: 0x0  nop
    ctx->pc = 0x1440ecu;
    // NOP
    // 0x1440f0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1440f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1440f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1440f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1440f8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1440f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1440fc: 0xb4302b  sltu        $a2, $a1, $s4
    ctx->pc = 0x1440fcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x144100: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x144100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x144104: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x144104u;
    {
        const bool branch_taken_0x144104 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x144108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144104u;
        // 0x144108: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144104) {
            ctx->pc = 0x1440A4u;
            return;
        }
    }
    ctx->pc = 0x14410Cu;
}
