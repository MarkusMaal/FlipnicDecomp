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

// Function: entry_001d51d0
// Address: 0x1d51d0 - 0x1d5218
void entry_001d51d0_0x1d51d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d51d0_0x1d51d0");
#endif

    ctx->pc = 0x1d51d0u;

label_1d51d0:
    // 0x1d51d0: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1d51d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1d51d4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1d51d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d51d8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d51d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d51dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d51dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d51e0: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x1d51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1d51e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d51e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d51e8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1d51e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1d51ec: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x1d51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    // 0x1d51f0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d51f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d51f4: 0x1466fff6  bne         $v1, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D51F4u;
    {
        const bool branch_taken_0x1d51f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1D51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51F4u;
        // 0x1d51f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51f4) {
            ctx->pc = 0x1D51D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51d0;
        }
    }
    ctx->pc = 0x1D51FCu;
    // 0x1d51fc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D51FCu;
    {
        const bool branch_taken_0x1d51fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51FCu;
        // 0x1d5200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51fc) {
            ctx->pc = 0x1D5218u;
            return;
        }
    }
    ctx->pc = 0x1D5204u;
    // 0x1d5204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d520c: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1D520Cu;
    ctx->pc = 0x1D5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D520Cu;
    // 0x1d5210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5214u;
    // 0x1d5214: 0x0  nop
    ctx->pc = 0x1d5214u;
    // NOP
    ctx->pc = 0x1d5218u;
}
