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

// Function: entry_001e7df4
// Address: 0x1e7df4 - 0x1e7e24
void entry_001e7df4_0x1e7df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7df4_0x1e7df4");
#endif

    ctx->pc = 0x1e7df4u;

label_1e7df4:
    // 0x1e7df4: 0x24a5fffa  addiu       $a1, $a1, -0x6
    ctx->pc = 0x1e7df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x1e7df8: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x1e7df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1e7dfc: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x1e7dfcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7e00: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x1e7e00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e7e04: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1e7e04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e7e08: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x1e7e08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e7e0c: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x1e7e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e7e10: 0x90a40004  lbu         $a0, 0x4($a1)
    ctx->pc = 0x1e7e10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e7e14: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x1e7e14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e7e18: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x1e7e18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1e7e1c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E7E1Cu;
    {
        const bool branch_taken_0x1e7e1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E1Cu;
        // 0x1e7e20: 0xa0640005  sb          $a0, 0x5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e1c) {
            ctx->pc = 0x1E7DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7df4;
        }
    }
    ctx->pc = 0x1E7E24u;
}
