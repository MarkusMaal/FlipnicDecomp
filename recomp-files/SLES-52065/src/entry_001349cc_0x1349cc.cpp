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

// Function: entry_001349cc
// Address: 0x1349cc - 0x134a44
void entry_001349cc_0x1349cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001349cc_0x1349cc");
#endif

    ctx->pc = 0x1349ccu;

label_1349cc:
    // 0x1349cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1349ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1349d0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1349d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1349d4: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x1349d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1349d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1349d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1349dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1349dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1349e0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1349e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1349e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1349e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1349e8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1349e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1349ec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1349ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1349f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1349f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1349f4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1349f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1349f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1349f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1349fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1349fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x134a00: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x134a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x134a04: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x134a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x134a08: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x134a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x134a0c: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x134a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x134a10: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x134a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x134a14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x134a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x134a18: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x134a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x134a1c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x134a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x134a20: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x134a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x134a24: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x134a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x134a28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x134a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x134a2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x134a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x134a30: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x134a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x134a34: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x134A34u;
    {
        const bool branch_taken_0x134a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A34u;
        // 0x134a38: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a34) {
            ctx->pc = 0x1349CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1349cc;
        }
    }
    ctx->pc = 0x134A3Cu;
    // 0x134a3c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x134a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x134a40: 0x92420092  lbu         $v0, 0x92($s2)
    ctx->pc = 0x134a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 146)));
    ctx->pc = 0x134a44u;
}
