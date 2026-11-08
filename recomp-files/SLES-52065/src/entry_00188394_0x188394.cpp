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

// Function: entry_00188394
// Address: 0x188394 - 0x1883cc
void entry_00188394_0x188394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188394_0x188394");
#endif

    ctx->pc = 0x188394u;

    // 0x188394: 0x0  nop
    ctx->pc = 0x188394u;
    // NOP
    // 0x188398: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x188398u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18839c: 0x14a0fee4  bnez        $a1, . + 4 + (-0x11C << 2)
    ctx->pc = 0x18839Cu;
    {
        const bool branch_taken_0x18839c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1883A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18839Cu;
        // 0x1883a0: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18839c) {
            ctx->pc = 0x187F30u;
            return;
        }
    }
    ctx->pc = 0x1883A4u;
    // 0x1883a4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x1883a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1883a8: 0x1440fee2  bnez        $v0, . + 4 + (-0x11E << 2)
    ctx->pc = 0x1883A8u;
    {
        const bool branch_taken_0x1883a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1883ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883A8u;
        // 0x1883ac: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883a8) {
            ctx->pc = 0x187F34u;
            return;
        }
    }
    ctx->pc = 0x1883B0u;
    // 0x1883b0: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x1883b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1883b4: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x1883b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1883b8: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x1883b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1883bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1883BCu;
    {
        const bool branch_taken_0x1883bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1883C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883BCu;
        // 0x1883c0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883bc) {
            ctx->pc = 0x1883CCu;
            return;
        }
    }
    ctx->pc = 0x1883C4u;
    // 0x1883c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1883c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1883c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1883ccu;
}
