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

// Function: entry_001e7e30
// Address: 0x1e7e30 - 0x1e7e64
void entry_001e7e30_0x1e7e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7e30_0x1e7e30");
#endif

    ctx->pc = 0x1e7e30u;

label_1e7e30:
    // 0x1e7e30: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e7e30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7e34: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e7e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e7e38: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1e7e38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7e3c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1e7e3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e7e40: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1e7e40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7e44: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1e7e44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e7e48: 0xa2430004  sb          $v1, 0x4($s2)
    ctx->pc = 0x1e7e48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e7e4c: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x1e7e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1e7e50: 0xa2430005  sb          $v1, 0x5($s2)
    ctx->pc = 0x1e7e50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e7e54: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E7E54u;
    {
        const bool branch_taken_0x1e7e54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E54u;
        // 0x1e7e58: 0x26520006  addiu       $s2, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e54) {
            ctx->pc = 0x1E7E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7e30;
        }
    }
    ctx->pc = 0x1E7E5Cu;
    // 0x1e7e5c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1E7E5Cu;
    {
        const bool branch_taken_0x1e7e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E5Cu;
        // 0x1e7e60: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e5c) {
            ctx->pc = 0x1E809Cu;
            return;
        }
    }
    ctx->pc = 0x1E7E64u;
}
